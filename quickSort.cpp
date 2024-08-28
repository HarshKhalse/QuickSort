#include <bits/stdc++.h>
using namespace std;

class QuickSort
{
public:
    void sort(int arr[], int size)
    {
        quickSort(arr, 0, size - 1);
    }

private:
    void quickSort(int arr[], int left, int right)
    {
        if (left < right)
        {
            int pivotIndex = partition(arr, left, right);
            quickSort(arr, left, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, right);
        }
    }

    int partition(int arr[], int left, int right)
    {
        int pivot = arr[right];
        int l = left - 1;
        for (int r = left; r < right; r++)
        {
            if (arr[r] < pivot)
            {
                l++;
                swap(arr[l], arr[r]);
            }
        }
        swap(arr[l + 1], arr[right]);
        return l + 1;
    }

    void swap(int &p, int &q)
    {
        int tmp = p;
        p = q;
        q = tmp;
    }
};

int main()
{
    int n;
    cout << "Enter the size of array n: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:  \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

        QuickSort qSort;
    qSort.sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
