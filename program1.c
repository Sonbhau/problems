
//1.Program to divide two numbers
#include<stdio.h>
double Divide(double dNo1,double dNo2)
{
    double dAns = 0 ;
    if(dNo2==0)
    {
        return -1;
    }
    dAns = dNo1/dNo2;
    return dAns;
}
int main()
{
    double dValue1 =  0 ;
    double dValue2 = 0;
    double dRet = 0 ; 
    printf("Enter first number:");
    scanf("%lf",&dValue1);
     printf("Enter second number:");
    scanf("%lf",&dValue2);
    dRet=Divide(dValue1,dValue2);
    printf("Division is %lf",dRet);
    return 0 ;
}
