#include<stdio.h>
int main()
{
    int mark;

    printf("Enter marak:\n");
    scanf("%d",&mark);

    if (mark < 0 || mark > 100)
    {
    printf("Invalid marks!\n");
    }
    else if (mark>=75)
    {
        printf("Grade A\n");
    }
    else if (mark>=65)    
    {
        printf("Grade B\n");
    }
    else if (mark>=55)
    {
        printf("Grade C\n");
    }
    else if(mark>=45)
    {
      printf("Grade S\n");
    }
    else{
        printf("Fail");
    }
    return 0;
}
