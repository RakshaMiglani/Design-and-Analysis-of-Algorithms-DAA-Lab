#include <stdio.h>
void merge(double a[], int beg, int mid, int end){
 int n1 = mid - beg + 1;
 int n2 = end - mid;
 double LA[n1], RA[n2];
 for (int i = 0; i < n1; i++)
 LA[i] = a[beg + i];
 for (int j = 0; j < n2; j++)
 RA[j] = a[mid + 1 + j];
 int k=beg, i=0, j=0;
 while (i < n1 && j < n2){
 if(LA[i] <= RA[j]){
 a[k] = LA[i];
 i++;}
 else{
 a[k] = RA[j];
 j++;}
 k++;}
 while (i<n1){
 a[k] = LA[i];
 i++;
 k++;}
 while (j<n2){
 a[k] = RA[j];
 j++;
 k++;}}

void Merge_Sort(double a[], int beg, int end){
 if (beg<end){
 int mid=(beg+end)/2;
 Merge_Sort(a,beg,mid);
 Merge_Sort(a,mid+1,end);
 merge(a,beg,mid,end);
 }
}
int main(){
 double a[6]={5, 5.5, 6, 3.723, 1.23, 8.88};
 clock_t t1,t2;
 t1=clock();
 Merge_Sort(a,0,5);
 t2=clock();
 for (int i=0;i<6;i++){
 prinƞ("%.2f, ",a[i]);
 }