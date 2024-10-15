//1.Program to divide two numbers
#include<iostream>
using namespace std;
double Divide(double dNo1 , double dNo2)
{
    double dAns = 0.0;
    if(dNo2==0)
    {
        return -1;
    }
    dAns = dNo1/dNo2;
    return dAns;

}
int main()
{
    double dValue1 = 0.0;
    double dValue2 = 0.0;
    double dRet = 0.0;

    cout<<"Enter first number:";
    cin>>dValue1;
    cout<<"Enter second number:";
    cin>>dValue2;
    dRet = Divide(dValue1,dValue2);
    cout<<"Division is:"<<dRet;
    
    return 0 ;
}
