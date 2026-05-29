/*
INPUT:12
OUTPUT:144
*/
    

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt=0;
    int iProd=1;
    int iSum=0;

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iProd=iProd*iCnt;
            iSum=1;
        }

    }
    if(iSum==0)
    {
        return 0;
    }
    
    return iProd;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("ENter number");
    scanf("%d",&iValue);

    iRet=MultiFact(iValue);

    printf("%d",iRet);
    return 0; 
}