#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while(T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); // Read H, X, Y for each test case

        // Use the special attack first
        int H_remaining = H - Y;

        // Calculate the number of normal attacks needed
        int normal_attacks = (H_remaining + X - 1) / X;

        // Total attacks is 1 special attack + normal attacks
        int total_attacks = 1 + normal_attacks;

        printf("%d\n", total_attacks);
    }

    return 0;
}
