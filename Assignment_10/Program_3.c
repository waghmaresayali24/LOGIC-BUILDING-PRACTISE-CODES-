/*
input:5
output:5000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iM=0;
    iM=1000;

    int iKm=0;
    iKm=iM*iNo;
    return iKm;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Distance");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in meter is%d",iRet);
    return 0;
}