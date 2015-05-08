#include<bits/stdc++.h>
using namespace std;
int flag[26]={0};
char str[1000];
int main(){
	int k;
	scanf("%d%s",&k,str);
	vector<int> pos;
	int len=strlen(str);
	flag[str[0]-'a']=1;
	
	int prev=0,mark=0;
	int i;
	for(i=1;i<len;i++){
		for(int j=0;j<26;j++){
			if(flag[str[i]-'a'])
			{					
				mark=1;
				break;
			}
		}
		if(mark!=1){
			pos.push_back(i);
			flag[str[i]-'a']=1;
		}
		mark=0;
	}


	pos.push_back(len);
	int leng=pos.size();

	if(k>leng)
		cout<<"NO"<<endl;
	else
	{
	int counter=0,index=0,j,prev=0;
	cout<<"YES"<<endl;	

	for(i=0;i<leng;i++){		
		for(j=prev;j<pos[i];j++)
			cout<<str[j];
			counter++;
			if(counter<k)
			cout<<endl;
			else
			{
				for(int j=pos[i];j<len;j++)
				cout<<str[j];
				cout<<endl;
				break;
			}
		prev=pos[i];	
		}
	}
	return 0;
}
