#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i, len;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;


        if(s=="1" || s=="4" || s=="78")
        {
            cout<<"+"<<endl;
        }
        else if(s[s.length()-1]=='5' && s[s.length()-2]=='3')
        {
            cout<<"-"<<endl;
        }
        else if(s[0]=='9' && s[s.length()-1]=='4')
        {
            cout<<"*"<<endl;
        }
        else
        {
            cout<<"?"<<endl;
        }

    }
    return 0;
}
