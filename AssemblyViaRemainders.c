#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n); 
        
        int x[n-1];
        for (int i = 0; i < n-1; i++) {
            scanf("%d", &x[i]); 
        }
        
        int a[n];
        a[0] = 1; 
        for (int i = 1; i < n; i++) {
            a[i] = (x[i-1] + a[i-1]) % 1000000000; 
        }
        
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    
    return 0;
}
