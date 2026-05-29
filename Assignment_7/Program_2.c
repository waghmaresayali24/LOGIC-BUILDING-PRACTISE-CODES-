/*
input:10
output:700
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt=0;
    iCnt=iNo*70;
    return  iCnt;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number of USD:");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);
    printf("value in INR is%d",iRet);
    return 0;
}