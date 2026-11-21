#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> mat(5,vector<int>(5));
    int k,l;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                k=i+1;
                l=j+1;
            }
        }
    }
    cout<<abs(k-3)+abs(l-3)<<endl;
    return 0;
}