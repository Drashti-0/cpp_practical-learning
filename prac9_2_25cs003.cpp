#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    map<string, int> m;
    string word;
    stringstream ss(s);

    while (ss >> word)
    {
        m[word]++;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}