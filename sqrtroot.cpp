#include<bits/stdc++.h>
using namespace std;

 int binarysearch(int x){
       long long int s=0,e=x;
       long long  int mid=s+(e-s)/2;
       long long  int ans=-1;
       while(s<=e){
        long long  int sqrt=mid*mid;
           if(sqrt==x){
               return mid;
           }else if(sqrt>x){
               e=mid-1;
           }else{
               ans=mid;
               s=mid+1;
               
           }
           mid=s+(e-s)/2;
       }

        return ans;

    }

double exectsrt(int n,int precision,int temp){
	double factor =1;
    double ans=temp;
	for(int i=0;i<precision;i++){
		factor=factor/10;

		for(double j=ans;j*j<n;j=j+factor){

            ans=j;
        }
	}
    return ans;
}

int main(){
	int n;
	cin>>n;
	int r=binarysearch(n);
	cout<<exectsrt(n,3,r)<<endl;;

	return 0;
}