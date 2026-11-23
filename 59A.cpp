#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(char c:s)
    {
        if(isupper(c))
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        for(char &c:s)
        {
            c=toupper(c);
        }
        cout<<s<<endl;
    }
    else
    {
        for(char &c:s)
        {
            c=tolower(c);
        }
        cout<<s<<endl;
    }
    return 0;
}