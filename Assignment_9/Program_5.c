/*
input:2395
output:-15(2-17)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0;
    
    int iEven=0;
    int iOdd=0;
    
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;

        if(iDigit%2 ==0)
        {
            iEven=iDigit+iEven;
        }
        else
        {
            iOdd=iDigit+iOdd;
        }
    }
    return iEven-iOdd;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("%d",iRet);
    return 0;
}