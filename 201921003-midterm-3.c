#include <stdio.h>
void swap(int *pa, int *pb)
{      
        int temp = *pa;
        *pa = *pb;
        *pb = temp;
}      
int main(void)
{      
        int num1 = 10, num2 = 20;
        swap(&num1, &num2);
        printf("%d %d", num1, num2);
}  
