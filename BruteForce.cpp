/*
#include<iostream>
int main(){
	int arr[]={1,2,3,4,5};
	int target=6;
	int size=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	int j=size-1;
	while(i<j){
		int sum=arr[i]+arr[j];
		if(sum==target){
			std::cout<<i<<" "<<j;
			return 0;
		}
		if(sum<target){
			i++;
		}
		if(sum>target){
			j--;
		}
		
	}
	std::cout << "Pair not found";
    return -1;
}
*/

#include<iostream>
int main(){
	int arr[]={1,2,3,4,5};
	int target=6;
	int size=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	int j=size-1;
	while(i<j){
		int sum=arr[i]+arr[j];
		if(sum==target){
			std::cout<<sum;
			return 0;
		}
		if(sum<target){
			i++;
		}
		if(sum>target){
			j--;
		}
		
	}
	std::cout << "Pair not found";
    return -1;
}