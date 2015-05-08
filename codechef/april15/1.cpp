#include<bits/stdc++.h>
using namespace std;
int arr[100002],flag[100002];
int main(){
	int test,counter,n;
	cin>>test;
	while(test--){
		cin>>n;
		counter=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			flag[i]=0;
		}
		for(int i=1;i<n;i++)
		{
			if(arr[i]!=arr[i-1]){
				if(flag[i-1]==0)
					counter++;
				counter++;
				flag[i]=1;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}

