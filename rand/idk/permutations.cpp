#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
//lexiografic order
using namespace std;
void print(vector<int> a, int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    do {
        print(a, n);
    } while(next_permutation(a.begin(), a.end()));

    return 0;
}
//clang++ rand/idk/permutations.cpp -std=c++11