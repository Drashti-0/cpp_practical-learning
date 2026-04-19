#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "enter size of first array: ";
    cin >> n;

    cout << "enter size of second array: ";
    cin >> m;

    // dynamic arrays
    int *a = new int[n];
    int *b = new int[m];

    cout << "enter elements of first sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter elements of second sorted array:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // merged array
    int *c = new int[n + m];

    int i = 0, j = 0, k = 0;

    // merge logic
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // remaining elements
    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    // display result
    cout << "merged array:\n";
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    // free memory
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}