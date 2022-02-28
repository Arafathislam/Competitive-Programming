#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d,sum=0,x,x_sum=0,jocks;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>x;
		x_sum+=x;
	}
	sum=x_sum+((n-1)*10);
	if(sum>d){
	 	cout<<"-1"<<endl;
	}else{
		jocks=(d- x_sum)/5;
		cout<<jocks<<endl;
	 }
	return 0;
}