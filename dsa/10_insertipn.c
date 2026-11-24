#include<stdio.h>

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indInsert(int arr[], int n, int element, int size, int index) {
    if (size>=capacity){
        return -1;
    }
}
int main() {
    int arr[100] = {1,2,6,76};
    int n = 4, element =45, index = 5;
    display(arr, n);
    indInsert(arr, n, element,100,index);
    display(arr, n);

    return 0;
}