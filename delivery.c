#include <stdio.h>
#include <string.h>
#include "delivery.h"

void showDeliveryOptions() {
    printf("\n=== Delivery Areas ===\n");
    printf("1. Shevchenkivskyi\n");
    printf("2. Pecherskyi\n");
    printf("3. Solomianskyi\n");
    printf("4. Holosiivskyi\n");
    printf("5. Darnytskyi\n");
    printf("0. Cancel\n");
}
void inputDeliveryAddress() {
    int choice;
    showDeliveryOptions();
    printf("Choose delivery district: ");
    scanf("%d", &choice);
    getchar();

    switch (choice) {
        case 1:
            printf("Delivery selected: Shevchenkivskyi district\n");
            break;
        case 2:
            printf("Delivery selected: Pecherskyi district\n");
            break;
        case 3:
            printf("Delivery selected: Solomianskyi district\n");
            break;
        case 4:
            printf("Delivery selected: Holosiivskyi district\n");
            break;
        case 5:
            printf("Delivery selected: Darnytskyi district\n");
            break;
        case 0:
            printf("Delivery cancelled.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
}