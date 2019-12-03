#include<bits/stdc++.h>
using namespace std;
 int main()
 {

     int t;
     long long a,b,c;
     cin>>t;

         for(int i=1; i<=t;++i)
         {
             cin>>a>>b>>c;

             cout << "Case " << i << ": ";
             if(a==b && b==c)
             {
                 cout<<"Equilateral"<<endl;

             }
             else if((a+b)<=c || (b+c)<=a || (c+a)<=b)
             {
                 cout<<"Invalid"<<endl;

             }
             else if (a <= 0 || b <= 0 || c <= 0)
                cout << "Invalid";

             else if(a==b || b==c || a==c)
             {
                 cout<<"Isosceles"<<endl;

             }
             else
             {
                 cout<<"Scalene"<<endl;


             }


         }

     return 0;
 }
