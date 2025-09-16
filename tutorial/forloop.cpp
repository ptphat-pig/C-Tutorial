#include <iostream>
using namespace std;
using std::cout;
int main () {
    //Example 1: This example is about For loops
    string example1 = "This example is about For loop"; // this example is about For loop
    for (int i = 3; i > 0; i--) {
        // No operation
    cout << i << "\n";
    }
cout << "==========" "\n";
    for (int i = 3; i > 0; i++) {
        // No operation
    cout << i << "\n";
    }
cout << "==================Example 2===================" "\n";
    //Example 2: this example is about Nested Loops
    string example2 = " This example is about Nested Loops"; // this example is about Nested Loops
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout  << "Outer: " << i << "\n"; // Executes 2 times
    }

      // Inner loop
      for (int j = 1; j <= 3; ++j) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
    }
    // Example 3: This example is about The foreach Loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }


}
      




