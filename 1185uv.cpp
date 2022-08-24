#include<bits/stdc++.h>
using namespace std;
int count_digit(int a){
	if(a<=0){
		return 0;
	}
	if(a==1){
		return 1;
	}
	double d=0;
	for(int i=2;i<=a;i++){
		d+=log10(i);
	}
	return floor(d)+1;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		cout<<count_digit(a)<<endl;
	}
	return 0;
}