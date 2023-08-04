/*
ID: rathore6
TASK: gift1
LANG: C++          
*/

#include <bits/stdc++.h>
using namespace std;

string arr[10];
int money[10];

int lookup(string arr[], string name, int t) {
    for (int i = 0; i < t; ++i) {
        if (arr[i] == name) {
            return i;
        }
    } return 0;
}

int main() {
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
        money[i] = 0;
    } for (int k = 0; k < t; ++k) {
        string giverName; cin >> giverName;
        int totalMoney, numRecipients;
        cin >> totalMoney >> numRecipients;
        int giverIndex = lookup(arr, giverName, t);
        if (numRecipients > 0) {
            int moneyPerPerson = totalMoney / numRecipients;
            for (int i = 0; i < numRecipients; ++i) {
                string name; cin >> name;
                money[lookup(arr, name, t)] += moneyPerPerson;
            } money[giverIndex] -= totalMoney - (totalMoney%numRecipients);
        } else {
            money[giverIndex] += totalMoney;
        }
    } for (int i = 0; i < t; ++i) {
        cout << arr[i] << " " << money[i] << "\n";
    } return 0;
}
