#include<stdio.h>
#include<stdlib.h>
void main(){
int a[20],n,i,key,flag;
printf("Enter the number of elements in the array:");
scanf("%d", &n);
printf("Enter the array elements\n");
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
printf("Enter the element to be searched\n");
scanf("%d", &key);
for(i=0;i<n;i++){

    if(a[i] == key){
        printf("The index of the element id %d",i);
        flag = 1;
    }
}
if(flag == 0)
    printf("Key element not found");
return 0;

}
