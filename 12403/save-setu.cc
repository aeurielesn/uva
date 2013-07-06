#include <cstdio>
#include <cstring>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

int main() {
	freopen("12403.in", "r", stdin);
	int T, K, donations = 0;

	scanf("%d\n", &T);
	FOR(i,T) {
		if(scanf("donate %d\n", &K)){
			donations += K;
		}
		else {
			scanf("report\n");
			printf("%d\n", donations);
		}
	}

	return 0;
}
