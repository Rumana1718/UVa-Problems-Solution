#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, tc = 0;
    double u, v, a, s, t;
    while(true && n!=0) {
            cin>>n;


        if(n == 1) {
            cin>>u>>v>>t;
            a = (v-u)/t;
            s = (u+v)*t/2;
            printf("Case %d: %0.3lf %0.3lf\n", ++tc,s,a);

        }
        else if(n == 2) {
            cin>>u>>v>>a;
            t = (v-u)/a;
            s = (u+v)*t/2;
            printf("Case %d: %0.3lf %0.3lf\n", ++tc,s,t);

        }
        else if(n == 3) {
            cin>>u>>a>>s;
            v = sqrt(u*u + 2*a*s);
            t = (v-u)/a;
           printf("Case %d: %0.3lf %0.3lf\n", ++tc,v,t);

        }
        else if(n==4){
            cin>>v>>a>>s;
            u = sqrt(v*v - 2*a*s);
            t = (v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n", ++tc,u,t);

        }
        else
            break;


}

    return 0;
}
