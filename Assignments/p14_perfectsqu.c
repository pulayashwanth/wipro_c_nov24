#include <stdio.h>
#include <math.h>

void perfect_square(int num){

    if(num <0 )
     puts("Please enter a positive number negative number can not be a perfect square ");
     return 0; 
    
    int root = (int)(sqrt(num));
    if( root*root == num )
     printf("%d is a perfect square ", num );
    else
     printf("%d is  NOT a perfect square ", num );

    }


int main (){
    int num;
    puts("enter a number to check wether it is an perfect square or not ");
    scanf("%d",& num );

    perfect_square(num);

}