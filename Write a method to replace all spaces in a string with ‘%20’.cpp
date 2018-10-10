#include<iostream>
using namespace std;

int main(){
	string S = "Test String Input 1123";		
	
	int numberOfSpaces = 0;
	for(int j=0;j<S.length();j++){
		if(S[j]==' '){
			numberOfSpaces++;
		}			
	}
	
	int newLength = S.length() + numberOfSpaces * 2;	
	//S[newLength] = '\0';
	
	for(int i=S.length()-1; i>=0; i--){
		if(S[i] == ' '){
			S[newLength-1] = '0';
			S[newLength-2] = '2';
			S[newLength-3] = '%';
			newLength-=3;
		} else{
			S[newLength-1] = S[i];	
			newLength-=1;
		}		
	}
	
	cout<<S<<endl;
	return 0;
}
