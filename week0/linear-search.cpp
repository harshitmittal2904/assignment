#include<iostream>
using namespace std;
int main(){
    int n,l,c=0,k,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            c++;
            flag=1;
            cout<<"element exists\n";
            break;
        }
        else{
            c++;
            continue;
        }
    }
    if(flag==0)
        cout<<"no element exists\n";
    cout<<"no of comparisons is "<<c;
    return 0;
}
