#include <cstdio>
#include <string>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

string solve(int a, int b) {
	if(a < b) return "<";
	else if(a > b) return ">";
	return "=";
}

int main() {
	int t, a, b;

	scanf("%d\n", &t);
	FOR(i,t) {
		scanf("%d%d\n", &a, &b);
		printf("%s\n", solve(a, b).c_str());
	}

	return 0;
}
