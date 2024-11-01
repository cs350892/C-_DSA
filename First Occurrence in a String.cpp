#include<iostream>
using namespace std;

int strStr(string s1, string s2){
	int n1=s1.length();
	int n2=s2.length();
	for(int i=0; i<n1-n2; i++){
		if(s1.substr(i, n2)==s2){
			return i;
		}
	}
	return -1;
	
	}

int main(){
	
    string haystack = "hello";
    string needle = "ll";
    int index = strStr(haystack, needle);
    cout << "Index of first occurrence: " << index << endl;
    return 0;

	return 0;
}
