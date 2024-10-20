#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B); // Read input values for each test case

        int k = log2(N); // Calculate the number of rounds
        int total_time = k * A + (k - 1) * B; // Calculate total time
        printf("%d\n", total_time); // Output the result
    }

    return 0;
}
