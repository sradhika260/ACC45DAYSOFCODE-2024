#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read X and Y for each test case
        
        // Check if Y is at least 50% of X
        if (2 * Y >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}