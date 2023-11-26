#include <bits/stdc++.h>
using namespace std;

struct Event {
    int time;
    int value;
    int quantity;
    bool operator<(const Event& other) const {
        return time < other.time || (time == other.time && value > other.value);
    }
};

int main() {
    int n, m; cin >> n >> m;
    vector<Event> events;
    for (int i = 0; i < n; ++i) {
        int t, x;
        cin >> t >> x;
        events.push_back({t, 0, x});
    } for (int i = 0; i < m; ++i) {
        int t, v, x;
        cin >> t >> v >> x;
        events.push_back({t, v, x});
    } sort(events.begin(), events.end());
    priority_queue<int> food_values;
    int max_value = 0, max_time = 0;
    for (const auto& event : events) {
        if (event.value == 0) {
            int students_to_serve = event.quantity;
            while (students_to_serve--) {
                if (!food_values.empty()) {
                    food_values.pop();
                }
            }
        } else {
            for (int i = 0; i < event.quantity; ++i) {
                food_values.push(event.value);
            }
        } if (!food_values.empty() && food_values.top() > max_value) {
            max_value = food_values.top();
            max_time = event.time;
        }
    } cout << max_value << " " << max_time << endl;
    return 0;
}
