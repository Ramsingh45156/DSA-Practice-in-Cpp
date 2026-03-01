#include<iostream>
int main(){
	int arr[]={21,32,34,45,54};
	int n=5;
	std::swap(arr[1], arr[3]);
	for(int i=0;i<n;i++){
	std::cout<<arr[i]<< " ";
	}
}