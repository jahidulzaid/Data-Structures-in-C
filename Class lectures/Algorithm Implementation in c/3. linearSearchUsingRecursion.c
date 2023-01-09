//linear search using recursion
//Jahidul Islam
//221002504

#include<stdio.h>
int linearSearch(int arr[], int size, int search)
{
    if (size < 0)
        return -1;
    if (arr[size] == search)
        return size;
    else
        return linearSearch(arr, size - 1, search);
}
int main(){
    printf("This program finds the index of the element you want to search in an array using linear search algorithm.\n");
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int size, search, low, high;
    printf("Enter the element to be searched: ");

    scanf("%d", &search);
    size = sizeof(array)/sizeof(array[0]);
    int result = linearSearch(array, size-1, search );
    if(result == -1)
    {
        printf("Element is not present in array\n");
    }
    else
    {
        printf("Element is present at index %d\n", result);
    }
}
