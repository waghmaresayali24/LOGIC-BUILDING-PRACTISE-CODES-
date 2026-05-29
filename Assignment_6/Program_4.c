/*
input:2
output:2 4 6 8 10 12 14 16 18 20
*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt<=iNo*10;iCnt+=iNo)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("ENter number:");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}