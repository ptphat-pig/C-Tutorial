/* 10 bài */
#include <iostream>
using namespace std;
/* int resultEx1(int a, int b){
    int resultE1;
    if (a == b){
        return resultE1 = (a + b) / 3;
    } else {
        return resultE1 = a + b;
    }
}
int main() {
    int a;
    int b;
    int resultE1;
    cout << "type value of a: ";
    cin >> a;
    cout << "Type value of b: ";
    cin >> b;
    resultE1 = resultEx1(a, b);
    cout << "Result: " << resultE1 << "\n";
} */

/* // Example 2:
int resultEx2(int n) {
    int resultE2;
    int diff = n - 51;
    if (diff < 0){
        diff *= -1;
        return resultE2;
    }
    resultE2 = diff;
    if (n > 51)
    {
        return resultE2 = diff * 3;
    }
}
int main() {
    cout << "type value of n: ";
    int n;
    cin >> n;
    int resultE2;
    resultE2 = resultEx2(n);
    cout << "Result: " << resultE2 << "\n";
}
 */

/* // Example 3:
bool resultEx3(int a, int b) {
    bool resultE3;
    if (a == 30 || b == 30 || a + b == 30)
    {
    resultE3 = true;
    return resultE3;
    }
    else
    {
    resultE3 = false;
    return resultE3;
    }
}
int main()
{
    int a, b;
    cout << "Type value of a: ";
    cin >> a;
    cout << "Type value of b: ";
    cin >> b;
    bool resultE3;
    resultE3 = resultEx3(a ,b);
    cout << "Result: " << resultE3 << "\n";
}
 */

/* // Example 4:
bool resultEx4(int a){
   bool resultE4;
   int lowerBoundOf100 = 90;
   int upperBoundOf100 = 110;
   int lowerBoundOf200 = 190;
   int upperBoundOf200 = 210;
   if ((a >= lowerBoundOf100 && a <= upperBoundOf100) || (a >= lowerBoundOf200 && a <= upperBoundOf200))
   {
       resultE4 = true;
       return resultE4;
   }
   else
   {
       resultE4 = false;
       return resultE4;
   }
}
int main(){
   int a;
   cout << "Type value of a: ";
   cin >> a;
   bool resultE4;
   resultE4 = resultEx4(a);
   cout << "Result: " << resultEx4 << "\n";
} */

/* // Example 5:
string resultEx5(string s){
    int length = s.length(); // do dai cua chuoi
        string firstWord = "";
        string resultEx5;
        string resultE5 = "";
        for (int i = 0; i <= length; i++){
            if (s[i] == ' ')
                break;
            firstWord = firstWord + s[i];
        }
        if (firstWord == "if"){
            resultE5 = s;
            return resultE5;
        } else{
            resultE5 = "if " + s;
            return resultE5;
        }
}
int main() {
    string s;
    cout << "Type string value of s: ";
    getline(cin, s);
    string resultE5 = "";
    resultE5 = resultEx5(s);
    cout << "Result: "<< resultE5 << "\n";

} */

/* // Example 6:
string resultEx6(string s)
{
    string resultE6 = "";
    int length = s.length();
    int n;
    for (int i = 0; i < length; i++)
    {
        if (i == n)
        {
            continue;
            resultE6 += s[i];
        }
    }
    return resultE6;
}
int main()
{
    string s;
    cout << "Type value of s: ";
    getline(cin, s);                                
    int i;
    cout << "type value of n: ";
    cin >> i;
    string resultE6 = "";
    resultE6 = resultEx6(s);
    cout << i << ":" << s[i] << ":" << resultE6 << "\n";
}
    Đang đứng hình
 */

 // Example 7:
 string resultEx7(string s){
    int length = s.length();
    string resultE7 = "";
    if (length != 1)
    {
        int firstPosition = 0;
        int lastPosition = length - 1;
        for (int i = 0; i < length; i++)
        {
            if (i == firstPosition)
                resultE7 += s[lastPosition];
            else if (i == lastPosition)
                resultE7 += s[firstPosition];
            else 
                resultE7 += s[i];
        }
        return resultE7;
    } 
    else {
        resultE7 = s;
    }
    return resultE7;

 }
 int main(){
    string s;
    cout << "Type value of s: ";
    getline(cin, s);
    string resultE7 = "";
    resultE7 = resultEx7(s);
    cout << "Result: " << resultE7 << "\n";
}

/* //Example 8:
string resultEx8(string s){
     int length = s.length();
       string resultE8 = "";
       string twoFromChar = "";
       if (length >= 2)
       {
           twoFromChar += s[0];
           twoFromChar += s[1];
           cout << twoFromChar << "\n";
           for (int i = 0; i < 4; i++)
           {
               resultE8 += twoFromChar;
           } 
           return resultE8;
       }
       else
       {
           resultE8 = s;
       }
        return resultE8;
}
int main(){
    string s;
    cout << "Type value of s: ";
    getline(cin, s);
    string resultE8 = "";
    resultE8 = resultEx8(s);
    cout << "Result: " << resultE8 << "\n";
} */

/* // Example 9:
string example9(string s){
    int length = s.length();
    string resultEx9 = "";
    string lastCharacter = "";
    if ( length >= 1) {
        lastCharacter = s[length - 1];
        resultEx9 = lastCharacter + s + lastCharacter;
    }
    return resultEx9;
}
int main(){
    string s;
    cout << "Type value of s: ";
    getline(cin, s);
    string resultEx9 = example9(s);
    cout << "Result: "<< resultEx9 << "\n";
} */

/* // Example 10:
bool example10 (int a) {
    bool resultEx10;
    if (a > 0)
    {
        if (a % 3 == 0 || a % 7 == 0)
        {
            resultEx10 = true;
        }
        else
        {
            resultEx10 = false;
        }
    }
    return resultEx10;
}
int main(){
    int a;
    bool resultEx10;
    cout << "Type value of a: ";
    cin >> a;
    resultEx10 = example10(a);
    cout << "Result: " << resultEx10 << "\n";
} */