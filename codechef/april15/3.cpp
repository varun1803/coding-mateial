#include<bits/stdc++.h>
using namespace std;
char arr[110];
int main(){
	int test,n,len,var;
	long long int ans;
	scanf("%d",&test);
	while(test--){
		var=ans=0;
		scanf("%s",arr);
		scanf("%d",&n);
		len=strlen(arr);
		for(int i=0;i<len;i++){
			if(arr[i]=='T')
				var+=2;
			else
				var+=1;
		}
		for(int i=1;;i++){
			if((12*n)-var*i>=0)
				ans+=12*n-var*i;
			else
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
