#include<bits/stdc++.h>
using namespace std;
int c[1001];

int main(){
	int n,m;
	cin>>n>>m;
	int mini=99999;
	int arr[m+10];
	for(int i=0;i<m;i++){
		cin>>arr[i];
		c[arr[i]]++;
	}
	sort(arr,arr+m);
	for(int i=n;i<=m;i++){
		mini=min(mini,abs(arr[i-1]-arr[i-n]));
	}
	cout<<mini<<endl;
	return 0;

}