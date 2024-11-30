
#include <stdio.h>

// print the multiplication table of the user input 
// n*1 
//n*2
// n*10


void multiplication_table(int number){

    for(int i =1; i<11;i++){

        printf(" %d * %d : %d\n",number,i,(number*i));
        }


}


int main(){

int number;
printf("Enter the number for which you want to print the table : ");
scanf("%d",&number);

multiplication_table(number);







}