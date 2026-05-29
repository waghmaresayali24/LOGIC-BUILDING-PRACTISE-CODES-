/*
input:-5
output: 8(4*2)
*/
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iMulti=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
        {
            iMulti=iMulti*iCnt;
        }
    }
    return iMulti;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("ENter NUmber:");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("EVne Factorial of numbe is %d",iRet);
    return 0;
}