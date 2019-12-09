#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	long long n;
	cin>>tc;
	for (int i=0;i<tc;i++) {
            cin>>n;

		n = abs((((n * 63 + 7492) * 5 - 498)/10)%10);
        cout<<n<<endl;
	}

	return 0;
}
