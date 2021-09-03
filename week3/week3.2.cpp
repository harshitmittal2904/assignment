#include<bits/stdc++.h>
using namespace std;
 
int swap(int *a,int *b)
{

	int temp=*a;
	*a=*b;
	*b=temp;
	
	return -1;
}
int selectionsort(int a[],int n)
{
	int i,j,comparisons=0,swaps=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			comparisons++;
			if(a[i]>a[j])
			{
			
				swap(&a[i],&a[j]);
				swaps++;
			}
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i];
	cout<<'\n'<<"comparisons"<<comparisons<<'\n';
	cout<<"swaps"<<swaps;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	selectionsort(a,n);
    }
}

