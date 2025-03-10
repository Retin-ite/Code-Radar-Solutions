#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input the height of the triangle
    scanf("%d", &n);
    
    // Loop to print the mirrored right-angle triangle
    for (i = 0; i < n; i++) {
        
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        
        // Print stars
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}
