#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s ,int e, int k){
		int mid= s+(e-s)/2;
	if(s>e)
	    return false;
	if(arr[mid]==k)
	    return true;

	if(arr[mid]<k){
		return binarySearch(arr, mid+1, e, k );
	}
	else{
		return binarySearch(arr, s, mid-1, k);
	}
	
	
}


int main(){
	
	int arr[5]={12,34,56,78,90};
	cout<<binarySearch(arr,0,4,78);
	return 0;
}
