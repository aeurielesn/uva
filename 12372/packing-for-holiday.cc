#include <cstdio>
#include <cstring>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

char* solve(int L, int W, int H){
	if(L <= 20 && W <= 20 && H <= 20)
		return "good";
	return "bad";
}

int main() {
	freopen("12372.in", "r", stdin);
	int T, L, W, H;

	scanf("%d\n", &T);
	FOR(i,T) {
		scanf("%d%d%d\n", &L, &W, &H);
		printf("Case %d: %s\n", i + 1, solve(L, W, H));
	}

	return 0;
}
