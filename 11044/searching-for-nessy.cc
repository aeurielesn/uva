#include <cstdio>
#include <cmath>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

double solve(double n, double m){
	return ceil((n - 2.)/3.) * ceil((m - 2.)/3.);
}

int main() {
	int t, n, m;

	scanf("%d", &t);

	FOR(i,t){
		scanf("%d%d", &n, &m);
		printf("%.0lf\n", solve(n * 1., m * 1.));
	}

	return 0;
}
