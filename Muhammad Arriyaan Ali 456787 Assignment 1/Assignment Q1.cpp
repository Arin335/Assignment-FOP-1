#include <iostream>
#include <string>

using namespace std;

string reverseString(string str) {
    int n = str.length();
    for(int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return str;
}

int main() {
    string str1, str2;
    cout << "Enter first Word(string): "<<endl;
    cin >> str1;
    cout << "Enter second Word(string): "<<endl;
    cin >> str2;

    if(str1 == str2) {
        cout << "Both strings are equal. Rotating the first string..."<<endl;
        str1 = reverseString(str1);
        cout << "String after rotation: " <<endl<< str1 << endl;
    } else {
        cout << "Strings are not equal"<<endl;
    }

    return 0;
}
