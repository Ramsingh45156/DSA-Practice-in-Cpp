#include<iostream>
int linearsearch(int arr[],int size,int Target){
	for(int i=0;i<size;i++){
		if(arr[i]==Target){
			return i;
		}
	}
	return -1;

}
int main(){
	int arr[]={1,2,6,8,23,9,5,24,67,223};
	int size=9;
	int Target = 24;
	std::cout<<linearsearch(arr,size,Target) <<std::endl;
}