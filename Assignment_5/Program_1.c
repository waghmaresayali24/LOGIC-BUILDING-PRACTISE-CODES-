/*
INPUT:5
OUTPUT:$ * $ *  $ * $ * $ *
*/
#include<stdio.h>
void Pattern(int iNo)
{
    int iPt=0;
    for(iPt=1;iPt<=iNo;iPt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    Pattern(iValue);

}

//TIME CoMPLEXITY: N