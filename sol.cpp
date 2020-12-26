#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n, k;
	cin >> n >> k;
	int sum=0;
	//calculate if the sum is not divisible by 'k'
	//if it's not divisible then print '1', otherwise '0'
	//explanation: printing '1' mean adding all the remaining numbers need 
	//in one operation
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		sum+=a;
	}
	cout << (sum%k==0?0:1) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
