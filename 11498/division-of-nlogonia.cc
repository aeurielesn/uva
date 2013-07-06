#include <cstdio>
#include <string>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

string solve(int n, int m, int x, int y){
	string location = "divisa";
	if(x < n && y > m) location = "NO";
	else if(x > n && y > m) location = "NE";
	else if(x > n && y < m) location = "SE";
	else if(x < n && y < m) location = "SO";
	return location;
}

int main() {
	int K;

	while(scanf("%d", &K) && K) {
		int n, m, x, y;
		scanf("%d%d", &n, &m);
		FOR(i,K){
			scanf("%d%d", &x, &y);
			printf("%s\n", solve(n, m, x, y).c_str());
		}
	}

	return 0;
}
