#include<iostream>
int main(){
	int arr[]={1,2,4,5,3,5,7,8};
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int start=0;start<n;start++){
		for(int end=start;end<n;end++){
			for(int i=start;i<=end; i++){
				std::cout<<arr[i];
			}
			std::cout<<" ";
		}
		std::cout << std::endl;
	}
	return 0;
}