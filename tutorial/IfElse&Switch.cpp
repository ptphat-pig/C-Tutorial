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
    // Example 2: This example is else
    string example2 = "This example is else"; // this example is else
    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    } else {
  cout << "Good evening.";
}
    // Outputs "Good evening."
    cout << "===================Example 3===================\n";
    // Example 3: This example is about else if
    string example3 = "This example is else if" "\n"; // this example is about else if
    int hour = 22;
    if (hour < 10) {
        cout << "Good morning." "\n";
    } 
    else if (hour < 20) {
        cout << "Good day." "\n";
    } else {

        cout << "Good evening." "\n";
    }
    cout << "=================Example 4==================\n";
    // Example 4: This example is Short Hand If...Else
    string example4 = "This example is Short Hand If...Else"; // this example is Short Hand If...Else
    int a = 22;
    string result = (a < 18)? "Good day." : "Good evening.";
    cout  << result;
    cout << "=================Example 5===================\n";
    // Example 5: This example is Real-life Examples
    string example5 = "This example is Real-life Examples"; // This example is Real-life Examples
    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) {
        cout << "The value is a positive number.\n";
    } 
    else if (myNum < 0) {
        cout << "The Value is a negative number.\n";
    } else {
        cout << "The value is 0.\n";
    }
    cout << "==================Exampkle 6==================\n";
    // Example 6 : This example is about Swtitch statements
    string example = "This example is about Wsitch statements"; // this example is about Switch statements
    string myTimeTable = "I go to school on :"; // my time table is I go to school on :
    int day = 2; // 2 days
    cout << myTimeTable << "\n"; // print my time table
    switch (day){
        case 1:  
            cout << "1 day" "\n"; // print "1"
            cout << "Thursday" "\n"; // print "Thursday"
            break;
        case 2:
            cout << "2 day" "\n"; // print "2"
            cout << "Friday" "\n"; // print "Friday"
            break;
        default:
            cout << "3 day" "\n"; // print "3"
            cout << "Saturday" "\n"; // print "Saturday"
       
             break;}
    cout << "=================finish example==================\n";
}
