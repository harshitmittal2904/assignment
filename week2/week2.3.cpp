#include<bits/stdc++.h>

using namespace std;int main()
{
	int key=20;
	int n = 5;
	int c=0;
	int a[]={1,51,84,21,31};

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(a[j]>a[i]){
				if(a[j]-a[i]==key)
			     c++;
			}
			else{
			
				if(a[i]-a[j]==key)
			        c++;
	        }
		}
	}
	if(c!=0){
	
	cout<<c;
	}
	else
	cout<<"no element pair";
	return 0;
}
