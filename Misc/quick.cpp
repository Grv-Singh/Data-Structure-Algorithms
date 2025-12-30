#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int i,n,aray[(2*n)];

    int n = sizeof(aray)/sizeof(aray[0]);

    for(i=0;i<(2*n);i++){
        cin>>aray[i];
    }

    quickSort(aray, 0, n-1);
    make_aray(aray,n);
    return 0;
}

void make_pairs(int aray, int n){
    int new_aray[(n/2)][3];
    int i,max;
    for(i=0;i<(n/2);i++){
        new_aray[i][0]=aray[i];
        new_aray[i][1]=aray[n-i];
        new_aray[i][2]=new_aray[i][0]+new_aray[i][1];
    }
    max = new_aray[0][0];
    for(i=0;i<n;i++){
        if(new_aray[i][2]>max){
            max = new_aray[i][2];
        }
    }
    printf("%d",max);
}
