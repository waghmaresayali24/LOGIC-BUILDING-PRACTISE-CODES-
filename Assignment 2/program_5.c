#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL; 

int CheckEvenOdd(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==TRUE)
    {
        printf("The number is even");
    }

    else
    {
        printf("The number is Odd");
    }

    return 0;
}