#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    char s[30];
    cin>>tc;
    for(i=0; i<tc; i++)
    {
        cin>>s;
        if(strlen(s)==5)
        {
            cout<<"3";
            cout<<endl;
        }
        else if((s[0]=='t' && s[1]=='w') || (s[0]=='t' && s[1]=='o') || (s[0]=='w' && s[1]=='o')||(s[1]=='t' && s[2]=='w')||(s[1]=='t' && s[2]=='o')||(s[1]=='w' && s[2]=='o'))
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }

    }
    return 0;
}
