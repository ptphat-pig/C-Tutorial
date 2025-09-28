/* 10 bài */
#include <iostream>
#include <string>
using namespace std;

int example1(int a, int b){
    int result;
    if (a == b){
        result = (a + b) / 3;
    } else {
        result = a + b;
    }
    return result;
}

// Example 2:
int example2(int n) {
    int result;
    int diff = n - 51;

    if (diff < 0){
        diff *= -1;
    }

    result = diff;
    if (n > 51)
    {
        result = diff * 3;
    }
    return result;
}


// Example 3:
bool example3(int a, int b) {
    bool result;
    if (a == 30 || b == 30 || a + b == 30)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    return result;
}
 

// Example 4:
bool example4(int a){
   bool result;
   int lowerBoundOf100 = 90;
   int upperBoundOf100 = 110;
   int lowerBoundOf200 = 190;
   int upperBoundOf200 = 210;
   if ((a >= lowerBoundOf100 && a <= upperBoundOf100) || (a >= lowerBoundOf200 && a <= upperBoundOf200))
   {
       result = true;
   }
   else
   {
       result = false;
   }
   return result;
}

// Example 5:
string example5(string s){
    int length = s.length(); // do dai cua chuoi
    string firstWord = "";
    string result = "";
    for (int i = 0; i <= length; i++){
        if (s[i] == ' ')
            break;
        firstWord = firstWord + s[i];
    }
    if (firstWord == "if"){
        result = s;
    } else{
        result = "if " + s;
    }
    return result;
}

// Example 6:
string example6(string s, int n)
{
    string result = "";
    int length = s.length();
    for (int i = 0; i < length; i++)
    {
        if (i == n)
            continue;

        result += s[i];
    }
    return result;
}



// Example 7:
string example7(string s){
    int length = s.length();
    string result = "";
    if (length != 1)
    {
        int firstPosition = 0;
        int lastPosition = length - 1;
        for (int i = 0; i < length; i++)
        {
            if (i == firstPosition)
                result += s[lastPosition];
            else if (i == lastPosition)
                result += s[firstPosition];
            else 
                result += s[i];
        }
    } 
    else {
        result = s;
    }
    return result;

}
 
//Example 8:
string example8(string s){
    int length = s.length();
    string result = "";
    string twoFromChar = "";
    if (length >= 2)
    {
        twoFromChar = s.substr(0, 2); // [0, 2) = [0, 1]
        for (int i = 0; i < 4; i++){
            result += twoFromChar;
        } 
    }
    else
    {
        result = s;
    }
    return result;
}


// Example 9:
string example9(string s){
    int length = s.length();
    string result = "";
    string lastCharacter = "";
    if ( length >= 1) {
        lastCharacter = s[length - 1];
        result = lastCharacter + s + lastCharacter;
    }
    return result;
}

// Example 10:
bool example10 (int a) {
    bool result;
    if (a > 0)
    {
        if (a % 3 == 0 || a % 7 == 0)
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    return result;
}

int main(){
    int a;
    bool result;
    cout << "Type value of a: ";
    cin >> a;
    result = example10(a);
    cout << "Result: " << result << "\n";
}