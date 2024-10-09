#include<iostream>
using namespace std;
int getSum(int *arr, int n){
	
	if(n==0){
		return 0;
	}
	if(n==1){
		return arr[0];
	}
	
	else{
		int sum=arr[0]+ getSum(arr+1, n-1);
	}
}
int main(){
	
	
	int arr[5]={10,20,30,40,50};
	cout<<getSum(arr,5);
	
	return 0;
}
