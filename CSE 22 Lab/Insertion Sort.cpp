#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int data, hole;
    for(int i=1;i<n;i++)
    {
        data = arr[i];
        hole = i;
        while(hole>0 && arr[hole-1]>data)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole]=data;
    }
}

void arr_print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<< " ";
    }
}

int main()
{
    int arr[] = {2, 5, 6, 40, 10, 13};
    int length = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr,length);
    arr_print(arr,length);

    return 0;
}