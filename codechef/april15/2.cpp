#include<bits/stdc++.h>
using namespace std;
long long int factors(int num)
{
	long long int ans=0;
	int val=sqrt(num);
	for(int i=1;i<=val;i++){
		if(num%i==0){
			ans+=i;
			if(i!=num/i)
				ans+=num/i;
		}
	}
	return ans;
}
int main(){
	int test,n;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<factors(n)<<endl;
	}
	return 0;
}
