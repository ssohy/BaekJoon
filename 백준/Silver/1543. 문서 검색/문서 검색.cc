#include <iostream>
using namespace std;

int main()
{
    string doc, word;
    int cnt = 0;

    getline(cin, doc);
    getline(cin, word);

    if (doc.length() < word.length()) {
        cout << 0;
        return 0;
    }

    for (size_t i = 0; i <= doc.length() - word.length(); ) {
        if (doc.substr(i, word.length()) == word) { 
            cnt++;
            i += word.length(); 
        } else {
            i++; 
        }
    }
    cout << cnt;
    return 0;
}
