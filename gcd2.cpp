#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int arr[n+10];
		int forward[n+10];
		int backward[n+10];
		forward[0]=backward[n+1]=0;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}

		for(int i=1;i<=n;i++){
			forward[i]=__gcd(arr[i],forward[i-1]);
		}

		for(int i=n;i>=1;i--){
			backward[i]=__gcd(arr[i],backward[i+1]);
		}



		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<__gcd(forward[l-1],backward[r+1])<<endl;

		}

	}
	return 0;
}