# include <stdio.h>

int main(){
    int num1,num2,num3,biggest;
    printf("Enter three numbers : \n");
    scanf("%d %d %d",&num1,&num2,&num3);

    biggest = ((num1>num2)&&(num1>num3))?num1:(num2>num3?num2:num3);

    printf("biggest among 3 = %d", biggest);

    

}

