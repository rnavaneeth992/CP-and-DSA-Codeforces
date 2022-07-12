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
        char st=s[0];
        int count=1,z=-1;
        for(i=1;i<s.length();i++)
        {
            if(st==s[i])
            {
                count++;
            }
            else
            {
                if(count==1)
                {
                    z=1;
                    break;
                }
                st=s[i];
                count=1;
            }
        }
        if(count==1)
        {
            z=1;
        }
        if(z==1)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
    }
}
