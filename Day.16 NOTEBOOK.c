#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while(T--) {
        int N;
        scanf("%d", &N);  // Read the amount of pulp in kg
        printf("%d\n", 10 * N);  // Calculate and print the number of notebooks
    }

    return 0;
}