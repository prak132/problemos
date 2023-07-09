#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int N, M;scanf("%d %d", &N, &M);
    std::vector<std::pair<int, int>> rsegs(N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &rsegs[i].first, &rsegs[i].second);
    }
    std::vector<std::pair<int, int>> bobSegments(M);
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &bobSegments[i].first, &bobSegments[i].second);
    }
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    while (b < N && c < M) {
        int f = rsegs[b].first - d;
        int g = bobSegments[c].first - e;
        int h = std::min(f, g);
        int j = bobSegments[c].second - rsegs[b].second;
        a = std::max(a, j);
        d += h;
        e += h;
        if (d == rsegs[b].first) {
            b++;
            d = 0;
        } 
        if (e == bobSegments[c].first) {
            c++;
            e = 0;
        }
    }
    printf("%d\n", a);
    return 0;
}
