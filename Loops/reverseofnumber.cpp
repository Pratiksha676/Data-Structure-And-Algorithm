#include<iostream>
using namespace std;
int main()
{
    int num, sum;
    cin>>num;
    sum=0;
    while(num)
    {
        int digit = num % 10;
        sum=sum * 10 + digit;
        num = num / 10;
    }
    cout<<sum;
    return 0;
}