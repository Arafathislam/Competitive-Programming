#include<bits/stdc++.h>
using namespace std;
int main(){
	 int n,p;
	 char j;
	cin>>n;
	while(n--){
		cin>>p>>j;
		if(p == 2 || p == 3 || p == 5 || p == 7 ||
        p == 13 || p == 17){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}

	}
	return 0;
}