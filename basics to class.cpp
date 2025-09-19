// #include <iostream>
// using namespace std;

// class Counter {
// private:
//     int count;  // Member variable to store the count

// public:
//     // Constructor initializes count to 0
//     Counter() : count(0) {}

//     // Function to display current count
//     void display() {
//         cout << "CURRENT COUNT: " << count << endl;
//     }

//     // Function to increment the count
//     void increment() {
//         int inc;
//         cout << "INCREMENT BY: ";
//         cin >> inc;
//         count += inc;
//         cout << "NEW COUNT: " << count << endl;
//     }

//     // Main loop that mimics the BASIC program flow
//     void run() {
//         while (true) {  // Equivalent to GOTO 30 in BASIC
//             display();
//             increment();
//         }
//     }
// };

// int main() {
//     Counter counter;  // Create Counter object
//     counter.run();    // Start the program loop
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std ;
vector<int> RotateArrays( vector<int>& arr, int n , int temp ){
int arr[]={1,2,3,4,5,6,76,};

temp=arr[0];
for(int i =1; i <n; i++){
    arr[i-1]=arr[i];
}
arr[n-1]=temp;
return arr;
}