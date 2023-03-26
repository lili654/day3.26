/*
输入一个年份，若为闰年则输出yes，否则为no
*/
 
#include <iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;
    if(year%4==0&year%100!=0)
        cout<<"yes";
    else if(year%400==0)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
