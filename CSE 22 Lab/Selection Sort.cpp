#include <iostream>
using namespace std;

void swap(int *p, int *q)
{
    int tmp=*p;
    *p = *q;
    *q = tmp;
}

void selection_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_pos = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(&arr[min_pos],&arr[i]);
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

    selection_sort(arr,length);
    arr_print(arr,length);

    return 0;
}
