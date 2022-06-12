#include<bits/stdc++.h>
using namespace std;

int ternarySearch(int l,int r,int key,int arr[]){

	while(l<=r){
		int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;
        if(key==arr[mid1])
          return mid1;
        else if(key==arr[mid2])
          return mid2;
        else if(key<arr[mid1])
        	r=mid1-1;
        else if(key>arr[mid2])
        	l=mid2+1;
        else{
        	l=mid1+1;
        	r=mid2-1;
        }

	}
	return -1;
}

int main(){

    int n,key;
    cin>>n;
    int arr[n];
    for(int &i:arr)
    	cin>>i;
    cin>>key;
    int res=ternarySearch(0,n-1,key,arr);
    if(res==-1)
    	cout<<"Not Found";
    else 
    	cout<<"Element Found at "<<res<<" position";
	return 0;
}