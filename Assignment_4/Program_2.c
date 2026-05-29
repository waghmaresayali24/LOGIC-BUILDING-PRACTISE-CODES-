/*
INPUT:12
OUTPUT:6 4 3 2 1
*/

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt=0;
    

    for(iCnt=iNo/2;iCnt>=1;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d",iCnt);
        }
    }

}

int main()
{
    int iValue=0;

    printf("ENter number");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0; 
}

//TIME COPLEXITY : N/2