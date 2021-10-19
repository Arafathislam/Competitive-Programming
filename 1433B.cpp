#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,count,arr[60];
	cin>>t;
	while(t--){
		cin>>n;
		 count=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int j=n-1;
		while(j>0){
			if(arr[j]==1)
				break;
			else j--;
		}
		int i=0;
		while(i<n){
			if(arr[i]==1)
				break;
			else i++;
		}
		for(int k=i;k<=j;k++){
			if(arr[k]==0){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}