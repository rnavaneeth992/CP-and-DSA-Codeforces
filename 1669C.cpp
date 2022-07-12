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
        int count1=0,count2=0;
        for(i=0;i<n;i=i+2)
        {
            if(a[i]%2==a[0]%2)
            {
                count1++;
            }
        }
        for(i=1;i<n;i=i+2)
        {
            if(a[i]%2==a[1]%2)
            {
                count2++;
            }
        }
        if(n%2==0)
        {
            if(count1==count2&&count1==n/2)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
        else
        {
            if(count1==n/2+1&count2==n/2)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
    }
}
