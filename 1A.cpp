#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long r = ceil((double)n/a);
    long long c = ceil((double)m/a);
    cout<<r*c<<endl;
    return 0;
}