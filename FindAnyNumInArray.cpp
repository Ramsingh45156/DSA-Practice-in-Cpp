#include<iostream>
int main(){
	int arr[]={1,2,8,6,4,6,3,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<n; i++){
		if(arr[i]==3){
			std::cout<<"3 found at index:-"<<i<<std::endl;
		}
		
	}
}