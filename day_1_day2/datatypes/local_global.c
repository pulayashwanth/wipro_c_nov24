

#include <stdio.h>

int global=10; // global variable it can be accessed or avilable to all the functions 

int main(){


int a=10; // this a is only avilable inside this block only (local to main)



{
 int a =4;// this a is only avilable inside this block only (local to this {})
 printf("inside the block : %d\n",a);
 printf("inside the block global  : %d\n",global);

}

printf("outside the block : %d\n",a);
printf("outside the block global  : %d\n",global);

}


// points to remember 

// if we have same variabke name as the global variable it will first give preference to the local variable if local variable is not present it will search for the outside that is global variable 