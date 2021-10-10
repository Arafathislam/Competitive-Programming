#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	string a="";
	bool flag=m>n?true:false;
	while(m||n){
		if(flag){
		if(m>n and m>1){
			a+="11",m-=2;
		}else{
			a+="1",m-=1;
		}
		if(n){
			a+="0" ,n-=1;
		}

		}else{
			a+="0",n-=1;
			if(m){
				a+="1",m-=1;
			}
		}

	}
	if(a.find("111")<a.size() || a.find("00")<a.size()){
		cout<<"-1"<<endl;
	}else{
		cout<<a<<endl;
	}



	return 0;
}
