#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph;
    getline(cin, paragraph);

    string words[100];
    int freq[100];
    int count = 0;

    string temp = "";

    for(int i = 0; i <= paragraph.length(); i++) {
        char ch = paragraph[i];

        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if(ch == ' ' || ch == '\0') {
            if(temp != "") {
                int found = -1;

                for(int j = 0; j < count; j++) {
                    if(words[j] == temp) {
                        found = j;
                        break;
                    }
                }

                if(found == -1) {
                    words[count] = temp;
                    freq[count] = 1;
                    count++;
                } else {
                    freq[found]++;
                }

                temp = "";
            }
        } else if((ch >= 'a' && ch <= 'z')) {
            temp += ch;
        }
    }

    cout << "words:\n";
    for(int i = 0; i < count; i++) {
        cout << words[i] << " ";
    }

    cout << "\nfrequency:\n";
    for(int i = 0; i < count; i++) {
        cout << words[i] << " = " << freq[i] << endl;
    }

    return 0;
}