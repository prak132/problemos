// ryan

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define debug(x) for(auto i : x) {cout << i << " ";} cout << endl;

using namespace std;

void setIO(string prob) {
	freopen((prob + ".in").c_str(), "r", stdin);
	freopen((prob + ".out").c_str(), "w", stdout);
}

vector<int> prime;

void f(){
    prime.pb(2);
    for(int i = 3; i < 1000000; i++){
        bool works = true;
        for(int j : prime){
            if(j > sqrt(i)){
                break;
            }
            if(i % j == 0){
                works = false;
            }
        }

        if(works){
            prime.pb(i);
        }
    }
}

void solve(){
    int x; cin >> x;

    int result = 1;

    for(int i : prime){
        if(i > x){
            break;
        }
        if(x % i == 0){
            result++;
        }
    }

    cout << result << endl;

    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    f();

    int t; cin >> t;
    while(t--){
        solve();
    }
}