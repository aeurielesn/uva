#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

int solve(int first, int second, int third){
	if(first > second) swap(first, second);
	if(first > third) swap(first, third);
	if(second > third) swap(second, third);
	return second;
}

int main() {
	int T;

	scanf("%d", &T);

	FOR(i,T){
		int first, second, third;
		scanf("%d%d%d", &first, &second, &third);
		printf("Case %d: %d\n", i + 1, solve(first, second, third));
	}

	return 0;
}
