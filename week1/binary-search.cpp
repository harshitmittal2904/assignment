#include<iostream>
using namespace std;

int main(){
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) 
            cin>>arr[i];
        cin>>k;
	    bool flag=false;
	    int lo=0,hi=n-1,mid,c=0;
	    while(lo<=hi){
	        c++;
	        mid= (lo+hi)/2;
	        if(arr[mid] == k){
	            flag=true;
	            break;
	        }
	        if(arr[mid] < k)
	            lo=mid+1;
	        else
	            hi= mid-1;
	    }
	    if(flag) 
			cout<<"Present\t";
	    else 
			cout<<"Not Present\t";
	    cout<<c<<endl;
	    }
	    return 0;
	}
