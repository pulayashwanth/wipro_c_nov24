// padding will happen in terms if 4 padding is nothing but the extra space that is taken by the computer.

# include <stdio.h>
typedef struct Account{

    unsigned int acc_num;
    char acc_holder_name[32];
    float balance;
    char type[16];
    unsigned long long int phone_num;

}ty_def;


int main(){
    ty_def  acc1;
    ty_def acc2 ={123};
    printf("size of acc1 object =%d\n", sizeof(acc1));

    puts("Account details are:\n");
    printf("account number = %-10u\n",acc2.acc_num);
    printf("account holder name  = %-10s\n",acc2.acc_holder_name);    printf("balance   = %-10.2f\n",acc2.balance);
    printf("type  = %-10s\n",acc2.type);
    printf("phone number : %10llu\n",acc2.phone_num);

}