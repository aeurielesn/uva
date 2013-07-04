#include <stdio.h>
#include <cstring>

#define MAX 100

int main(){
    char str[MAX + 1];
    memset(str, sizeof(str), 0);

    while(fgets(str, MAX, stdin)) {
        fputs(str, stdout);
    }

    return 0;
}
