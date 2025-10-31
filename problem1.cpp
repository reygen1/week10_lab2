#include <iostream>
using namespace std;
void SeacrchOfChar (string& s, char& key ) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == key) {
            cout << "FOUND!" << endl;
            return;
        }

    }
    cout << "NOT FOUND!" << endl;
}

int main() {
    string text;
    char ch;
    cout << "Enter a text: ";
    getline(cin,text);
    cout<< "Enter a character: ";
    cin >> ch;
    SeacrchOfChar(text, ch);
    return 0;
}