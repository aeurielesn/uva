#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

int solve(int n){
	return abs((((((((n * 567) / 9) + 7492) * 235)/47) - 498)/10)%10);
}

int main() {
	int t;
	vector<int> v(100);

	scanf("%d", &t);

	FOR(i,t){
		int n;
		scanf("%d", &n);
		printf("%d\n", solve(n));
	}

	return 0;
}
