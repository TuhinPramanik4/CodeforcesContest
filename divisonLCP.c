#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the maximum LCP within the given range [l, r]
void calculate_LCP(const char* s, int n, int l, int r, int* max_lcp) {
    if (l == r) {
        max_lcp[0] = n - l + 1;
        return;
    }

    for (int i = l - 1; i < r; ++i) {
        int max_lcp_here = 0;
        for (int j = i + 1; j <= r; ++j) {
            int common_prefix = 0;
            while (j + common_prefix - 1 < n && s[i + common_prefix] == s[j + common_prefix]) {
                common_prefix++;
            }
            max_lcp_here = (common_prefix > max_lcp_here) ? common_prefix : max_lcp_here;
        }
        max_lcp[i - l + 1] = max_lcp_here;
    }
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases
    
    while (t--) {
        int n, l, r;
        scanf("%d %d %d", &n, &l, &r); // Length of the string and the range [l, r]
        
        char s[n + 1];
        scanf("%s", s); // Input string
        
        int* max_lcp = (int*)malloc((r - l + 1) * sizeof(int));
        if (max_lcp == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        
        // Calculate the maximum LCP for each position within the range [l, r]
        calculate_LCP(s, n, l, r, max_lcp);
        
        // Output the maximum LCP values for all positions within the range [l, r]
        for (int i = 0; i < r - l + 1; ++i) {
            printf("%d ", max_lcp[i]);
        }
        printf("\n");
        
        free(max_lcp); // Free allocated memory
    }
    
    return 0;
}
