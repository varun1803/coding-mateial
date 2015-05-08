#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long int test,b,ans,val;

	scanf("%lld",&test);
	while(test--){
		scanf("%lld",&b);
		val=(b-2)/2;
		ans=(val*(val+1))/2;
		printf("%lld\n",ans);

	}
	return 0;
}
