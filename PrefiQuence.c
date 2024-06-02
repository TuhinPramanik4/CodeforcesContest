#include <stdio.h>
int max_prefix_subsequence(char *a, char *b, int n, int m) {
    int i = 0, j = 0;
    int max_k = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            max_k = i + 1; 
            i++;
        }
        j++;
    }

    return max_k;
}

int main() {
    int t;
    scanf("%d", &t); 
    
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m); 
        
        char a[n+1], b[m+1];
        scanf("%s", a); 
        scanf("%s", b);
        
        int max_k = max_prefix_subsequence(a, b, n, m);
        printf("%d\n", max_k);
    }
    
    return 0;
}
