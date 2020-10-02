#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=1e5;
int a[mxN], n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int res=0;
		for(int i=0; i<n; ++i) {
			res|=a[i];
		}
		cout << res << "\n";
	}
}
