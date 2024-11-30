
#include<stdio.h>
#include<string.h>

// structures can be copied in two types one we can coy whole structure or we can copy memeber by member

typedef struct Account{
    unsigned int acc_num;
    char acc_holder_name[32];
    float balance;
    char type[16];
    unsigned long long int phone_num;
}Account;

void printAccount(Account); // function declaration

void printAccount(Account account)
{
    puts("Account details are:");
    printf("%-15s : %-10u \n", "Account-Num", account.acc_num);
    printf("%-15s : %-10s \n", "Acc Holder Name", account.acc_holder_name);
    printf("%-15s : %-10.2f \n", "Acc Balance", account.balance);
    printf("%-15s : %-10s \n", "Account Type", account.type);
    printf("%-15s : %10llu", "Phone Number", account.phone_num);
}

int main(){


    Account acc1 = {234451, "Praveen", 45000, "employee", 9900990099L};
    Account acc2, acc3;

    acc2=acc1; // copying the structure at a whole structure 

    // To copy member by member :

    strcpy(acc3.acc_holder_name, acc1.acc_holder_name); // we use strcpy because it not a single char it is an string so we use strcpy.
    acc3.acc_num = acc1.acc_num;
    acc3.balance = acc1.balance;
    strcpy(acc3.type, acc1.type);
    acc3.phone_num = acc1.phone_num;  


    printAccount(acc3);
    puts("\n----------------------------------------");
    printAccount(acc2);

}




