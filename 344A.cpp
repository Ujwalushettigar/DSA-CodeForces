#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    if(s[1]=='1')
    {
        c=1;
    }
    else
    {
        c=0;
    }
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        cin>>s;
        if(s[0]=='1' && c==1)
        {
            cnt++;
        }
        else if(s[0]=='0' && c==0)
        {
            cnt++;
        }
        if(s[1]=='1')
        {
            c=1;
        }
        else
        {
            c=0;
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}