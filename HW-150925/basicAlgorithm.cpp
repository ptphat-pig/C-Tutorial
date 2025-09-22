/*
Homework - 15/09/2025
Part: Basic Algorithm
From: 1     To: 10
*/
#include <iostream>
using namespace std;
int main()
{
    /* cout << "======================Example 1========================\n";
    cout << "Type value of a and b :\n";
    int a, b;
    cout << "Type a: ";
    cin >> a;
    cout << "Type b: ";
    cin >> b;
    int resultEx1;
    if (a == b)
    {
        resultEx1 = (a + b) * 3;
    }
    else
    {
        resultEx1 = a + b;
    }
    cout << "Result: " << resultEx1 << "\n"; */

    /*  cout << "======================Example 2========================\n";

     cout << "type value of n: ";
     int n;
     cin >> n;
     int resultEx2;
     int diff = n - 51;
     if (diff < 0){
         diff *= -1;
     }
     resultEx2 = diff;
     if (n > 51)
     {
         resultEx2 *= 3;
     }
     cout << "Result: " << resultEx2 << "\n"; */

    /*  cout << "======================Example 3========================\n";

     int a, b;
     cout << "Type value of a: ";
     cin >> a;
     cout << "Type value of b: ";
     cin >> b;
     bool resultEx3;

     if (a == 30 || b == 30 || a + b == 30)
     {
         resultEx3 = true;
     }
     else
     {
         resultEx3 = false;
     }
     cout << "Result: " << resultEx3 << "\n"; */

    /* cout << "======================Example 4========================\n";

    int a;
    cout << "Type value of a: ";
    cin >> a;
    bool resultEx4;
    int lowerBoundOf100 = 90;
    int upperBoundOf100 = 110;
    int lowerBoundOf200 = 190;
    int upperBoundOf200 = 210;
    if ((a >= lowerBoundOf100 && a <= upperBoundOf100) || (a >= lowerBoundOf200 && a <= upperBoundOf200))
    {
        resultEx4 = true;
    }
    else
    {
        resultEx4 = false;
    }
    cout << "Result: " << resultEx4 << "\n"; */
    /*
        cout << "======================Example 5========================\n";

        string s;
        cout << "Type string value of s: ";
        getline(cin, s);
        int length = s.length(); // do dai cua chuoi
        string firstWord = "";
        string resultEx5;

        for (int i = 0; i <= length; i++){
            if (s[i] == ' ')
                break;
            firstWord = firstWord + s[i];
        }
        if (firstWord == "if"){
            resultEx5 = s;
        } else{
            resultEx5 = "if " + s;

        }
        cout << "Result: "<< resultEx5 << "\n"; */
    /*
     cout << "======================Example 6========================\n";

     string s;
     cout << "Type value of s: ";
     getline(cin, s);
     int n;
     cout << "type value of n";
     cin >> n;
     int length = s.length();
     string resultEx6 = "";
     for ( int i = 0; i < length; i++){
         if (i == n)
             continue;
         resultEx6 = resultEx6 + s[i];
         cout << i << ":" << s[i] << ":" << resultEx6 << "\n";
     }
  */
    /* cout << "======================Example 7========================\n";

    string s;
    cout << "Type value of s: ";
    getline(cin, s);
    int length = s.length();
    string resultEx7 = "";
    if (length != 1)
    {
        int firstPosition = 0;
        int lastPosition = length - 1;
        for (int i = 0; i < length; i++)
        {
            if (i == firstPosition)
                resultEx7 += s[lastPosition];
            else if (i == lastPosition)
                resultEx7 += s[firstPosition];
            else
                resultEx7 += s[i];
        }
    }
    else
    {
        resultEx7 = s;
    }
    cout << "Result: " << resultEx7 << "\n"; */

    /*    cout << "======================Example 8========================\n";

       string s;
       cout << "Type value of s: ";
       getline(cin, s);
       int length = s.length();
       string resultEx8 = "";
       string twoFromChar = "";
       if (length >= 2)
       {
           twoFromChar += s[0];
           twoFromChar += s[1];
           cout << twoFromChar << "\n";
           for (int i = 0; i < 4; i++)
           {
               resultEx8 += twoFromChar;
           }
       }
       else
       {
           resultEx8 = s;
       }
       cout << "Result: " << resultEx8 << "\n"; */

    /* cout << "======================Example 9========================\n";

    string s;
    cout << "Type value of s: ";
    getline(cin, s);
    int length = s.length();
    string resultEx9 = "";
    string lastCharacter = "";
    if ( length >= 1) {
        lastCharacter = s[length - 1];
        cout << lastCharacter << "\n";
        resultEx9 = lastCharacter + s + lastCharacter;
    }
    cout << "Result: "<< resultEx9 << "\n"; */

    cout << "======================Example 10========================\n";

    int a;
    cout << "Type value of a: ";
    cin >> a;
    bool resultEx10;
    cout << a % 3 << "\n";
    cout << a/ 3 << "\n";
    cout << a % 7 << "\n";
    if (a % 3 == 0  || a % 7 == 0)
    {
        resultEx10 = true;
    }
    else
    {
        resultEx10 = false;
    }
    cout << "Result: " << resultEx10 << "\n";
}