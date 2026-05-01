#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v2;
    for (auto it = v.end() - 1; it >= v.begin(); it--)
    {
        v2.push_back(*it);
        if (it == v.begin())
            break;
    }

    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}