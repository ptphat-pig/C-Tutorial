#include <iostream>
using namespace std;
using std::cout;
int main () {
    //Example 1: This example is about For loops
     string example1 = "This example is about For loop" "\n"; // this example is about For loop
     for (int i = 0; i < 5; i++) {
    cout << i << "\n";
    }
    //Example 2: This example is about For loops +
    string example2 = "This example is For loops" "\n"; // this example is about For loops +
    int sum = 0;
    for (int i = 1; i <= 5; i++) {

        sum = sum + i;
}
    cout << "Sum is " << sum << "\n";
// Example 3: This example is about Nested Loops
string example3 = "This example is Nested Loops" "\n"; // This example is Nested Loops
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n"; // Executes 2 times

    // Inner loop
    for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}
// Example 4: This example is The foreach loop
string example4 = "This example is The foreach loop" "\n"; // this example is The foreach loop
int myNumbers[5] = {10, 20, 30, 40, 50}; 
for (int num : myNumbers) {
  cout << num << "\n";
}
// Example 5: This example is Real Life Example
string example5 = "This example is about Real Life Example" "\n"; // this example is Real Life Example
    int number = 2;
    int i;

    // Print the multiplication table for the number 2  
    for (i  = 1; i<= 10; i++) {
    cout << number << " x " << i << " = " << number * i << "\n";
    }
  
   
}
      




