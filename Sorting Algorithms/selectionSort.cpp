#include<bits/stdc++.h>
using namespace std;

//O(n^2) Time Complexity
//Best Case : O(n^2)
//Worst Case: O(n^2)
// O(n) swaps are done. O(1) Auxillary space used
void selectionSort(int arr[],int n){
    int min,temp;
	for(int i=0;i<n-1;i++){
        min=i;
		for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
            {
          		min=j;    
		    }
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
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
   selectionSort(arr,n);
   for(int i:arr){
   	cout<<i<<" ";
   }

	return 0;

}