#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        string s;
        cin>>s;
        int max=-1;
        for(i=0;i<s.length();i++)
        {
            if(max<s[i]-48)
            {
                max=s[i]-48;
            }
        }
        cout<<max<<"\n";
    }
}
