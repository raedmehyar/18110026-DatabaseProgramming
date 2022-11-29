#include <stdio.h>

int main() {
    int size; 
    int arr[size]; 
    int v1, v2, temp;
    
    printf("input the size  of array: "); 
    scanf("%d",&size);

    
    for(int i=0;i<size;i++){ 
        printf("\ninput %d element of array: ", i+1); 
        scanf("%d",&arr[i]);
    } 
    printf("\n----------------------------");
    printf("\nThe array  is "); 
    for(int i=0;i<size;i++){ 
        printf("%d ",arr[i]); 
    } 
    return 0; 
}