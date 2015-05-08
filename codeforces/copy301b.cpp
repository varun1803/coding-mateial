#include<bits/stdc++.h>
using namespace std;
int arr[1005],str[1005];
int main(){
	int n,k,p,x,y,inp;
	cin>>n>>k>>p>>x>>y;

	int index=(n+1)/2;
	
	for(int i=1;i<=n;i++)
	{
		if(i<index)
			arr[i]=1;
		else 
			arr[i]=y;		
	}
	
	int val,rem;
	int less=0,more=0;
	

	/*median checking*/
	int mini=p,sum=0,counter=1;
	for(int i=1;i<=k;i++)
	{
		cin>>inp;
		if(inp<y)
			less++;
		else{
			if(inp<mini)
				mini=inp;
			more++;
		    }
		str[counter++]=inp;
		sum+=inp;
	}
	if(less>=(n+1)/2)
		cout<<"-1"<<endl;

	else
	{
		if(more>=(n+1)/2)
		{
			rem=n-less-(more);
			for(int i=1;i<=rem;i++)
				str[counter++]=1;
			sum+=rem;

		}
		else
		{
			val=index-1-less;
			sum+=val;
			for(int i=1;i<=val;i++)
				str[counter++]=1;
			sum+=(index-more)*y;
			for(int i=1;i<=index-more;i++)
				str[counter++]=y;
		}
		if(sum<=x){
			for(int i=k+1;i<=n;i++)
				cout<<str[i]<<" ";
			cout<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	return 0;
}

