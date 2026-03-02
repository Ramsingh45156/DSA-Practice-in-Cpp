#include<iostream>
int main(){
	int marks;
	std::cout<<"enter Your Marks: ";
	std::cin>>marks;
	if(marks>=90){
		std::cout<<"A\n";
		
	}
	else if(marks>=80 && marks <90){
		std::cout<<"B\n";
		
	}
	else{
		std::cout<<"C\n";
		
	}
}