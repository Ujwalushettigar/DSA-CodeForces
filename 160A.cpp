#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> res;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        res.push_back(x);
        sum+=x;
    }
    sort(res.begin(),res.end());
    int s=0;
    int cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        s+=res[i];
        sum-=res[i];
        cnt++;
        if(s>sum)
        {
            cout<<cnt<<endl;
            return 0;
        }
    }
    return 0;
}