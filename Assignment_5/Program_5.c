/*
INPUT:4
OUTPUT:4 8 12 16 20
*/

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo;iCnt<=5*iNo;iCnt+=4)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("ENter NUmber:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}