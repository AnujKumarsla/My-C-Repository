#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    int a;
    printf("press given keys for the following options -"/*
    */"\n1. Square\n2. cube\n3. odd even\n4. positive negative\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Enter the number : ");
        scanf("%d",&a);
        printf("The square of the %d is %d",a,a*a);
        break;
    case 2:
        printf("Enter the number : ");
        scanf("%d",&a);
        printf("The cube of the %d is %d",a,a*a*a);
        break;
    
    case 3:
        printf("Enter the number : ");
        scanf("%d",&a);
        if(a%2==0)
            printf("Given number is even.");
        else
            printf("Given number is odd.");
        break;
    
    case 4:
        printf("Enter the number : ");
        scanf("%d",&a);
        if(a>0)
            printf("Given number is Positive.");
        else
            printf("Given number is Negative.");
        break;
    
    default:
        printf("You choose wrong option");
        break;
    }
    return 0;
}