#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="X++")
        {
            res++;
        }
        else if(s=="++X")
        {
            ++res;
        }
        else if(s=="X--")
        {
            res--;
        }
        else if(s=="--X")
        {
            --res;
        }
    }
    cout<<res<<endl;
    return 0;
 }