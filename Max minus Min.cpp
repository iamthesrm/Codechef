#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int x;
	cin >> x;
	while(x--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a>b && a>c){
			if(b>c)
				cout << a-c << endl;
			}
		else if(b>a && b>c){
			if(a>c)
				cout << b-c << endl;
		}
		else
			cout << c-a << endl;
	}
}

