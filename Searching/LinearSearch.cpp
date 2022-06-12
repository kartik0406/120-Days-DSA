#include<bits/stdc++.h>
using namespace std;

//O(n) Time Complexity
int linearSearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key)
			return i;
	}
	return -1;
}
int main(){

    int n;
    cin>>n;
    int arr[n],key;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;

	return 0;
}