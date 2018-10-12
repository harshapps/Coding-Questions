#include<iostream>
using namespace std;

int main(){	
	int array[4][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 1, 1}}, i, j;		
	int rowLength = sizeof(array)/sizeof(array[0]), columnLength = sizeof(array[0])/sizeof(int);
	int row[rowLength], column[columnLength];	
	
	cout<<"Before: "<<endl;
	for(i=0; i<4; i++){
		for(j=0;j<4;j++){
			cout<<array[i][j];
		}cout<<endl;
	}
	
	for(i=0;i<rowLength;i++){
		for(j=0;j<columnLength;j++){
			if(array[i][j]==0){
				row[i]=1;
				column[j]=1;
			}				
		}
	}
	
	for(i=0;i<rowLength;i++){
		for(j=0;j<columnLength;j++){
			if(row[i]==1 || column[j]==1)
				array[i][j]=0;			
		}
	}
	
	cout<<"\nAfter: "<<endl;
	for(i=0; i<4; i++){
		for(j=0;j<4;j++){
			cout<<array[i][j];
		}cout<<endl;
	}
	return 0;
}
