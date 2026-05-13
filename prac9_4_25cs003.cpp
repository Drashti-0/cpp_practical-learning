#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    map<string, vector<string>> dir;
    int choice;

    while (true)
    {
        cout << "\n1. Add Folder\n2. Add File\n3. Display\n4. Search Folder\n5. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string folder;
            cout << "Enter folder name: ";
            cin >> folder;
            dir[folder];
        }
        else if (choice == 2)
        {
            string folder, file;
            cout << "Enter folder name: ";
            cin >> folder;
            if (dir.find(folder) != dir.end())
            {
                cout << "Enter file name: ";
                cin >> file;
                dir[folder].push_back(file);
            }
            else
            {
                cout << "Folder not found\n";
            }
        }
        else if (choice == 3)
        {
            for (auto it : dir)
            {
                cout << it.first << ":\n";
                for (auto f : it.second)
                {
                    cout << "  " << f << endl;
                }
            }
        }
        else if (choice == 4)
        {
            string folder;
            cout << "Enter folder name: ";
            cin >> folder;
            if (dir.find(folder) != dir.end())
            {
                cout << "Files:\n";
                for (auto f : dir[folder])
                {
                    cout << f << endl;
                }
            }
            else
            {
                cout << "Folder not found\n";
            }
        }
        else if (choice == 5)
        {
            break;
        }
    }

    return 0;
}