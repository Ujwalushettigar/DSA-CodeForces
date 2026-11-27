#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t="hello";
    int j=0;
    for(char c:s)
    {
        if(j<5 && c==t[j])
        {
            j++;
        }
    }
    if(j==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}