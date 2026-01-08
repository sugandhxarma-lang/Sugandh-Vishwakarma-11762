#include <stdio.h>

int main() {
    int num, sum;

    // Step 1: Read number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 6–9: Repeat until single digit
    while (num > 9) {
        sum = 0;

        // Step 3–5: Extract and add digits
        while (num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }

        num = sum; // Store sum back into num
    }

    // Step 10: Print result
    printf("Digital Root = %d\n", num);

    return 0;
}