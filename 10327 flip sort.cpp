#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a[1000];
    int i;
    while(cin>>t)
    {

        for(i=0;i<t;i++)
        {
            cin>>a[i];
        }
         int ans=0;
         for( i=1; i<t;i++)
            for(int j=0; j<i;j++ )
                if (a[j]>a[i])
                    ++ans;


         cout<<"Minimum exchange operations : "<<ans<<endl;
    }
}
