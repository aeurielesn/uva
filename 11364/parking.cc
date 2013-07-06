#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

int solve(vector<int>& v, int n){
	int distance = 0;
	FOR(i,n-1){
		distance += v[i + 1] - v[i];
	}
	return 2 * distance;
}

int main() {
	int t;
	vector<int> v(100);

	scanf("%d", &t);

	FOR(i,t){
		int n;
		scanf("%d", &n);
		FOR(j,n) scanf("%d", &v[j]);
		sort(v.begin(), v.begin() + n);
		printf("%d\n", solve(v, n));
	}

	return 0;
}
