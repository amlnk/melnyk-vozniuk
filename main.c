#include <stdio.h>
#include "cart.h"
#include "menu.h"
#include "registration.h"
#include "delivery.h"

int main() {
    UserList users;
    initUsers(&users);

    Cart cart;
    initCart(&cart);

    int loggedIn = 0;
    int mainChoice, authChoice;

    
    while (!loggedIn) {
        printf("\n=== Welcome to Food Order Service ===\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &authChoice);
        getchar();

        switch (authChoice) {
            case 1:
                registerUser(&users);
                break;
            case 2:
                loggedIn = loginUser(&users);
                break;
            case 0:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

   
    while (1) {
        printf("\n=== FOOD ORDER SERVICE ===\n");
        printf("1. Add dish to cart\n");
        printf("2. View cart\n");
        printf("3. Checkout\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &mainChoice);
        getchar();

        switch (mainChoice) {
            case 1:
                addToCart(&cart);
                break;
            case 2:
                viewCart(&cart);
                break;
            case 3:
                checkout(&cart);
                inputDeliveryAddress();
                break;
            case 0:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}