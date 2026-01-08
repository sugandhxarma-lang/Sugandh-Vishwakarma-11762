# Digital Root Calculator

## 📌 Project Description
The Digital Root Calculator is a C program that repeatedly adds the digits of a given number until a single-digit result is obtained.

## 🎯 Aim
To calculate the digital root of a number using loops and arithmetic operations.

## 🛠️ Technologies Used
- C Programming Language
- VS Code
- GitHub

## 📄 Algorithm
1. Read a number from the user.
2. Store the number in a variable.
3. Extract digits using modulus (% 10).
4. Add digits to a sum variable.
5. Remove the last digit using division (/ 10).
6. Repeat the process if the sum is greater than 9.
7. Continue until a single-digit result is obtained.
8. Display the final digital root.

## 💻 Source Code
```c
#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 9) {
        sum = 0;
        while (num > 0) {<img width="1910" height="1010" alt="Screenshot 2026-01-08 182907" src="https://github.com/user-attachments/assets/55470e60-e561-41f0-9663-b6fd9cb6bae2" />

            sum = sum + (num % 10);
            num = num / 10;
        }
        num = sum;
    }

    printf("Digital Root = %d\n", num);
    return 0;
}
🧪 Sample Output
<img width="959" height="503" alt="image" src="https://github.com/user-attachments/assets/4d921a38-fea9-4c17-8cda-1ccbef9a4f10" />

