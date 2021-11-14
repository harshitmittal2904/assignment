#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int c=0,k=0;
	int a1=n/2;
	double m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			c++;
		}
		if(c>=a1){
		cout<<"yes";
		k++;
		break;
	    }
	    
	}
	if(k==0)
	cout<<"no";
    if(n%2==1)
    m=a[((n+1)/2)-1];
    else
    m=(a[n/2-1]+a[n/2])/2;
    cout<<"\n"<<m;
	return 0;

}
