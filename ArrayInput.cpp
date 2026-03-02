#include<iostream>
int main(){
	int size=5;
	int arr[size];
	std::cout<<"Enter number: "<<std::endl;
	for(int i=0;i<size;i++){
		std::cin>>arr[i];
	}
	std::cout<<"Enterded array is"<<std::endl;
	for(int i=0;i<size;i++){
		
		std::cout<<arr[i]<<std::endl;	
	}
	
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			std::cout<<"even number is: "<<arr[i]<<std::endl;
		}
	}
}