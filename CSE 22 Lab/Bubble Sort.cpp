#include <bits/stdc++.h>
using namespace std;

int arra[100];

void createArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        cin>> arr[i];
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
        for ( int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int siz;
    cout<<"Enter array size"<<endl;
    cin>>siz;
    createArray(arra,siz);

    cout << "Unsorted array:"<<endl;
    printArray(arra, siz);

    bubbleSort(arra, siz);

    cout<<"Sorted array: \n";
    printArray(arra, siz);
    return 0;
}