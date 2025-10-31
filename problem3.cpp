#include <iostream>
using namespace std;

bool IsAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }

    return true;
}

int main() {
    string s, t;

    cin >> s;

    cin >> t;

    if (IsAnagram(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

