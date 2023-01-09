 //binary seacrh usig recursion
#include<stdio.h>

int binSearch(int arr[], int low, int high, int search)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == search)
        return mid;
    else if (arr[mid] > search)
        return binSearch(arr, low, mid - 1, search);
    else
        return binSearch(arr, mid + 1, high, search);
}


int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int size, search, low, high;
    search = 10;
    size = sizeof(array)/sizeof(array[0]);
    int result = binSearch(array, 0, size-1, search );
    if(result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d", result);
    }
}