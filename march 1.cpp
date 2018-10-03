#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int j=0;j<T;j++)
	{	
	int n;
	int flag1=1;
	int flag2=1;
	cin>>n;
	int L[n],G[n];
	for(int i=0;i<n;i++)
	{
		cin>>L[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>G[i];
	}
	for(int i=0;i<n;i++)
	{
		if(L[i]>G[i])
		{
			flag1=0;
			break;
		}
	}
	for(int i=0,j=n-1;i<n;i++,j--)
	{
		if(L[i]>G[j])
		{
			flag2=0;
			break;
		}
	}
	if(flag1==1&&flag2==1)
	 cout<<"\nboth";
	 else if(flag1==0&&flag2==1)
	 cout<<"\nback";
	 else if(flag1==1&&flag2==0)
	 cout<<"\nfront";
	 else
	 cout<<"\nnone";
}
	 return 0;
}
