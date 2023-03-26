/*
问题描述
其中Fi=Faonacci数列的递推公式为:F[n]=(F[n-1]+F[n-2])
当n比较大时，现在我们想知道
10007 的余数是多少
输入格式
整数n
输出格式
表示Fn除以10007 的余数
答案是要求Fn除以10007的余数，因此我们只要能算出这个余数即可
说明:在本题中，
而不需要先计算出Fn的准确值，再将计算的结果除以10007取余数，直接计算余数往往比
先算出原数再取余简
*/

#include<iostream>


#define maxn 100001
using namespace std;
int n,i;
int F[maxn];
int main()
{
    
    cin>>n;
    F[1]=1;F[2]=1;
    
    for(i=3;i<=n;++i)
    {
        F[i]=(F[i-1]+F[i-2])%10007;
    }
    cout<<F[n];
}
