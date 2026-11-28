#include<bits/stdc++.h>
using namespace std;

int main()
{
    string i,j;
    cin>>i>>j;
    string t;
    for(int x=0;x<i.length();x++)
    {
        if(i[x]!=j[x])
        {
            t+='1';
        }
        else
        {
            t+='0';
        }
    }
    cout<<t<<endl;
    return 0;
}