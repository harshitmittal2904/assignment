#include<bits/stdc++.h>
using namespace std;
int sorting (int a[],int n)
{
	for(int i=1;i<n;i++)
 		{
 			int key=a[i];
 			int j=i-1;
 		
 			while(key<a[j] && j>=0)
 			{
 			
 				a[j+1]=a[j];
 				--j;
 			
			 }
			 a[j+1]=key;
 		 
		 }
		 return -1;
}
 int main()
 {
 	int n;
    cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++)
 	cin>>a[i];
 	sorting(a,n);
 	int c=0;
 	for(int i=0;i<n;i++)
 		{
 			if(a[i]==a[i+1])
 			{
 				c++;
			 cout<<"YES";
 			break;
		 }
		 }
	 if(c==0)
	 cout<<"NO";
 	
 	return 0;
 }
