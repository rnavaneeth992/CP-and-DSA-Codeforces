#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k,n;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        if(n>=1900)
        {
            cout<<"Division 1"<<"\n";
        }
        else if(n>=1600)
        {
            cout<<"Division 2"<<"\n";
        }
        else if(n>=1400)
        {
            cout<<"Division 3"<<"\n";
        }
        else
        {
            cout<<"Division 4"<<"\n";
        }
    }
}
