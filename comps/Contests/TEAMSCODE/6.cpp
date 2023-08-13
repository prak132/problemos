// ryan + parkhar (partials)

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define debug(x)          \
    for (auto i : x)      \
    {                     \
        cout << i << " "; \
    }                     \
    cout << endl;
#define int ll

using namespace std;

void setIO(string prob)
{
    freopen((prob + ".in").c_str(), "r", stdin);
    freopen((prob + ".out").c_str(), "w", stdout);
}

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    int ans = INT_MAX;

    sort(b.begin(), b.end());
    do
    {
        int sum = 0;
        for(int i = 0 ; i < n; i++){
            sum += (n - i) * (i + 1) * (a[i]) * (b[i]);
        }
        ans = min(ans, sum);
    }while (next_permutation(b.begin(), b.end()));

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while (t--)
    {
        solve();
    }
}

/*
Intended solution (we did not make this but I understand how it works)

#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int n;cin>>n;
  vector<int>a(n);
  for(auto&i:a)
    cin>>i;
  vector<int>b(n);
  for(auto&i:b)
    cin>>i;
  for(int i=0;i<n;i++)
    a[i]=a[i]*(i+1)*(n-i);
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  reverse(b.begin(),b.end());
  int ans=0;
  for(int i=0;i<n;i++)
    ans+=a[i]*b[i];
  cout<<ans<<endl;
}

sort arr a cuz https://artofproblemsolving.com/wiki/index.php/Rearrangement_Inequality

*/