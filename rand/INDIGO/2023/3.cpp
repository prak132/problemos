#include <iostream>
using namespace std;
//I solved 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, b, x, y;
    cin >> n >> b >> x >> y;
    int edgeTiles = 4 * (n - 1);
    int innerTiles = (n - 2) * (n - 2);
    int cost = edgeTiles * y + innerTiles * x; 

    if (cost <= b) {
        cout << "Walter will like this lab" << endl;
    } else {
        cout << "Sorry Mr. Fring, no can do" << endl;
    }

    return 0;
}
