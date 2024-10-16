#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string  &str, int i=0){
	int j=str.length()-1-i;
	if(i>=j){
		return true ;
	}
	else if(str[i]!=str[j]){
		return false;
	}
	else{
		return checkPalindrome(str, i+1);
	}
}

int main(){
	

    string name = "ChandraShekhar";
    if (checkPalindrome(name)) {
        cout << name << " is a palindrome." << endl;
    } 
	else {
        cout << name << " is not a palindrome." << endl;
}
	
	
	return 0;
}
