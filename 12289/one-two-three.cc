#include <cstdio>
#include <cstring>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

int solve(char *s){
	char sone[] = "one", stwo[] = "two";
	int number = 3, one = 0, two = 0;
	if(strlen(s) == 3) {
		FOR(i,3) {
			if(s[i] == sone[i]) one++;
			if(s[i] == stwo[i]) two++;
		}
		number = (one > two) ? 1 : 2;
	}
	return number;
}

int main() {
	int K;
	char s[10];

	scanf("%d\n", &K);
	FOR(i,K) {
		scanf("%s\n", s);
		printf("%d\n", solve(s));
	}

	return 0;
}
