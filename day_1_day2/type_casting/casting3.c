// int num = (float)((int) 17.5 / 2.0);

// 1. 17.5 to 17 (explicit down cast from double to int)
// o/p: 17/2.0
// 2. Now, 17 is casted to 17.0 (implicit up cast from int to double)
// o/p: 17.0/2.0 = 8.50000000
// 3. 8.5 which is double is casted to float (explicit down cast from double to float)
// 4. 8.5f is casted to 8 (implicit down cast from float to int)

# include <stdio.h>
int main()
{
    int num = (float)((int)17.5 / 2.0);
    printf("%d", num);
}