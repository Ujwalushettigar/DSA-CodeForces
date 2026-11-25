#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int h;
    cin>>h;
    vector<int> res(n);
    for(int i=0;i<n;i++)
    {
        cin>>res[i];
    }
    int len=0;
    for(int x:res)
    {
        if(x>h)
        {
            len+=2;
        }
        else
        {
            len+=1;
        }
    }
    cout<<len<<endl;
    return 0;
}