#include<iostream>
using namespace std;

int main(){

    int n = 12345;      // Original number
    int rev = 0;        // Reverse number store karega

    while(n > 0){

        int digit = n % 10;     // Last digit nikala

        rev = rev * 10 + digit; // Reverse number me add kiya

        n = n / 10;             // Last digit hata diya
    }

    cout << "Reversed Number: " << rev;

}