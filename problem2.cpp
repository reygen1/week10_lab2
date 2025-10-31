#include <iostream>
using namespace std;
 string Reverser  ( string& s ) {
  for (int i = 0; i < s.length(); i++) {
     cout <<  s[s.length() - 1 - i ];
  }
     cout << endl;

 }

int main() {
     string text;
     getline(cin,text);
     Reverser(text);
     return 0;
 }
