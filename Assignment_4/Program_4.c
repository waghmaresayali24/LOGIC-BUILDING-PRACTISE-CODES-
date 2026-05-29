/*
INPUT:!2
OUTPUT:50
*/

#include<stdio.h>

int SumNonFactor(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("ENter the number:");
    scanf("%d",&iValue);

    iRet=SumNonFactor(iValue);
    printf("%d",iRet);

    return 0;

}

//TIME CoMPLEXITY: N