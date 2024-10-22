#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y); // Read N, X, and Y for each test case
        
        // Check if Y is a multiple of X and if the division result is within the range
        if (Y % X == 0 && Y / X <= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
