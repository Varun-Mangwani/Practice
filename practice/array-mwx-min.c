#include<stdio.h>

void main(){
int arr[7];
int i,min,max,smax;
for(i=0;i<7;i++){
printf("Enter The Array:");
scanf("%d",&arr[i]);
if(i==0){
max=arr[i];
min=arr[i];
smax=arr[i];
}else if(arr[i]>max){
smax=max;
max=arr[i];

}else if(arr[i]>smax){

smax=arr[i];

}else if(arr[i]<min){
min=arr[i];
}
}
printf("\nMinimum No. Is %d",min);
printf("\nMaximum No. Is %d",max);
printf("\nSecond Maximum No. Is %d",smax);

}
