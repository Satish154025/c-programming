#include<stdio.h>
int main(){
    int i,j,a[6],t;

    for(i=0;i<6;i++){
        printf("enter the number\n");
        scanf("%d",&a[i]);
    }
    printf("the original arry is\n");
    for(i=0;i<6;i++){
        printf("%d\n",a[i]);
    }

    while(i<=j){
        for(i=0;i<5;i++){
            for(j=0;j<5-i;j++){
                if(a[j]>a[j+1]){
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
    }printf("the sorted arry is\n");
    for(i=0;i<6;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}