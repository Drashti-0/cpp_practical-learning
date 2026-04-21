#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");

    if(!file) {
        cout << "file open nathi thatu";
        return 0;
    }

    string line;
    int characters = 0;
    int words = 0;
    int lines = 0;

    while(getline(file, line)) {
        lines++;

        int inword = 0;

        for(int i = 0; i < line.length(); i++) {
            char ch = line[i];

            characters++;

            if(ch != ' ' && ch != '\t') {
                if(inword == 0) {
                    words++;
                    inword = 1;
                }
            } else {
                inword = 0;
            }
        }
    }

    cout << "lines: " << lines << endl;
    cout << "words: " << words << endl;
    cout << "characters: " << characters << endl;

    file.close();

    return 0;
}