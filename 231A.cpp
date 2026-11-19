#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<3;j++)
        {
            int k;
            cin>>k;
            if(k==1)
            {
                c++;
            }
        }
        if(c>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}