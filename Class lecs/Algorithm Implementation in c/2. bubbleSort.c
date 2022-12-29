//bubble sort

#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size  - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;
    bubbleSort(arr, size);
    //printing the sorted array
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}
