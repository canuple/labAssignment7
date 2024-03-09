//Shaun Knapp
//COP3502 Lab Section 36
//Lab Assignment 7
//3/8/24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(int arr[], int swapcount[], int size)
{
    for (int i = 0; i<size-1; i++)
    {
        printf("%d: %d", arr[i], swapcount[size]);
    }
    printf("%d\n", swapcount[size]);
}

void bubbleSort(int arr[], int swapcount[], int size)
{
    int temp;
    for (int i = 0; i<size-1; i++)
    {
        for (int j = 0; j<size-i-1; j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapcount[j]++;
                swapcount[size]++;
                swap(swapcount[j], swapcount[j+1]);
            }
        }
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *xp = temp;
}

void selectionSort(int arr[], int swapcount[], int size)
{
    int minIndex, temp;

    for (int i = 0; i<size-1; i++)
    {
        minIndex = i;

        for (int j = 0; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
            swap(arr[i], arr[minIndex]);
            swapcount[i]++;
            swapcount[size]++;
            swap(swapcount[i], swapcount[minIndex]);
        }
    }
}

int main()
{
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int swapcount1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int swapcount2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int arr1Bubble[9];
    memcpy(array1, arr1Bubble, sizeof(array1));
    int swap1Bubble[9];
    memcpy(swapcount1, swap1Bubble, sizeof(swapcount1));
    int arr2Bubble[9];
    memcpy(array2, arr2Bubble, sizeof(array2));
    int swap2Bubble[9];
    memcpy(swapcount2, swap2Bubble, sizeof(swapcount2));

    printf("array 1 bubble sort: \n");
    bubbleSort(arr1Bubble, swap1Bubble, 9);
    printf("array 2 bubble sort: \n");
    bubbleSort(arr2Bubble, swap2Bubble, 9);


    int arr1Selection[9];
    memcpy(array1, arr1Selection, sizeof(array1));
    int swap1Selection[9];
    memcpy(swapcount1, swap1Selection, sizeof(swapcount1));
    int arr2Selection[9];
    memcpy(array2, arr2Selection, sizeof(array2));
    int swap2Selection[9];
    memcpy(swapcount2, swap2Selection, sizeof(swapcount2));

    printf("array 1 selection sort: \n");
    bubbleSort(arr1Selection, swap1Selection, 9);
    printf("array 2 selection sort: \n");
    bubbleSort(arr2Selection, swap2Selection, 9);

}
