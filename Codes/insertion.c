#include <stdio.h>
#include <time.h>
void display(int l[],int n){
 for (int i=0;i<n-1;i++){
 printf("%d,",l[i]);}
 printf("%d\n",l[n-1]);}
int main() {
 int n; printf("Enter number of elements:");
 scanf("%d",&n);
 int l[n];
 for (int i=0;i<n;i++){
 printf("Enter element %d:",i);
 scanf("%d",&l[i]);}
 prinƞ("Initial Array:"); display(l,n);
 clock_t t;
 t=clock()
 for (int j=1;j<n;j++){
 int i=j-1;
 int key=l[j];
 while (i>=0 && l[i]>key){
 l[i+1]=l[i];
 i--;
 printf("Inner loop counter is %d:",i+1); display(l,n);}
 l[i+1]=key;
 printf("Array after iteration %d: ", j); display(l,n);
 printf("\n");}
 t = clock() - t;
 double Time = ((double)t)/CLOCKS_PER_SEC;
 printf("\nSorted Array:"); display(l,n);
 printf("Execution time is: %d", Time);} 