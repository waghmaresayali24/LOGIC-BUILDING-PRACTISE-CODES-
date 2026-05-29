/*
input:2
output:20 18 16 14 12 10 8 6 4 2 
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo*10;iCnt>=iNo;iCnt -= iNo)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue=0;
    printf("ENter number:");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}