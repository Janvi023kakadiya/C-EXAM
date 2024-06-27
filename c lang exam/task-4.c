#include <stdio.h>

int divisible(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        return 1;  
    } else {
        return 0; 
    }
}

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    if (divisible(number)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }

    
}
