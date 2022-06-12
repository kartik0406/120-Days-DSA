#include<bits/stdc++.h>
using namespace std;

//O(logn) Time Complexity
//Array need to be sorted before applying binary search
int binarySearch(int arr[],int n,int key){
  int l=0,h=n-1;
  int mid;
  while(l<=h){
   mid=(l+h)/2;
   if(arr[mid]==key)
   	return mid;
   else if(arr[mid]>key)
   	h=mid-1;
   else
   	l=mid+1;
  }
  return -1;

}
int main(){
   
   int n;
   cin>>n;
   int arr[n],key;
   for(int &i:arr){
   	cin>>i;
   }
   cin>>key;
   cout<<binarySearch(arr,n,key);

	return 0;
}