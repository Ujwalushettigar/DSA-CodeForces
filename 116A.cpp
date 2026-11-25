#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int m=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum-=x;
        int y;
        cin>>y;
        sum+=y;
        if(sum>m)
        {
            m=sum;
        }
    }
    cout<<m<<endl;
    return 0;
}