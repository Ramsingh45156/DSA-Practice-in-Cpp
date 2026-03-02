/*
#include<iostream>
int main(){
	int arr[]={1,3,4,5,6,7,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	int largest=0;
	for(int i=0;i<size;i++){
		if(arr[i]>largest){
		largest=arr[i];
		}
	}
	std::cout<<largest;
}

*/

#include<iostream>
int main(){
	int arr[]={-4,1,3,4,5,6,7,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	int smallest;
	for(int i=0;i<size;i++){
		if(arr[i]<smallest){
		smallest=arr[i];
		}
	}
	std::cout<<smallest;
}