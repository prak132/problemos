#include <bits/stdc++.h>
using namespace std;
#define pb push_back

bool cmp(pair<double, double> a, pair<double, double> b) {
    return a.second/a.first > b.second/b.first;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<double, double>> courses;
    for (int i = 0;i < n;i++) {
        double a, b;
        cin >> a >> b;
        courses.push_back({a, b});
    }
    sort(courses.begin(), courses.end(), cmp);
    double total = 0;
    double score = 0;
    for (int i = 0; i < k; i++) {
        total += courses[i].first;
        score += courses[i].second;
    }
    
    cout << setprecision(6) << score/total << '\n';
}

/*
3 2
5 3
2 1
2 2


*/