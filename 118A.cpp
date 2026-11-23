#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(char &c:s)
    {
        c=tolower(c);
    }
    string res;
    for(char c:s)
    {
        if(c=='a'||c=='i'||c=='o'||c=='e'||c=='u'||c=='y')
        {}
        else
        {
            res+='.';
            res+=c;
        }
    }
    cout<<res<<endl;
    return 0;
}