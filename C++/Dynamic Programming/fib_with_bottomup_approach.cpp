#include<iostream>

using namespace std;


int fab[2001];

int fib(int n)
{

    if(n==0 || n==1)
    {
        return n;
    }
    if(fab[n]!=-1)
    {
        return fab[n];
    }
    fab[n]=fib(n-1)+fib(n-2);
    return fab[n];
}

int main()
{
    for(int i=0;i<2001;i++)
    {
        fab[i]=-1;

    }
    int n;
    cin>>n;
    //int fab[n];
    int result=fib(n);
    cout<<result;

    return 0;
}
