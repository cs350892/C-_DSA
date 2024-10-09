#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n,int k){
	
	if(n==0){
		return false;
	}
	if( arr[0]==k){
		return true;
	}
	else{
		bool remainingPart=linearSearch(arr+1, n-1,k);
		return remainingPart;
	}
	}




int main(){
	int arr[5]={12,34,56,78,90};
	
	cout<<linearSearch(arr,5,5);
	
	return 0;
}
