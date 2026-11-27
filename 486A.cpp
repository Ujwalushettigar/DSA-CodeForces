#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long y=0;
    if(n%2==0)
    {
        y=n/2;
    }
    else
    {
        y=-(n+1)/2;
    }
    cout<<y<<endl;
    return 0;
}