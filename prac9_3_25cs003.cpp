#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n, num;

    cout << "Enter number of elements: ";
    cin >> n;

    set<int> s;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        s.insert(num);  
    }

    cout << "\nUnique elements (sorted):\n";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

 
    vector<int> v(s.begin(), s.end());

    cout << "\n\nVector elements:\n";
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}