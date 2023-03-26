/*
问题描述
求1+2+3+...+n的值。
输入格式
输入包括一个整数n。
输出格式
输出一行，包括一个整数，表示 1+2+3+...+n 的值。
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    cin>>n;
    if(n<1||n>1000000000)
    cout<<false;
    else
    {
        for(int i=1;i<=n;i++)
        {
         sum=sum+i;
        }
    cout<<sum;
    }
    
    return 0;
}
