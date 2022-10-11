//tim va in MIN 2 va MAX 2 trong mang///
#include "stdio.h"

void nhap(int *arr, int *n);
void min_max(int *arr, int n, int *min, int *max);
void min_max_2(int *arr, int n, int *min2, int *max2);
void xuat(int min2, int max2);

int main()
{   
    int n=0;
    int arr[100];
    int min,max,min2,max2;
    nhap(arr, &n);
    min_max_2(arr,n,&min2,&max2);
    
    return 0;
    
}


void min_max_2(int *arr,int n, int *min2, int *max2){
    int min,max;
    min_max(arr,n,&min,&max);
    *min2 = max;
	*max2 = min;
    for (int i = 0; i < n; i++)
    {
        if ((*min2) > arr[i] && arr[i] != min)
        {
            (*min2) = arr[i];
        }
        if ((*max2)< arr[i] && arr[i] != max)
        {
            (*max2) = arr[i];
        }
        
    }
    if (min != (*min2) && max != (*max2))
    {
        xuat(*min2,*max2);
       
    }else{
        printf("\nkhong co gia tri can tim");
    }
    
    
}
void min_max(int *arr, int n, int *min, int *max){
    int i;
    (*min) = (*max) = arr[0];
    for (i = 0; i < n; i++)
    {
        if ((*min) > arr[i])
        {
            (*min) = arr[i];
        }
        if ((*max)< arr[i])
        {
            (*max) = arr[i];
        }     
    }
    
}

void nhap(int *arr, int *n){
    while ((*n)<=0)
    {
        printf("\nNhap lai n: ");
        scanf("%d",n);
    }
    for (int i = 0; i < (*n); i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    
    
}

void xuat(int min2, int max2){
    if (min2 == max2)
    {
        printf("ERROR");
    }else{
    printf("\nMIN2 = %d \nMAX2 = %d",min2,max2);
    }
}
