//
// Created by vidit on 22/9/18.
//

#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int main(){
    int x[] ={4,1,6,23,3,5,2};
    int n = sizeof(x)/ sizeof(*x);
    bubbleSort(x,n);

    for(int i=0;i<n;i++){
        cout<<x[i];
    }

}