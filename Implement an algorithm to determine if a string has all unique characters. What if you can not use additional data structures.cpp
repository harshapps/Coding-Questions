#include<iostream>
using namespace std;

bool checkIfStringIsUnique(string input){
	bool charset[256];
	for(int i=0;i<256;i++) charset[i] = false;
	
	for(int i=0;i<input.length();i++){
		int charValue = input.at(i);		
		if(charset[charValue]) return false;
		charset[charValue] = true;
	}
	
	return true;
}

int main(){
	string input;	
	
	cout<<"Enter new string name:\n";
	cin>>input;
	
	if(checkIfStringIsUnique(input)) cout<<"All Characters are unique!\n";
	else cout<<"All Characters are not unique!\n";
	
	return 0;
}
