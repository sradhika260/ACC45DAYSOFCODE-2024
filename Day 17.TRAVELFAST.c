#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read X and Y for each test case
        if (X < Y) {
            printf("BIKE\n"); // Bike is faster
        } else if (X > Y) {
            printf("CAR\n"); // Car is faster
        } else {
            printf("SAME\n"); // Both take the same time
        }
    }
    return 0;
}