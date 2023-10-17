#include<iostream>
using namespace std;
int sum(int num1,int num2);
double sum(double num1,int num2);
double sum(double num1,double num2);
double sum(int num1,double num2);
int sum(int num1,int num2,int num3);
double sum(int num1,int num2,double num3);
double sum(int num1,double num2,int num3);
double sum(int num1,double num2,double num3);
double sum(double num1,int num2,int num3);
double sum(double num1,int num2,double num3);
double sum(double num1,double num2,int num3);
double sum(double num1,double num2,double num3);
int main()
{
    cout<<sum(10,20)<<endl;
    cout<<sum(10.50,20)<<endl;
    cout<<sum(15.93,12.2)<<endl;
    cout<<sum(9,23.5)<<endl;
    cout<<sum(4,5)<<endl;

}
int sum(int num1,int num2)
{
    return num1+num2;
}
double sum(double num1,int num2)
{
    return num1+num2;
}
double sum(double num1,double num2)
{
    return num1+num2;
}
double sum(int num1,double num2)
{
    return num1+num2;
}
int sum(int num1,int num2,int num3)
{
    return num1+num2+num3;
}
double sum(int num1,int num2,double num3)
{
    return num1+num2+num3;
}
double sum(int num1,double num2,int num3)
{
    return num1+num2+num3;
}
double sum(int num1,double num2,double num3)
{
    return num1+num2+num3;
}
double sum(double num1,int num2,int num3)
{
    return num1+num2+num3;
}
double sum(double num1,int num2,double num3)
{
    return num1+num2+num3;
}
double sum(double num1,double num2,int num3)
{
    return num1+num2+num3;
}
double sum(double num1,double num2,double num3)
{
    return num1+num2+num3;
}

