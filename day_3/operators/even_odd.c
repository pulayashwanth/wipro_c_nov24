#include <stdio.h>


void even_odd(int number){

if(number%2 == 0){
    printf("%d is an even number",number);
}
else{
    printf("%d is an odd number",number);

}

}
int main(){


    int number;

    printf("enter the number:");
    scanf("%d",&number);

    even_odd(number);

}