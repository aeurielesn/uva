#include <cstdio>
#include <string>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

string solve(string word) {
	if(word == "Hajj") return "Hajj-e-Akbar";
	return "Hajj-e-Asghar";
}

int main() {
	freopen("12577.in", "r", stdin);
	int T, K = 1;
	char word[10];

	while(scanf("%s\n", word)) {
		string str(word);
		if(str == "*") break;
		printf("Case %d: %s\n", K++, solve(str).c_str());
	}

	return 0;
}
