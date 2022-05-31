#include<bits/stdc++.h>
using namespace std;
int has[123];
int main(){
	int n;
	string a;
	cin>>n;
	cin>>a;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		int b=(int)a[i];
		has[b]++;
	}
	for(int i=97;i<=122;i++){
		if(has[i]==0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;

	
	return 0;
}