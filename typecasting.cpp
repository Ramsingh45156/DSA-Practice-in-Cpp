// #include <iostream>
// using namespace std;
// int main(){
//     char g='a';
//     int velue= g;
//     cout << velue << endl;


// }


#include <iostream>
using namespace std;
int main(){
    int count =1;
    while(count<=5){
        cout << count << endl;
        count++;
        if(count==6){
            cout << count << endl;

        }
    }
    
}

// #include <iostream>
// using namespace std;

// int main(){
//     int arr []={1,2,3,4,5,6};
//     int index;
//     cin >> index;

//     for(int i=index;i<6-1;i++){
//         arr[i]=arr[i+1];
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i];
//     }

// }

// #include <iostream>
// using namespace std;
// void rec(int arr[], int s, int e, int tar) {
//     if(s > e) {
//         return;
//     }
    
//     int mid = (s+e) / 2;
    
//     if(arr[mid] == tar) {
//         cout << "element find at index:" << mid;
//         return;
//     }else if(arr[mid] < tar) {
//         rec(arr, mid + 1, e, tar);
//     }else {
//         rec(arr, s, mid - 1, tar);
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,54,66,78,98};
//     rec(arr,0,7,98);

// }
