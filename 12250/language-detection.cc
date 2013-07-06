#include <cstdio>
#include <string>

using namespace std;

#define FOR(i,n) for(int i = 0; i < (n); ++i)

string solve(string word) {
	if(word == "HELLO") return "ENGLISH";
	else if(word == "HOLA") return "SPANISH";
	else if(word == "HALLO") return "GERMAN";
	else if(word == "BONJOUR") return "FRENCH";
	else if(word == "CIAO") return "ITALIAN";
	else if(word == "ZDRAVSTVUJTE") return "RUSSIAN";
	return "UNKNOWN";
}

int main() {
	freopen("12250.in", "r", stdin);
	int T, K = 1;
	char word[100];

	while(scanf("%s\n", word)) {
		string str(word);
		if(str == "#") break;
		printf("Case %d: %s\n", K++, solve(str).c_str());
	}

	return 0;
}
