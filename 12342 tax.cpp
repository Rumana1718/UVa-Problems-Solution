#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,b,i;
    double income,tax;
    cin>>tst;
    for(i=1; i<=tst; i++)
    {
        cin>>income;
        tax=0;
        if(income<=180000)
            tax=0;
        else
        {
            income=income-180000;
            if(income>0)
            {
                if(income>300000)
                    tax+=30000;
                else tax+=(income*0.1);
                income-=300000;
                if(income>0)
                {
                    if(income>400000)
                        tax+=60000;
                    else tax+=(income*0.15);
                    income-=400000;
                    if(income>0)
                    {
                        if(income>=300000)
                            tax+=60000;
                        else tax+=(income*0.2);
                        income-=300000;
                        if(income>0)
                            tax+=(income*0.25);
                    }
                }
            }
        }
        tax=ceil(tax);
        if(tax>0 && tax<=2000)
        cout<<"Case "<<i<<": "<<"2000"<<endl;
        else if(tax>2000)
            printf("Case %d: %.0lf\n",i,tax);
        else printf("Case %d: 0\n",i);

    }
    return 0;
}
