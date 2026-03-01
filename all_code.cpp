// program 1

// #include<iostream>

// int main(){
//     std::cout<< "hello Ram" ;
// }

// program 2

// #include <iostream>

// int main(){
//     std::cout<<"my Name is Ram" << std::endl;
// }

// program 3

// #include<iostream>

// int main(){
//     std::cout<<"Ram\n"<<"Singh"<<std::endl; 
// }

// program 4


// #include<iostream>
// int main(){
//     int a=2;
//     int b=3;
//     int sum=a+b;
//     std::cout<<sum << std::endl;
//     int sub=a-b;
//     std::cout<<sub<< std::endl;
//     int div=a/b;
//     std::cout<<div << std:: endl;
//     int multi=a*b;
//     std::cout<<multi <<std::endl;
// }

// program 5

// #include<iostream>
// int main(){
//     int a=10;
//     std::cout<<a <<std::endl;
//     char B='A';
//     std::cout<<B<<std::endl;
//     float f=2.9f;
//     std::cout<<f<<std::endl;
//     bool b=(3<=8);
//     std::cout<<b<<std::endl;
//     double d=4.3;
//     std::cout<<d<<std::endl;

// }

// program 6

// #include<iostream>
// int main(){
//     int a=29; //int 4 bytes value store 
//     std::cout<<sizeof(a);
// }

// program 7

// #include<iostream>
// int main(){
//     double price=100.99;
//     int newprice=price;
//     std::cout<<newprice << std::endl;
//     return 0;  
// }

// program 8

// #include<iostream>
// int main(){
//     int age;
//     std::cout<<"Enter you age:";
//     std::cin>>age;
//     std::cout<<"your age is:"<<age << std::endl;
//     return 0;
// }

// program 9

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"Enter n:";
//     std::cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     std::cout<<"Sum is:"<<sum;
//     return 0;
// }

// program 10

// #include<iostream>
// int main(){
//     int n;
//     int sum=0;
//     int i=1;
//     std::cout<<"Enter n:";
//     std::cin>>n;
//     while (i<=n)
//     {
//         sum=sum+i;
//         i++;
//     }
//     std::cout<<"Sum is:"<<sum;
//     return 0;

// }

// program 11

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"Enter n:";
//     std::cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             std::cout<<"odd no is: "<<i <<std::endl;
//             sum=sum+i;
//         }
//     }
//     std::cout<<"sum is:"<<sum;

// }

// program 12

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"Enter n:";
//     std::cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             std::cout<<"even no is: "<<i <<std::endl;
//             sum=sum+i;
//         }
//     }
//     std::cout<<"sum is:"<<sum;

// }

// program 13

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"enter n: ";
//     std::cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         if(i%2!=0){
//             std::cout<<"odd no is: "<<i <<std::endl;
//             sum=sum+i;
//         }
//         i++;
//     }
//     std::cout<<"Sum is: "<<sum;
// }

// program 14

// check prime or not 

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"enter no: ";
//     std::cin>>n;
//     bool isPrime=true;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){  
//         std::cout<<"Your Number is prime";
//     }else{
//         std::cout<<"Your Number is Non prime";
//     }
// }


// program 15

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"enter no: ";
//     std::cin>>n;
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){  
//         std::cout<<"Your Number is prime";
//     }else{
//         std::cout<<"Your Number is Non prime";
//     }
// }

// program 16

// #include<iostream>
// int main(){
//     for(int i=1;i<=5;i++){
//         int m=5;
//         for(int j=1;j<=m;j++){
            
//             std::cout<<"*";
//         }
//         std::cout<<" "<<std::endl;
//     }
// }

// program 17

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"enter n: ";
//     std::cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             std::cout<<"your number is: "<<i <<std::endl;
//             sum=sum+i;
//         }
//     }
//     std::cout<<"sum is: "<<sum <<std::endl;
// }

// program 17

// #include<iostream>
// int main(){
//     int n;
//     std::cout<<"enter n: ";
//     std::cin>>n;
//     int sum=1;
//     for(int i=1;i<=n;i++){
//         std::cout<<"your number is: "<<i <<std::endl;
//         sum=sum*i;
       
//     }
//     std::cout<<"sum of fect is: "<<sum <<std::endl;
// }

// program 18

// #include<iostream>
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=5;j++){
//             std::cout<<j;
//         }
//         std::cout<<" "<<std::endl;
//     }
// }

// #include<iostream>
// int main(){
//     int num=1;
//     int n=3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             std::cout<<num<<" ";
//             num++;
//         }
//         std::cout<<""<<std::endl;
//     }
//     return 0;
// }

// program 20

// #include<iostream>
// int main(){
//     int num=1;
//     int n=3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             std::cout<<num<<" ";
//             num++;
//         }
//         std::cout<<""<<std::endl;
//         num=num-1;
//     }
//     return 0;
// }

// program 21

// #include<iostream>
// int main(){
//     char ch ='A';
//     int n=3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             std::cout<<ch<<" ";
//             ch=ch+1;
//         }
//         std::cout<<""<<std::endl;
//     }
//     return 0;
// }

// program 22 

// #include<iostream>
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             std::cout<<"*";
//         }
//         std::cout<<""<<std::endl;
//     }
//     return 0;
// }

// program 23


// #include<iostream>
// int main(){
//     int num=1;
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             std::cout<<i+1;
//             // num++;
//         }
//         std::cout<<""<<std::endl;
//     }
//     return 0;
// }

// program 25

// #include<iostream>
// int main(){
//     char ch ='A';
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             std::cout<<ch;
//         }
//         std::cout<<""<<std::endl;
//         ch++;
//     }
//     return 0;
// }

// program 26

// #include<iostream>
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             std::cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             std::cout<<i+1;
//         }
//         std::cout<<std::endl;
//     }
// }

// #include<iostream>
// int helloFun(){
//     std::cout<<"hello\n";
//     return 3;
// }
// int main(){
//     int val=helloFun();
//     std::cout<<val;
// }

// #include<iostream>
// int helloFun(){
//     std::cout<<"hello\n";
//     return 0;
// }
// int main(){
//     std::cout<<helloFun();
// }

// #include<iostream>

// int sum(int a,int b){
//     int sum=a+b;
// }

// int minOf(int a,int b){
//     if (a<b)
//     {   
//        return a;
//     }else{
//         return a;
//         // std::cout<<"num is a is mix";
//     }
    
// }

// int main(){
//     std::cout<<minOf(3,4);
// }

// #include<iostream>
// int main(){
//     int n=4;
    
//     std::cout<<n<<" "<<n++<<std::endl;
//     std::cout<<n++<<std::endl;

// }
// #include<iostream>
// int main(){
//     int n=4;
//     int *p=&n;
    
//     std::cout<<*p<<" "<<*p++<<" "<<n++<<" "<<*p<<std::endl;
//     // std::cout<<n++<<std::endl;

// }

// #include<iostream>

// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         std::cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
int main(){
	int marks[5]={10,19,18,92,33};
	marks[0]=1023;
	std::cout<<marks[0]<<std::endl;
	std::cout<<marks[1]<<std::endl;
	std::cout<<marks[2]<<std::endl;
	std::cout<<marks[3]<<std::endl;
	std::cout<<marks[4]<<std::endl;
	std::cout<<marks[5]<<std::endl;
	
	
}