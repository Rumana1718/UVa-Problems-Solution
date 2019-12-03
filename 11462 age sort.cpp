#include<bits/stdc++.h>
using namespace std;
 int main()
 {

     int ar[200],n;
     int i;

    while(scanf("%d",&n)==1 && n){
     for(i=0; i<n;i++)
     {
         cin>>ar[i];
     }
     sort(ar,ar+n);
     for(i=0; i<n;i++)
     {
         cout<<ar[i];
         if(i < n-1)printf(" ");
     }
     cout<<endl;

     }
        return 0;
 }
