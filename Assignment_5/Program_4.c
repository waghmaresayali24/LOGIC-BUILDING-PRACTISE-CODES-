/*
INPUT: 18
OUTPUT: 1 3 5 7 9 11 13 15 17
*/

#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("ENter NUmber:");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}
//TIME COMPLEXITY:N