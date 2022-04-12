#include<bits/stdc++.h>
using namespace std;
int main(){
	 long long n,s,r;
	cin>>n>>s;
	if(s%n==0){
		r=s/n;
	}else{
		r=(s/n)+1;
	}
	cout<<r<<endl;
	return 0;
}