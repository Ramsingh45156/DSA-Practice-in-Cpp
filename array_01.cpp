/* #include<iostream>
int main(){
int arr[]={1,3,2,3,1,3};
std::cout<<arr[0];
std::cout<<arr[1];
std::cout<<arr[2];
std::cout<<arr[3];
std::cout<<arr[4];
std::cout<<arr[5];

}

#include<iostream>
int main(){
int arr[]={1,3,2,3,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
	std::cout<<arr[i]<<" ";
}

} 

#include<iostream>
int main(){
int arr[5];
std::cout<<"Enter a 5 no:-"<<std::endl;
for(int i=0;i<5;i++){
	
	std::cin>>arr[i];
}
std::cout<<"Your number is -"<<std::endl;
for(int i=0;i<5;i++){
	
	std::cout<<arr[i]<<" ";
}

}


// function call

#include<iostream>
void fun1(){
	std::cout<<"fun1";          // function create
}
void fun2(){
	std::cout<<"fun2";          // function create
}
int main(){
	fun1();
	fun2();  
}
*/

#include<iostream>
int add(int p, int q){
	int x=p+q;
	return x;
}

int main(){
	int a,b;
	std::cout<<"Enter A and B"<<std::endl;
	std::cin>>a>>b;
	int z=add(a,b);
	std::cout<<"your sum is:-"<<z;
	
}