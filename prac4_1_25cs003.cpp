#include <iostream>
using namespace std;

class dynamicarray
{
    int *arr;
    int size;

public:
    dynamicarray()
    {
        arr = NULL;
        size = 0;
    }

    // insert at end
    void insert(int value)
    {
        int *temp = new int[size + 1];

        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }

        temp[size] = value;

        delete[] arr;
        arr = temp;
        size++;
    }

    // delete from position
    void deletepos(int pos)
    {
        if (pos < 0 || pos >= size)
        {
            cout << "invalid position\n";
            return;
        }

        int *temp = new int[size - 1];

        int j = 0;
        for (int i = 0; i < size; i++)
        {
            if (i != pos)
            {
                temp[j] = arr[i];
                j++;
            }
        }

        delete[] arr;
        arr = temp;
        size--;
    }

    // display array
    void display()
    {
        if (size == 0)
        {
            cout << "array is empty\n";
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    dynamicarray d;

    d.insert(10);
    d.insert(20);
    d.insert(30);

    cout << "after insert:\n";
    d.display();

    d.deletepos(1);

    cout << "after delete:\n";
    d.display();

    return 0;
}