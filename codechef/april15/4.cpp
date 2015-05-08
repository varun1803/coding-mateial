#include<bits/stdc++.h>
using namespace std;
long long int dp[1000004]={0},m=1000003;
long long int powerof(long long int x,long long int y){
	long long int temp;
	if( y == 0)
		return 1;
	temp = powerof(x, y/2);
	long long int val=(temp*temp)%m;
	
	if (y%2 == 0)
		return val;
	else
		return (x*val)%m;
}
int main(){
	dp[1]=1;
	long long int n,l,r;
	long long int ans;
	for(int i=2;i<=m;i++)
	dp[i]=(i*(dp[i-1]))%m;
	long long int test,p;
	scanf("%lld",&test);
	while(test--){
		ans=0;
		scanf("%lld%lld%lld",&n,&l,&r);
		p=r-l+1;
		if(n>=m||p>=m)
		{
			;
		}
			
		else{
			ans=(dp[n+p]*(powerof((dp[n])%m,m-2)))%m;
			ans=(ans*(powerof((dp[p])%m,m-2)))%m;
		}
		ans=(ans-1+m)%m;
		printf("%lld\n",ans);	
	}
	return 0;
}
