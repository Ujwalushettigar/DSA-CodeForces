#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    for(char c:s)
    {
        if(c!='+')
        {
            t+=c;
        }
    }
    sort(t.begin(),t.end());
    for(int i=0;i<t.size();i++)
    {
        cout<<t[i];
        if(i!=t.size()-1)
        {
            cout<<"+";
        }
    }
    return 0;
}