#include<bits/stdc++.h>
using namespace std;

 int main()
 {
 	int t,n;
 	cin>>t;
 	for(int i=0;i<t;i++)
 	{
 		cin>>n;
 		int a[n];
 		for(int i=0;i<n;i++)
 		cin>>a[i];
 		int comparision=0;
 		int shifts=0;
 		for(int i=1;i<n;i++)
 		{
 			int key=a[i];
 			int j=i-1;
 			comparision++;
 			while(key<a[j] && j>=0)
 			{
 				comparision++;
 				a[j+1]=a[j];
 				--j;
 				shifts++;
			 }
			 a[j+1]=key;
 		 
		 }
		 for(int i=0;i<n;i++)
		 cout<<a[i]<<" ";
 	    cout<<'\n'<<"comparisions"<<comparision<<'\n';
 	    cout<<"shifts"<<shifts;
}
	 return 0;
 }
