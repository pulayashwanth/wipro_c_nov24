// Check if a number is Perfect Square

# include <stdio.h>
#include <math.h>


void perfect_square(float number){

    if( ( (int)(sqrt(number) *(int)(sqrt(number) ) )  ) == number){
     printf("%.2f is a an perfect square",number);
    }else{
        printf("%.2f is not a perfect square ",number);
    }

}

int main(){

    float number;
    printf("Enter the number to check perfect number : ");
    scanf("%f",&number);

    perfect_square(number);


}