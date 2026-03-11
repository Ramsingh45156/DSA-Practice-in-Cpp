/*
#include<iostream>
int main(){
	int arr[]={1,1,1,2,2,3,3,4,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	
	for(int j=0;j<size;j++){
		if(arr[i] != arr[j]){
			i++;
			arr[i]=arr[j];
		}
	}
	std::cout<<"Unique elements count = "<<i+1;

	return 0;
}


#include<iostream>
int main(){
	int arr[]={1,1,1,2,2,3,3,4,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	
	for(int j=0;j<size;j++){
		if(arr[i] != arr[j]){
			i++;
			arr[i]=arr[j];
		}
	}
	std::cout<<"Unique elements count"<<std::endl;
	for(int k=0;k<=i;k++){
		std::cout<<arr[k]<<" ";
	}

	return 0;
}
*/


 // Brute Force
 
 #include<iostream>
using namespace std;

int main(){

    int arr[]={1,1,1,2,2,3,3,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Unique Elements: ";

    for(int i=0;i<size;i++){
        
        bool duplicate=false;

        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }

        if(!duplicate){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
