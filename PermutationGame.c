#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Number of test cases
    
    while (t--) {
        int n, k, PB, PS;
        scanf("%d %d %d %d", &n, &k, &PB, &PS); // Length of permutation, duration of game, starting positions
        
        int p[n], a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]); // Elements of permutation p
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Elements of array a
        }
        
        long long score_Bodya = 0, score_Sasha = 0;
        for (int i = 0; i < k; i++) {
            // Update scores and positions for each player
            score_Bodya += a[p[PB - 1] - 1];
            score_Sasha += a[p[PS - 1] - 1];
            PB = p[PB - 1];
            PS = p[PS - 1];
            
            // If players are at the same position, draw the game
            if (PB == PS) {
                printf("Draw\n");
                break;
            }
        }
        
        // Determine the winner based on the final scores
        if (score_Bodya > score_Sasha)
            printf("Bodya\n");
        else if (score_Bodya < score_Sasha)
            printf("Sasha\n");
        else
            printf("Draw\n");
    }
    
    return 0;
}
