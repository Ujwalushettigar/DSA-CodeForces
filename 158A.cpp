#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int t=nums[k-1];
    int cnt=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>=t && nums[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}