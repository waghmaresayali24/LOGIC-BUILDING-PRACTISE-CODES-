/*
input:5
output: -7(8-15)
*/
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iEven=1;
    int iOdd=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }


    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
        {
            iEven=iEven*iCnt;
        }
        else
        {
            iOdd=iOdd*iCnt;
        }
        
    }
    return iEven-iOdd;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("ENter NUmber:");
    scanf("%d",&iValue);
    iRet = FactorialDiff(iValue);
    printf("Factorial Difference is %d",iRet);
    return 0;
}