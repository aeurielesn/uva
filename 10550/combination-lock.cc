#include <cstdio>

using namespace std;

int cw(int from, int to) {
    int rotation = 0;
    if(to < from) rotation = from - to;
    else if(to > from) rotation = 40 - (to - from);
    return rotation;
}

int ccw(int from, int to) {
    return 40 - cw(from, to);
}

int solve(int start, int first, int second, int third) {
    return 720 + 360 + 9 * (cw(start, first) + ccw(first, second) + cw(second, third));
}

int main(){
    int start, first, second, third;

    while(scanf("%d%d%d%d", &start, &first, &second, &third) && (start + first + second + third)) {
        printf("%d\n", solve(start, first, second, third));
    }

    return 0;
}
