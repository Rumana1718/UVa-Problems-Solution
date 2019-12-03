#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tc,a,b,i;
    cin>> tc;
    for( i=1; i<=tc; i++)
    {
        int sum=0;
        cin>>a >> b;
        for(int j=a; j<=b; j++)
            if(j%2!=0)
        {
            sum=sum+j;

        }
        cout<<"Case "<<i<<": "<<sum;
        cout<<endl;
    }

    return 0;
}
