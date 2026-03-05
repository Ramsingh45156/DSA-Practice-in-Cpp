#include<iostream>
using namespace std;

int main(){

    // Array banaya
    int arr[]={1,7,3,9,2};

    // Array ka size nikal rahe hain
    int size = sizeof(arr)/sizeof(arr[0]);

    // Sabse pehle largest aur secondLargest
    // dono ko first element se initialize kar diya
    int largest = arr[0];
    int secondLargest = arr[0];

    // Loop 1 se start kar rahe hain kyunki 0 already le liya
    for(int i=1; i<size; i++){

        // Agar current element largest se bada hai
        if(arr[i] > largest){

            // Purana largest ab secondLargest ban jayega
            secondLargest = largest;
			

            // Naya largest update kar diya
            largest = arr[i];
			
        }

        // Agar current element:
        // 1) secondLargest se bada hai
        // 2) aur largest ke equal nahi hai
        else if(arr[i] > secondLargest && arr[i] != largest){

            // To usko secondLargest bana do
            secondLargest = arr[i];
        }
    }

    cout<<"Second Largest element is: "<<secondLargest;
}