#ifndef REGISTRATION_H
#define REGISTRATION_H

#define MAX_USERS 100

typedef struct {
    char username[50];
    char password[50];
} User;

typedef struct {
    User users[MAX_USERS];
    int count;
} UserList;

void initUsers(UserList* list);
int registerUser(UserList* list);
int loginUser(UserList* list);

#endif