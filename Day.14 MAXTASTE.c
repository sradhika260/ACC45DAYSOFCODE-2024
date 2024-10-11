#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Read number of test cases
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d); // Read four tastiness values
        int maxTastiness = (a > b ? a : b) + (c > d ? c : d); // Calculate maximum tastiness
        printf("%d\n", maxTastiness); // Output the result
    }
    return 0;
}
