#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,s;
	cin>>m>>s;
	if(s==0){
		if(m==1){
			cout<<"0 0"<<endl;
			return 0;
		}else{
			cout<<"-1 -1"<<endl;
			return 0;
		}
	}
	string mx,mi;
	for(int i=0;i<m;i++){
		int k=min(9,s);
		mx.push_back('0'+k);
		s-=k;
	}
	if(s>0){
		cout<<"-1 -1"<<endl;
		return 0;
	}
	for(int i=m-1;i>=0;i--){
		mi.push_back(mx[i]);
	}
	int j=0;
	while(mi[j]=='0'){
		j++;
	}
	mi[0]++;
	mi[j]--;


	cout<<mi<<" "<<mx<<endl;
	return 0;
}