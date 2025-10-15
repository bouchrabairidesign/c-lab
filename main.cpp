#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int freq[26] = {0}; 
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        freq[c - 'a']++; 
    }
    int minFreq = 1000, maxFreq = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) { 
            if (freq[i] < minFreq)
                minFreq = freq[i];
            if (freq[i] > maxFreq)
                maxFreq = freq[i];
        }
    }
    if (minFreq == maxFreq)
        cout << "The string is valid" << endl;
    else if ((maxFreq - minFreq == 1) || minFreq == 1)
        cout << "The string is valid" << endl;
    else
        cout << "The string is not valid" << endl;

    return 0;
}

