/*
input:-5
output: 15(5*3*1)
*/
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt=0;
    int iMulti=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2!=0)
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
    iRet = OddFactorial(iValue);
    printf("Odd Factorial of numbe is %d",iRet);
    return 0;
}