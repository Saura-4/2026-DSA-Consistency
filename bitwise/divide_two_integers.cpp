#include <iostream>

using namespace std;

int solution(int dividend,int divisor)
{
long long n=abs((long long)dividend);
long long d=abs((long long)divisor);
long long ans=0;
int sing= ((divisor<0)^(dividend<0))?-1:1;

while(n>=d)
{
    long long i=0;
    long long temp=d;

    while((temp<<1)<=n)
    {
        temp=temp<<1;
        i++;
    }
    n=n-temp;
    ans=ans+(1LL<<i);
}
    ans=sing*ans;
    if(ans>INT_MAX)return INT_MAX;
    if(ans<INT_MIN)return INT_MIN;
    return (int)ans;
};
int main()
{

int dividend=10;
int divisor=3;
cout<<solution(dividend,divisor);
}