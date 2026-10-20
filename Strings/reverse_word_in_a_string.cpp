//Leetcode =easy 557
#include <iostream>
#include <string>
using namespace std;

void rev(string& word) {
    int l = 0;
    int r = word.length() - 1;

    while (l < r) {
        swap(word[l], word[r]);
        l++;
        r--;
    }
}

int main() {
    string s;
    getline(cin, s);

    string ans = "";
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word.push_back(s[i]);
        } else {
            rev(word);
            ans += word;
            ans += ' ';
            word = "";
        }
    }

    rev(word);
    ans += word;

    cout << ans << endl;

    return 0;
}
