#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    string path;
    ifstream file;

    while (true)
    {
        cout << "enter file path: ";
        cin >> path;

        file.open(path);

        if (file.is_open())
            break;
        else
            cout << "file not found, try again\n";
    }

    string line;
    int lineno = 0;

    while (getline(file, line))
    {
        lineno++;

        stringstream ss(line);
        int num, sum = 0;
        bool valid = true;

        while (ss >> num)
        {
            sum += num;
        }

        if (ss.fail() && !ss.eof())
            valid = false;

        if (valid)
        {
            cout << "line " << lineno << " sum = " << sum << endl;
        }
        else
        {
            cout << "line " << lineno << " invalid data" << endl;
        }
    }

    file.close();
    return 0;
}