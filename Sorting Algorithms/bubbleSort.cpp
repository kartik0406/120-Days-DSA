#include<bits/stdc++.h>
using namespace std;

// Worst and Average Case Time Complexity: O(n*n). 
// Worst case occurs when array is reverse sorted.
// Best Case Time Complexity: O(n). 
// Best case occurs when array is already sorted.
// Auxiliary Space: O(1)
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		bool swap=false;
       for(int j=0;j<n-i-1;j++){
              if(arr[j]>arr[j+1])
              	{
              		int temp=arr[j+1];
              		arr[j+1]=arr[j];
              		arr[j]=temp;   
              		swap=true;           	
              	}
       }
       if(swap==false){
       	break;
       }
	}
}
int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int &i:arr){
		cin>>i;
	}
	bubbleSort(arr,n);
	for(int i:arr){
		cout<<i<<" ";
	}
}