#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {

       int cont=0;
        int res=0;

        while(n>0){
            cont+=n;
            res+=n;
            n=res/k;
            res%=k;
        }

        printf("%d\n",cont);
    }
    return 0;
}
