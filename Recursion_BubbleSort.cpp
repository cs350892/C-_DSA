#include<iostream>
using namespace std;

 void bubbleSort(int arr[], int n){
	
	//base Case
	
	if(n==0 || n==1){
		return ;
	}
	for(int i=0; i<n-1; i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
	}
	
	bubbleSort(arr,n-1);

	
	
	

	
	
}

int main(){
	
int arr[7]={10,30,35,6,12,50,40};
	for(int i=0; i<7;i++){
		
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	bubbleSort(arr,7);
	for(int i=0; i<7;i++){
		
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
