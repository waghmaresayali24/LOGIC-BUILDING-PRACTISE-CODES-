/*
input:5
output:120(5*4*3*2*1)
input:-5
output:120(5*4*3*2*1)
*/

#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt=0;
    int iMulti=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        iMulti=iMulti*iCnt;
    }
    return iMulti;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of Number is %d",iRet);

    return 0;
}