#include <stdio.h>

struct Mobile {
    char company[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    int n;

    printf("Enter the number of mobiles: ");
    scanf("%d", &n);

    struct Mobile mobiles[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for mobile %d:\n", i + 1);

        printf("Company: ");
        scanf("%s", mobiles[i].company);

        printf("Color: ");
        scanf("%s", mobiles[i].color);

        printf("Model: ");
        scanf("%s", mobiles[i].model);

        printf("Price: ");
        scanf("%f", &mobiles[i].price);
    }

    printf("\nLIST OF MOBILES:\n");
    for (int i = 0; i < n; i++) {
        printf("\nMobile %d:\n", i + 1);
        printf("Company: %s\n", mobiles[i].company);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: %.2f\n", mobiles[i].price);
    }

    5
}
