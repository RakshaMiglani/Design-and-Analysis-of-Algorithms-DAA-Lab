#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
void printOptimalParens(int i, int j, int n, int *bracket, char *name) {
if (i == j) {
printf("%c", (*name)++);
return;}
printf("(");
printOptimalParens(i, *((bracket + i * n) + j), n, bracket, name);
printOptimalParens(*((bracket + i * n) + j) + 1, j, n, bracket, name);
printf(")");}
void matrixChainOrder(int p[], int n) {
int m[n][n];
int bracket[n][n];
for (int i = 1; i < n; i++)
m[i][i] = 0;
for (int L = 2; L < n; L++) {
for (int i = 1; i < n - L + 1; i++) {
int j = i + L - 1;
m[i][j] = INT_MAX;
for (int k = i; k <= j - 1; k++) {
int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
if (q < m[i][j]) {
m[i][j] = q;
bracket[i][j] = k;}}}}
printf("Minimum number of multiplications is: %d\n", m[1][n - 1]);
char name = 'A';
printf("Optimal Parenthesization: ");
printOptimalParens(1, n - 1, n, (int *)bracket, &name);
printf("\n");}
int main() {
int n;
srand(time(0));
printf("Enter the number of matrices: ");
scanf("%d", &n);
int p[n + 1];
printf("Randomly generated dimensions: ");
for (int i = 0; i <= n; i++) {
p[i] = rand() % 90 + 10;
printf("%d ", p[i]);}
printf("\n");
clock_t start, end;
double cpu_time_used;
start = clock();
matrixChainOrder(p, n + 1);
end = clock();
cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
printf("Execution Time: %f ms\n", cpu_time_used);
return 0;
}