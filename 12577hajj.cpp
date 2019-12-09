#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int n=0;
    while(cin>>s)
    {

        if(s=="Hajj")
        {

            cout<<"Case "<<++n<<":"<<" Hajj-e-Akbar"<<endl;
        }
        else if(s=="Umrah")
        {

            cout<<"Case "<<++n<<":"<<" Hajj-e-Asghar"<<endl;
        }
        else
            break;

    }

    return 0;
}
