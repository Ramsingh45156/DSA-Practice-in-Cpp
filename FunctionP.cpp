#include<iostream>

int Fun1(int b,int d){
std::cout<<"I am Fun1"<<std::endl;
int a=b;
int c=d;
int f=a+c;
return f;
}
void Fun2(int f){
	std::cout<<"I am Fun2"<<std::endl;
	std::cout<<"Your Sum Is:"<<f;
}
int main(){
int result=Fun1(2,4);
Fun2(result);

}
