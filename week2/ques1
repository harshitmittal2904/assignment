
#include<bits/stdc++.h>

using namespace std;


int lower (int a[],int n,int t,int count)
{
	int l=0;
	int u=n-1;
	int ans=-1;
	while(l<=u)
	{
	
		int mid=(l+u)/2;
		if (t<a[mid])
		u=mid-1;
		else if(a[mid]<t)
		l=mid+1;
		else{
	    ans=mid;
		if(count==1)
		u=mid-1;
		else
		l=mid+1;
	    }
	}
	return ans;
	
}
int main()
{
	int t=9;
	int n = 9;
	int count ;
	int r[]={-1,-1};
	int a[]={1,2,3,6,6,6,6,9,9};

    r[0]=lower(a,n,t,1);
    r[1]=lower(a,n,t,0);
    int times=r[1]-r[0]+1;
    cout<<times;
	return 0;
}
