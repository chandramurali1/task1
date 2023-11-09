// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int digit;
    int count = 0;
    int rem;
    printf("enter an integer: ");
    scanf("%d",&num);
    printf("enter a digit to find the frequency: ");
    scanf("%d",&digit);
    while(num != 0)
    {
        rem = num %10;
        if(rem == digit)
        {
            count++;
        }
        num /= 10;
    }
    
    printf("the frequency of a given digit is: %d ",count);

    return 0;
}