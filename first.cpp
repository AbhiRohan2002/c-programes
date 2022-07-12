#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main(){
	ll n,sum = 0;
	cin >> n;
	for(int i =0;i<n;i++){
		ll x;
		cin >> x;
		sum += x;
	}
	cout << sum << endl;
}