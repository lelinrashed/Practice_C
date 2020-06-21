#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    // int sum = 0;
    
    // for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    // {
    //     // printf("%d ", *(a + i));
    //     sum = sum + *(a + i);
    // }
    
    // printf("Sum : %d", sum);

    int *ptr = &a[3];

    printf("%d\n", *ptr);
    printf("%d\n", *ptr + 1);

    return 0;
}