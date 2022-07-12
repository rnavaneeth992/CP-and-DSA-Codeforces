#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k,n,temp;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        vector<int> a;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        int s=a[0],count=1,z=-1;
        for(i=1;i<n;i++)
        {
            if(s==a[i])
            {
                count++;
            }
            else
            {
                if(count>=3)
                {
                    z=1;
                    cout<<s<<"\n";
                    count=0;
                    break;
                }
                else
                {
                    s=a[i];
                    count=1;
                }
            }
        }
        if(count>=3)
        {
            z=1;
            cout<<s<<"\n";
        }
        if(z==-1)
        {
            cout<<-1<<"\n";
        }
    }
}
