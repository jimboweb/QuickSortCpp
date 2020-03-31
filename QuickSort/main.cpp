#include <iostream>
#include <cstdio>;
using namespace std;

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high){
    if(low<high)
    {
        cout << " low "<< low << " high" << high;
        int pi = partition(arr, low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

void printArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--) {
        scanf("%d", &n);
    }
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}


void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<=high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

