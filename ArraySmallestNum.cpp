/*
#include<iostream>
#include <climits>
int main(){
	int arr[]={-12,-31,3,13,32,4,32,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int smallest=INT_MAX;
	for(int i=0;i<size;i++){
	if(arr[i]<smallest){
		smallest=arr[i];
	}
	}
	
	std::cout<<"smallest Num is:"<<smallest;
}
*/

#include<iostream>
#include <climits>
int main(){
	int arr[]={-12,-31,3,13,32,4,32,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int smallest=INT_MAX;
	for(int i=0;i<size;i++){
	smallest=std::min(arr[i],smallest);
	}
	
	std::cout<<"smallest Num is:"<<smallest;
}


