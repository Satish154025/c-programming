#include<stdio.h>

int main(){
    int i,pos,a[10],key,j,mid,flag=0;
    for(i=0;i<10;i++){
        printf("enter the value\n");
        scanf("%d",&a[i]);
    }
    printf("enter the valve to search\n");
    scanf("%d",&key);
    i=0;
    j=9;
    while(i<=j){
        mid=(i+j)/2;
        if(a[mid]==key){
            flag=1;
            pos=mid+1;
            break; 
        }
        if(a[mid]<key){
            i=mid+1;
        }
        if(a[mid]>key){
            j=mid-1;
        }
    }
    if(flag==1){
        printf("element is found at %dth position\n ",pos);
    }
    else
        printf("element is not found at any position\n");
    return 0;
}