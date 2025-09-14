// This file is intended to demonstrate the use of if-else statements and switch-case statements in C++. It typically contains examples showing how conditional logic can be implemented to control program flow based on different values or user input.
#include <iostream>
using namespace std;
using std::cout;
#include <string>

int main() {
    // Example 1: This example is about If-Else statements
    string example1 = "This example is about If-Else statements"; // this example is about If-Else statements
    int i = 10; // i = 10
    int h = 20; // h = 20
    cout << " i = " << i << "\n"; //print i value
    cout << " h = " << h << "\n"; //print h value
    if (i < h) {
        cout << "i < h" << "  ;  " << "i is less than h" "\n"; // if i < h. print "i is less than h"
            cout << "i is greater than h" "\n"; // if i > h. print "i is greater than h"
        } 
    if (i >= h) {
        cout << "i >= h" "\n";
        cout << "false" "\n"; // if i >= h. print "false"
    }   
    else {
        cout << "true" "\n"; // else print "true
    }
    
    cout << "==================Example 2===================\n";
    // Example 2: This example is about Swtitch statements
    string example2 = "This example is about Wsitch statements"; // this example is about Switch statements
    string myTimeTable = "I go to school on :"; // my time table is I go to school on :
    int day = 2; // 2 days
    cout << myTimeTable << "\n"; // print my time table
    switch (day){
        case 1 :
            cout << "Thursday" "\n"; // print "Thursday"
            break;
        case 2 :
            cout << "Friday" "\n"; //  print "Friday"
            break;
    cout << "I go to school on Thursday and Friday" "\n"; // print "I go to school on Thursday and Friday"
    }
}
