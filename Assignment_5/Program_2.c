/*
INPUT:8
OUTPUT:1 2 3 4 5 6  7 8
*/
#include<stdio.h>
void Dispay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    Dispay(iValue);

}

//TIME CoMPLEXITY: N