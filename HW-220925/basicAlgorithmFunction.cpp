/* 10 bài */
#include <iostream>
using namespace std;
int example1(int a, int b){
    if (a == b){
        return example1 = (a + b) / 3;
    } else {
        return example1 = a + b;
    }
}
int main(){
    cout << "Type value of a: ";
    cin >> a;
    cout << "Type value of b: ";
    cin >> b;
    int resultEx1;
    resultEx1 = example1(a,b);
    cout << "Result: "<< resultEx1 << "\n";
}