#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0||n==1)
        {
        return 1;
        }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num;
    cout<<"Enter number = ";
    cin>>num;
    int result=fact(5);
    cout<<"Factorial = "<<result;
    return 0;
}
