#include<iostream>
using namespace std;
void selectionSort(int arr[],int size) {
    for(int i=0; i<size-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<=size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    
}

void bubbleSort(int arr[],int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i; j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j],arr[j+1]);
        }
    }
    }
    
    
    
}

void printArray(int arr[],int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int arr[7] = {2,1,3,9,4,5,4};
    selectionSort(arr,7);
    printArray(arr,7);
    bubbleSort(arr,7);
    cout<<endl;
    printArray(arr,7);
}