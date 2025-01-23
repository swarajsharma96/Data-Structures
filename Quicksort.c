#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quicksortMiddle(int arr[],int low,int high){
  if(low<high){
    int pivot=arr[(low+high)/2];
    int i=low;
    int j=high;
    int temp;

    while(i<=j){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if(low<j)
        quicksortMiddle(arr,low,j);
    if(i<high)
        quicksortMiddle(arr,i,high);
  }
}
void printArray(int arr[],int size){
  for(int i=0; i<size; i++){
    printf("%d",arr[i]);
  }
  printf("\n");
}
int main(){
  int array1[]={37, 7, 23, 32, 5, 62};
  int n=sizeof(array1)/sizeof(array1[0]);

  printf("original array \n");
  printArray(array1,n);

  //using the middle element as pivot
  quicksortMiddle(array1,0,n-1);
  printf("sorted with middle element as pivot \n");
  printArray(array1,n);



}


