#include <stdio.h>
#include <stdlib.h> // for abs() function

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        // Calculate the minimum time to catch the thief
        int time = abs(X - Y);

        // Output the result
        printf("%d\n", time);
    }
    return 0;
}