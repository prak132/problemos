#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class HashedString {
  private:
    static const long long M = 1e9 + 9;
    static const long long B = 9973;
    static vector<long long> pow;
    vector<long long> p_hash;
  public:
    HashedString(const string &s) : p_hash(s.size() + 1) {
        while (pow.size() <= s.size()) { pow.push_back((pow.back() * B) % M); }
        p_hash[0] = 0;
        for (int i = 0; i < s.size(); i++) {
            p_hash[i + 1] = ((p_hash[i] * B) % M + s[i]) % M;
        }
    }
    long long get_hash(int start, int end) {
        long long raw_val =
            (p_hash[end + 1] - (p_hash[start] * pow[end - start + 1] % M + M) % M);
        return (raw_val % M + M) % M;
    }
};
vector<long long> HashedString::pow = {1};

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    string s, m; cin >> s >> m;
    HashedString hs(s), hm(m);
    ll m_hash = hm.get_hash(0, m.size() - 1);
    ll cnt = 0;
    cout << m_hash << "\n";
    /*
    for (int i = 0; i + m.size()-1 < s.size(); i++) {
        if (hs.get_hash(i, i+m.size()-1) == m_hash) {
            cnt++;
        }
    } cout << cnt << "\n";
    */
    return 0;
    /*
        Hash the string s and m, then compare the hash of s with the hash of m
        We go theough the substrings one time
        O(n)
    */
}