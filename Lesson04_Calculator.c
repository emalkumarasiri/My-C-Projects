#include<stdio.h>

int main()
{
    int num1,num2,choice;

    printf("====== CALCULATOR ======\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Choose:\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter Number 1:\n");
            scanf("%d",&num1);
            printf("Enter Number 2:\n");
            scanf("%d",&num2);
            printf("Answer:%d\n",num1+num2);
            break;

        case 2:
            printf("Enter Number 1:\n");
            scanf("%d",&num1);
            printf("Enter Number 2:\n");
            scanf("%d",&num2);
            printf("Answer:%d\n",num1-num2);
            break;

        case 3:
           printf("Enter Number 1:\n");
            scanf("%d",&num1);
            printf("Enter Number 2:\n");
            scanf("%d",&num2);
            printf("Answer:%d\n",num1*num2);
            break;
        case 4:
            printf("Enter Number 1:\n");
            scanf("%d",&num1);
            printf("Enter Number 2:\n");
            scanf("%d",&num2);
            printf("Answer:%d\n",num1/num2);
            break;


        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
