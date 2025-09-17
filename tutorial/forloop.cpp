#include <iostream>
using namespace std;
using std::cout;
int main () {
    cout << "=================Example 1=================\n";
    //Example 1: This example is about For loops
     string example1 = "This example is about For loop" "\n"; // this example is about For loop
     for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
    cout << "=================Example 2==================\n";
    //Example 2: This example is about For loops +
    string example2 = "This example is For loops" "\n"; // this example is about For loops +
    int sum = 0;
    for (int i = 1; i <= 5; i++) {

        sum = sum + i;
    }
        cout << "Sum is " << sum << "\n";
        cout << "=================Example 3===================\n";
    // Example 3: This example is about Nested Loops
    string example3 = "This example is Nested Loops" "\n"; // This example is Nested Loops
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times

    // Inner loop
    for (int j = 1; j <= 3; j++) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
    }
    }
    cout << "================Example 4===================\n";
    // Example 4: This example is The foreach loop
    string example4 = "This example is The foreach loop" "\n"; // this example is The foreach loop
    int myNumbers[5] = {10, 20, 30, 40, 50}; 
    for (int number : myNumbers) {
        cout << "number - 10 = 0" << "\n";
        cout << "number - 10 = 10" << "\n";
        cout << "number - 10 = 20" << "\n";
        cout << "number - 10 = 30" << "\n";
        cout << "number - 10 = 40" << "\n";
    break;
    }
    cout << "================Example 5===================\n";
    // Example 5: This example is Real Life Example
    string example5 = "This example is about Real Life Example" "\n"; // this example is Real Life Example
    int number = 2;
    int i;

    // Print the multiplication table for the number 2  
    for (i  = 1; i<= 10; i++) {
        cout << number << " x " << i << " = " << number * i << "\n";
    }
    cout << "===================Example 6===================\n";
    // Example 6: This is While loop
    string example6 = " This is whjile loop" "\n"; // this is while loop
    int h = 0;
    while (h < 5) {
        cout << h << "\n";
        h++;
    }
    cout << "and" << "\n";
    int countdown = 3;

    while (countdown > 0) {
        cout << countdown << "\n";
        countdown--;
    }
        cout << "Happy new year!\n";
    cout << "and" << "\n";
    int countdow = 3;

    while (countdow > 0) {
        countdow--;
        cout << countdow << "\n";
    }

        cout << "Happy New Year!\n";
}
  
   

      




