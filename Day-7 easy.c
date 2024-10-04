#include <stdio.h>

int main() {
    int X; 
    const int assignments = 3; 
    const int hoursPerAssignment = 1; 
    
    const int deadline = 10; 

    printf("Enter the starting time (X pm): ");
    scanf("%d", &X);
    
    int finishTime = X + (assignments * hoursPerAssignment);
    
    if (finishTime <= deadline) {
        printf("Yes, Janmansh can complete all assignments on time.\n");
    } else {
        printf("No, Janmansh cannot complete all assignments on time.\n");
    }

    return 0;
}
