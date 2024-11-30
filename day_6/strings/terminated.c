// single string will be terminated by "\0"


#include <stdio.h>
#include<string.h>

int main(){

char name[20];

puts("Enter the name:");
scanf("%s",&name); // the problem with scanf is it does not have the abilty to store the multiword strings 

gets(name);
printf("%s",name);




}