#include <iostream>


using namespace std;

class Heap_ops
{
    int n;
    int arr[];
public:
    Heap_ops()
    {
        cout << "Enter number of Elements in Heap: ";
        cin >> n;
        int new_el;
        cout << "Add Element-s to the array: " << endl;
        for(int i = 1; i <= n; i++)
        {
            cout << "\tEnter Element: ";
            cin >> new_el;
            arr[i] = new_el;
        }
    }



/*
    void build_max_heap()
    {
        for (int i = (n/2) - 1p; i >= 0; i--)
        {
            max_heapify(arr, i, n);
        }
    }
*/
    void max_heapify(int arr[], int i, int n)
    {
        int l = 2*i + 1;
        int r = 2*i + 2;
        int flag = 0;
        int largest = 0;
        if (l <= n && arr[l] > arr[i])
        {
            flag = 1;
            largest = l;
        }

        else if (l <= n && arr[i] > arr[l])
        {
            largest = i;
        }

        if (r <= n && arr[r] > arr[largest])
        {
            flag = 1;
            largest = r;
        }

        if (flag == 1)
        {
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;

            max_heapify(arr, largest, n);
        }

    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << " " << endl;
    }

};

int main()
{

    Heap_ops obj;
    obj.max_heapify(arr, n, 0);
    obj.display();
}

