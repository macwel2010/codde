#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bubble_sort(int unsort_arr[], int num_elements);

int main()

{
    int num_elements, sort_method;
    printf("Enter number of elements for the array : ");
    sacnf("%d", &num_elements);
    int unsort_arr[num_elements];
    for (int i; i < num_elements; i++)
    {
        unsort_arr[i] = rand();
    }
    printf("Enter the method for sorting the array : ");
    printf("\n 1. Bubble sort ");
    scanf("%d", &sort_method);
    switch (sort_method)
    {
    case 1:
        bubble_sort(unsort_arr, num_elements);
        break;

    default:
        break;
    }
    return 0;
}
