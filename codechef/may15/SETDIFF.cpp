#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long int poweroftwo(int x,int y)
{
	long long int ans;
	if(y==0)
		return 1;
	long long int temp=poweroftwo(x,y/2)%mod;
	long long int val=(temp*temp)%mod;
	if(y%2)
		ans=(val*x)%mod;
	else
		ans=val;;

	return ans;
}
int main(){
	long long int test,n,x;
	cin>>test;
	vector<long long int> vec;
	while(test--)
	{
		cin>>n;
		vec.push_back(0);
		for(int i=1;i<=n;i++){
		cin>>x;
		vec.push_back(x);
		}
		int sum=0;
		sort(vec.begin(),vec.end());
		for(int i=2;i<=n;i++){
			sum+=(vec[i]*(poweroftwo(2,i-1)-1))%mod;
			sum=sum%mod;
		}
		for(int i=1;i<n;i++){
			sum=(mod+sum-(vec[i]*(poweroftwo(2,n-i)-1)%mod))%mod;
		}
		cout<<sum<<endl;
		vec.clear();
	}

	return 0;
}
