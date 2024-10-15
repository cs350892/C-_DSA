#include<iostream>
#include<string>
using namespace std;


string appendDelete(string s , string t , int k){
	
	int commonLength=0;
	for(int i=0;i<min(s.length(),t.length()); i++){
		if(s[i]==t[i]){
			commonLength++;	
		}
		else{
			break;
		}
	
	}
	int operationNeeded=(s.length()-commonLength) + (t.length()-commonLength);
	if(k>=operationNeeded && (k-operationNeeded)%2==0){
		return "Yes";
	}
	else{
		return "No";
	}
}
int main(){
string s, t;
    int k;

 cin>>s>>t;
	cin>>k;  

    cout << appendDelete(s, t, k);
	
	
	return 0;
}
