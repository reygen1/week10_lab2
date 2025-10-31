#include <iostream>
using namespace std;

string Reverser(const string& s) {
    string reversed;
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

int main() {
    string text;
    getline(cin, text);
   bool p = (Reverser(text) == text)? true : false ;
    cout << p << endl;
    return 0;
}

