#include<bits/stdc++.h>

using namespace std;


int main()
{

	int n = 15;
	int a[]={64,69,82,95,99,107,113,141,171,350,369,400,511,590,666};
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++){
			for (int k=j+1;k<n;k++){
			if(a[i]+a[j]==a[k]){
			
		       cout<<i+1<<","<<j+1<<","<<k+1;
			   break;
			   }
		    else
		       continue;
		 }
	}
	}

	
	return 0;
}
