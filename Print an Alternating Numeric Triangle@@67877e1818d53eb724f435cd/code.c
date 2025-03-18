#include <stdio.h>

int main() {
    int i, j, n;

    // Taking input for the number of rows
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {         // Loop for rows
        for (j = 1; j <= i; j++) {      // Loop for columns
            printf("%d ", (i + j) % 2); // Added space after the digit
        }
        printf("\n");
    }

    return 0;
}
