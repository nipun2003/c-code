#include <iostream>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void insertionsort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    
}

void printarray(int arr[], int n)
{
    int i;
    cout << "The sorted array is :";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, i;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter your array\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr, n);
    printarray(arr,n);
    return 0;
}
