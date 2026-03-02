#include<iostream>
int main(){
	int num;
	std::cout<<"Enter  your number: ";
	std::cin>>num;
	if(num%2==0){
		std::cout<<"Your Number is Even:-"<<num;
	}else{
		std::cout<<"Your Number is Odd:-"<<num;
	}
}