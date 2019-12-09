#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int ch,i;
    cin>> ch;

    for(i=0; i<ch; i++)
    {

        long long int n,j,sum=0;
        cin>> n;
        for(j=1; j<=n/2; j++)
        {

            if(n%j==0)
            {
                sum=sum+j;

            }
        }

        if (sum == n)
            cout<<"perfect"<<endl;
        else if (sum < n)
            cout<<"deficient"<<endl;
        else
            cout<<"abundant"<<endl;

    }
    return 0;
}
