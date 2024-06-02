#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Number of test cases
    
    while (t--) {
        int n;
        scanf("%d", &n); // Size of the grid
        
        // Output the center point
        printf("1 1\n");
        
        // Output the remaining points forming a star pattern
        for (int i = 1; i < n; ++i) {
            printf("%d %d\n", i + 1, 1); // Points to the right of the center
            printf("1 %d\n", i + 1); // Points below the center
        }
    }
    
    return 0;
}
