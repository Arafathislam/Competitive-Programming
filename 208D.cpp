#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,sum(0),mug(0),towel(0),bag(0),bic(0),car(0),a,b,c,d,e;
	cin>>n;
 long long int arr[n+3];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>a>>b>>c>>d>>e;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		car+=sum/e;
		sum%=e;
		bic+=sum/d;
		sum%=d;
		bag+=sum/c;
		sum%=c;
		towel+=sum/b;
		sum%=b;
		mug+=sum/a;
		sum%=a;


	}
	cout<<mug<<" "<<towel<<" "<<bag<<" "<<bic<<" "<<car<<endl;
	cout<<sum<<endl;
	return 0;
}