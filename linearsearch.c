#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
    int key; 
    int flag = 0;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if (arr[i] == key){
            printf("Element found at %d index in the given array", i);
            flag = 1;
            break;
        }
    }
    if (flag==0){ 
        printf("Element does not exist in the given array");
    }

    //printf("Hello world");
    
}