#include<stdio.h>

int main()
{
    int num1= 0;
    int num2= 0;

    printf("Enter a value for num1 (1-10): ");
    scanf("%d", &num1);

    printf("Enter a value for num2 (1-10): ");
    scanf("%d", &num2);


    if(num1>=num2)
    {
        printf("Number %d is greater than or equal to %d.", num1, num2);
    }
    else
    {
        printf("Number %d id less than %d.", num1, num2);
    }

return 0;
}

