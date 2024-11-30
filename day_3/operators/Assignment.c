//  *, ++, --, + , - , % , / , - ,+

#include <stdio.h>

int main(){ 

    int a , b; 
    puts("enter the two values seperated by comma : ");
    scanf("%d,%d",&a,&b);

    printf("a * b : %d\n",a*b);
    printf("a + b : %d\n",a+b);
    printf("a / b : %d\n",a/b);  // normal division  gives the quotient 
    printf("a % b  : %d\n",a%b); // modular division gives the remainder if the remainder is 0 it means it is perfectly divisable if we modulo % 10 we will get the last digit 
    printf("a++ : %d\n",a++); // post increment 
    printf("++a : %d\n",++a); // pre increment 
    printf("a-- : %d\n",a--); // post decrement 
    printf("--a : %d\n",--a); // pre decrement 

    return 0; 
}


// precedience of assignment operators 

// * / %  

// + - 

// = /-