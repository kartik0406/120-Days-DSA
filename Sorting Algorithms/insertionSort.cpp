#include<bits/stdc++.h>
using namespace std;

//Time Complexity O(n*n), Best Case:O(n) Better than Quick sort
void insertionSort(int arr[],int n){

	for(int i=1;i<n;i++){
		int ele=arr[i];
		int b=i;
		for(int j=0;j<i;j++){
			if(ele<arr[j])
				{b=j;
				 break;
				}
		}
	   for(int k=i;k>b;k--){
	   	arr[k]=arr[k-1];
	   }
	   arr[b]=ele;
	  for(int c=0;c<n;c++){
	  	cout<<arr[c]<<" ";
	  }
	  cout<<endl;
	}
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int &i:arr)
    	cin>>i;
    insertionSort(arr,n);
    for(int i:arr)
    	cout<<i<<" ";

	return 0;
}