#include<bits/stdc++.h>
using namespace std;
int arr[1005],str[1005];
int main(){
	int n,k,p,x,y,inp;
	cin>>n>>k>>p>>x>>y;
	int index=(n+1)/2;
	arr[index]=y;
	for(int i=1;i<=n;i++)
	{
		if(i<index)
			arr[i]=1;
		else 
			arr[i]=y;		
	}
	int left=1,right=n,flag=0;
	for(int i=1;i<=k;i++)
	{
		cin>>inp;
		str[i]=inp;		
		if(inp<y)
		{
			if(left<index)
			arr[left++]=inp;
			else
				flag=1;
		}
		else if(inp==y)
		{
			if(right>index)
			arr[right--]=inp;
			else
			arr[left++]=inp;
		}			
		else{
			if(right>index)
			arr[right--]=inp;
			else
				flag=1;		
		    }
	}
	if(flag)
		cout<<"-1"<<endl;
	else
	{
		int sum=0;

		for(int i=1;i<=n;i++){
			sum+=arr[i];
		}
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=n;j++){
				if(str[i]==arr[j])
				{
					arr[j]=0;
					break;
				}
			}
		}


		if(sum<x)
		{
			for(int i=1;i<=n;i++){
			if(arr[i]!=0)
				cout<<arr[i]<<" ";
			}
		}
		else
			cout<<"-1"<<endl;
	}
	return 0;
}

