#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[],int n){
	 int mx=INT_MIN;
     for(int i=0;i<n;i++){
     	if(mx<arr[i])
     		mx=arr[i];
     }
     // cout<<mx<<endl;
     int countArr[mx+1];
     for(int i=0;i<mx+1;i++)
     	countArr[i]=0;
     for(int i=0;i<n;i++)
     	 countArr[arr[i]]++;
     for(int i=1;i<mx+1;i++)
     	 countArr[i]+=countArr[i-1];

     int temp[n];
     for(int i=n-1;i>=0;i--)
     {
     	if(countArr[arr[i]]>0)
     		temp[--countArr[arr[i]]]=arr[i];
     }
    for(int i=0;i<n;i++)
    	arr[i]=temp[i];
}

int main(){
 
   int n;
   cin>>n;
   int arr[n];
   for(int &i:arr)
   	cin>>i;
   countSort(arr,n);
   // cout<<endl;
   for(int i=0;i<n;i++)
   	cout<<arr[i]<<" ";


	return 0;
}