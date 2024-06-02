#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101]; 
        scanf("%s", s); 

        int f = 0;
        for (int i = 0; i < strlen(s) - 1; i++) { 
            if (s[i] == 'i' && s[i + 1] == 't') {
                f = 1;
                break;
            }
        }

        if (f == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
