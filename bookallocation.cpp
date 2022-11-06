#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
	int scount=1;
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]+sum<=mid){
			sum+=arr[i];
		}else{
			scount++;
			if(scount>m ||arr[i]>mid){
				return false;
			}
			sum=arr[i];
		}

	}
	return true;
}
int main(){
	int arr[5]={12,34,67,90};
	int n=4,m=2;
	int ans=-1;
	int s=0,sum=0,e;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	e=sum;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(isPossible(arr,n,m,mid)){
			ans=mid;
			e=mid-1;
		}else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	cout<<ans;
	return 0;
}