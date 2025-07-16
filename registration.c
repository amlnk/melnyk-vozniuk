#include <stdio.h>
#include <string.h>
#include "registration.h"


void initUsers(UserList* list) {
    list->count = 0;
}


int registerUser(UserList* list) {
    if (list->count >= MAX_USERS) {
        printf("User list is full.\n");
        return 0;
    }

    char username[50];
    char password[50];
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;  

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

   
    for (int i = 0; i < list->count; i++) {
        if (strcmp(list->users[i].username, username) == 0) {
            printf("Username already exists.\n");
            return 0;
        }
    }

    strcpy(list->users[list->count].username, username);
    strcpy(list->users[list->count].password, password);
    list->count++;

    printf("Registration successful!\n");
    return 1;
}

int loginUser(UserList* list) {
    char username[50];
    char password[50];

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    for (int i = 0; i < list->count; i++) {
        if (strcmp(list->users[i].username, username) == 0 &&
            strcmp(list->users[i].password, password) == 0) {
            printf("Login successful!\n");
            return 1;
        }
    }

    printf("Invalid username or password.\n");
    return 0;
}

