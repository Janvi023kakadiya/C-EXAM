#include <stdio.h>

int main() {
    int i, j;
    int k = 10;

    for (i = 0; i < 5; i++) {
  
        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        for (j = k- i; j >= 6; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

}