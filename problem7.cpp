#include <iostream>
using namespace std;
int countAuthentic(const string& text) {
    int count = 0;
    bool seen[26] = {false};
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            seen[ch - 'A'] = true;




        }
    }
    for (int i = 0; i < 26; i++) {
        if (seen[i]) {
            count++;

        }
    }
    return count;
}
int main() {
    string s;
    cin>>s;
    cout << countAuthentic(s) << endl;
    return 0;

}