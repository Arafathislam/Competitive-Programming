#include<bits/stdc++.h>
using namespace std;
int has[5];
int main(){
	int n;
	cin>>n;
	int arr[n+10];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		has[arr[i]]++;
	}
	int sum=has[4]+has[3]+has[2]/2;
	has[1]-=has[3];
	if(has[2]%2!=0){
		sum++;
		has[1]-=2;
	}

	if(has[1]>0){
		sum+=(has[1]+3)/4;
	}
	cout<<sum<<endl;

	return 0;
}