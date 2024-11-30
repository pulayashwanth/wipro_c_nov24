// if we have same variabke name as the global variable it will first give preference to the local variable if local variable is not present it will search for the outside that is global variable 



# include <stdio.h>

int global = 3;
void call();


int main(){

    int global =4;
    
   printf("outside  the block : %d\n",global);//Inside main, the local variable global (with value 4) shadows the global variable global (with value 3). This means that within main, when you use global, the local variable is used.
   call();

}

 void call()
 {
        printf("inside the block : %d\n",global);//Inside call(), there is no local variable named global, so the global variable global (value 3) is accessed.
    }