#include <stdio.h>
#include <string.h>

#define FOR(i,n) for(int i = 0; i < (n); ++i)
#define READLINE(s) gets(str); \
	st=str;
#define GETNUM(n) { \
	n=0; \
	while (*st>32) { \
		n*=10; n+=*st-'0'; \
		st++; \
	} \
	while (*st>0 && *st<=32) st++; \
}

int main() {
	char str[4000], *st;
	int C = 1, N, balance;

	READLINE(str); GETNUM(N);
	while(N) {
		balance = 0;
		READLINE(str);
		while(N--){
			if(*st == '0') balance--;
			else balance++;
			while (*st > 32) st++;
			while (*st > 0 && *st <= 32) st++;
		}
		printf("Case %d: %d\n", C++, balance);
		READLINE(str); GETNUM(N);
	}
	return 0;
}
