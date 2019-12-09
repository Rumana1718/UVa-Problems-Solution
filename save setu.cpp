#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,sum=0,n;
    string s;
    cin>>tc;

     for( int i=1; i<=tc; i++)
    {

        cin>>s;
        if(s=="donate")
        {
            cin>>n;
            sum=sum+n;

        }
        else
        {

            cout<<sum;
            cout<<endl;

        }
    }

    return 0;
}
