#include <iostream>
using namespace std;
int count (const string& text, char a) {
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == a) {
            counter++;
        }
    }
    return counter;
}

int main () {

    string text;
    getline (cin, text);
    char A;
    cin >> A;
    cout << A << " shows up "<<count (text, A) << "times"<< endl;

}