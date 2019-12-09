#include<bits/stdc++.h>
using namespace std;

int main()
{

    int ch,i;

    cin>> ch;

    for(i=1; i<=ch; i++)
    {
        int d,m,y, QY,count=0;
        cin>> d >> m >>y>>QY;
        cout<< "Case "<< i<<":";

        if(d!=29 || m!=2)
        {
            cout<<" "<<QY-y;
            cout<<endl;
        }
        else
        {
            int j;
            for(j=y+1; j<=QY; j++)
            {

                if ((j%4==0 && j%100!=0) || j%400==0)
                {
                    count++;
                }
            }
            cout<<" "<<count;
            cout<<endl;

        }
    }
    return 0;
}
