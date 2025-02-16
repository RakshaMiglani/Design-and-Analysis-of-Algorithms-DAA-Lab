#include <stdio.h>
#include <string.h>
#include <time.h>
#define d 256
void search(char pat[], char txt[], int q){
int M = strlen(pat);
int N = strlen(txt);
int i, j, p = 0, t = 0, h = 1, sh=0;
for (i = 0; i < M - 1; i++)
h = (h * d) % q;
for (i = 0; i < M; i++) {
p = (d * p + pat[i]) % q;
t = (d * t + txt[i]) % q;}
int f=0;
for (i = 0; i <= N - M; i++) {
if (p == t) {
for (j = 0; j < M; j++) {
if (txt[i + j] != pat[j])
break;}
if (j == M){
printf("Pattern found at index %d \n", i);
f=1;}
else { sh++;}}
if (i < N - M) {
t = (d * (t - txt[i] * h) + txt[i + M]) % q;
if (t < 0)
t = (t + q);}}
printf("Number of spurious hits is: %d", sh);
if (f==0){printf("Pattern is not found");}}
int main(){
char txt[d]; printf("Enter text: "); scanf("%s",&txt);
char pat[10]; printf("Enter Pattern: "); scanf("%s",&pat);
int q = 11;
clock_t t;
t=clock();
search(pat, txt, q);
t=clock()-t;
double Time = ((double)t)/CLOCKS_PER_SEC;
printf("\nExecution time: %d",t);
return 0;}