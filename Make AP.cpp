#include<bits/stdc++.h>
using namespace std;

int main(){
#ifdef LOCAL_PROJECT
  	freopen("a.in","r",stdin);
#else
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int x;
	cin >> x;
	while(x--){
		int a, b, c, d;
		cin >> a >> b;
		if((a+b)%2!=0)
			cout << -1 << endl;
		else
			cout << (a+b)/2 << endl;
	}
}

