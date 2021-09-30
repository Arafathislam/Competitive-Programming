#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,l,c=0,d=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    l=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]=='A')
            c++;
        else
            d++;
    }
    if(c>d)
        cout<<"Anton"<<endl;
    else if(d>c)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
