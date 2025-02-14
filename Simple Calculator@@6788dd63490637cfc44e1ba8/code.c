#include <stdio.h>

int main() {
    double a, b, result;
    char c;

    // Take input
    scanf("%lf %lf", &a, &b);
    getchar();  // Consume newline
    scanf("%c", &c);

    // Perform calculation
    if (c == '+')
        result = a + b;
    else if (c == '-')
        result = a - b;
    else if (c == '*')
        result = a * b;
    else if (c == '/') {
        if (b != 0)
            result = a / b;
        else {
            printf("Error");
            return 0;
        }
    } else {
        printf("Error");
        return 0;
    }

    // Print as integer if whole number, else with decimal
    if (result == (int)result)
        printf("%d", (int)result);
    else
        printf("%.2lf", result);

    return 0;
}
