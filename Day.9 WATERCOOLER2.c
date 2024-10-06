#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        // Calculate the maximum number of months
        int maxMonths = (Y - 1) / X;
        
        printf("%d\n", maxMonths);
    }
    
    return 0;
}
