#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b, count, sq;
    while(cin>>a>>b)

    {
        count=0;
        for(int i=a; i<=b;i++)
        {
            sq=sqrt(i);
            if(sq*sq==i)
            {
                count++;
            }
        }
        if(a==0 && b==0)
            break;

        cout<<count<<endl;
    }
    return 0;

}
