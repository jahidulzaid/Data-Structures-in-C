//Insertion Sort Algorithm using Arrays
//Jahidul Islam
//221002504
#include<stdio.h>
int insersionSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;
    insersionSort(arr, size);
    //printing the sorted array
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
