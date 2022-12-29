#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int arr[26]={0};

	cin>>s;
		
	for(int i=0;i<s.length();i++){
		int number=0;
		number=s[i]-'a';
		arr[number]++;

	}
	int maxi=-1,ans=0;

	for(int i=0;i<26;i++){
		if(maxi<arr[i]){
			ans=i;
			maxi=arr[i];
		}
	}
	char val='a'+ans;
	cout<<val<<endl;
	return 0;
}