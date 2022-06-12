#include<bits/stdc++.h>
using namespace std;
//Worst case if array is already sorted
// Partitions will be n-1 n-2... n(n+1)/2
//Best case if partition is n/2 always
// Average Time Complexity is O(nlogn)
int Partition(int arr[],int l,int h){
    int mid=(l+h)/2;
	int pivot=arr[mid];
	int i=l;
	int j=h;
	while(i<=j){
		while(arr[i]<=pivot) i++;
		while(arr[j]>pivot) j--;
		if(i<j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}

	}
	int temp=arr[j];
	arr[j]=arr[mid];
	arr[mid]=temp;
	return j;

}
void QuickSort(int arr[],int l,int h){
   if(l<h){
   	  int pivot=Partition(arr,l,h);
      QuickSort(arr,l,pivot-1);
      QuickSort(arr,pivot+1,h);
   }
}

int main(){
  
   int n;
   cin>>n;
   int arr[n];
   for(int &i:arr)
    cin>>i;
   QuickSort(arr,0,n-1);
   for(int i=0;i<n;i++)
   	cout<<arr[i]<<" ";
	return 0;
}