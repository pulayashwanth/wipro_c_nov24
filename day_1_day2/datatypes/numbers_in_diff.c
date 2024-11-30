

# include <stdio.h>


int main(){
    int num =79;
    printf("%d  %i  %o  %x  %X \n", num, num, num, num, num);
    // 79  79 117  4f  4F
    int num2 = 0173;
    printf("%d  %i  %o  %x  %X \n", num2, num2, num2, num2, num2);
    //     123 123  173 7b  7B
    int num3 = 0x5d;
    printf("%d  %i  %o  %x  %X \n", num3, num3, num3, num3, num3);
    //     94   94  136 5d  5D

}


// "%0" is Unsigned octal integer

// "%x" is hexadecimal

// "%X" is hexadecimal in caps AtoZ