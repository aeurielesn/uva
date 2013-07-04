#include <cstdio>
#include <cstring>

#define MAX 1000
#define FOR(i,n) for(int i = 0; i < (n); ++i)

int main(){
    char ch;
    int len;
    bool is_quote = false;
    char str[MAX + 1];
    memset(str, sizeof(str), 0);

    while(fgets(str, MAX, stdin)) {
        len = strlen(str);
        FOR(i,len) {
            ch = str[i];
            if(ch == '"') {
                printf("%s", is_quote ? "''" : "``");
                is_quote = !is_quote;
            }
            else {
                printf("%c", ch);
            }
        }
    }

    return 0;
}
