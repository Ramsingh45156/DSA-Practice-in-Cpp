#include<iostream>
int main(){
	int marks[]={1,2,3,4,5};
	int size=sizeof(marks)/sizeof(marks[0]);
for(int i=0;i<size;i++){
	std::cout<<marks[i];
}
	
}