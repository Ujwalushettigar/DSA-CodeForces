#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    for (char &c : s) 
    {
        c = tolower(c);
    }
    for (char &c : t) 
    {
        c = tolower(c);
    }

    if (s < t) 
    {
        cout << -1 << endl;
    }
    else if (s > t) 
    {
        cout << 1 << endl;
    }
    else 
    {
        cout << 0 << endl;
    }
    return 0;
}