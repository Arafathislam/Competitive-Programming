#include<bits/stdc++.h>
using namespace std;
int cnt[101];
int main(){
	int n,x,a=0,p,q;
	cin>>n;
	cin>>p;
	for(int i=1;i<=p;i++){
		cin>>x;
		cnt[x]++;
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>x;
		cnt[x]++;
	}
	for(int i=1;i<=n;i++){
		if(cnt[i]==0){
			cout<<"Oh, my keyboard!"<<endl;
			break;
		}else{
			a++;
		}
	}
	if(a==n){
		cout<<"I become the guy."<<endl;
	}
		 
	return 0;
}