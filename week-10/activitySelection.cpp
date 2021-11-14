#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,e,s;
	cin>>n;
	vector<pair<int,int> >activity;
	for(int i=0;i<n;i++)
	{
		cin>>s>>e;
        activity.push_back(make_pair(e,s));
	}
	sort(activity.begin(),activity.end());
	int curend=-1;
	int final[16];
	int count=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(activity[i].second>curend)
		{
			count++;
			final[k]=i+1;
			curend=activity[i].first;
			k++;
		
		}
	
	}
	cout<<count<<"\n";
	for(int i=0;i<k;i++)
	cout<<final[i]<<" ";
	return 0;
}
