#ifndef ACCOUNT_H
#define ACCOUNT_H

// MACRO for account info
#define MAX_ACCOUNT 10
#define MAX_LENGTH_NAME 20

struct account
{
    int id;
    char name[MAX_LENGTH_NAME];
    double money;
};


#endif //ACCOUNT_