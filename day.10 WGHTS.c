#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);
        
        // Check if the weight W can be measured
        if (W == X || W == Y || W == Z || 
            W == X + Y || W == X + Z || W == Y + Z || 
            W == X + Y + Z) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
