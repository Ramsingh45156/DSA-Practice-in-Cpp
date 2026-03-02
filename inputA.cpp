#include<iostream>
int main(){
	int age;
	std::cout<<"Enter your age:";
	std::cin>>age;
	if(age>0){
		std::cout<<"Your Number is Positive: "<<age;
	}else{
		std::cout<<"Your Number Negetive: "<<age;
	}
	
}