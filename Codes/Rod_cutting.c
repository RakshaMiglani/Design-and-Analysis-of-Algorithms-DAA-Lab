#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <Ɵme.h>
int max(int a, int b) {
 return (a > b) ? a : b;}
int rodCutMemo(int n, int price[], int dp[]) {
 if (n == 0)
 return 0;
 if (dp[n] != -1)
 return dp[n];
 int max_val = INT_MIN;
 for (int i = 1; i <= n; i++) {
 max_val = max(max_val, price[i - 1] + rodCutMemo(n - i, price, dp));}
 return dp[n] = max_val;}
int main() {
 int n;
 prinƞ("Enter the length of the rod: ");
 scanf("%d", &n);
 int *price = (int *)malloc(n * sizeof(int));
 srand(Ɵme(0));
 prinƞ("Randomly generated prices: ");
 for (int i = 0; i < n; i++) {
 price[i] = rand() % 100 + 1;
 prinƞ("%d ", price[i]);}
 prinƞ("\n");
 int *dp = (int *)malloc((n + 1) * sizeof(int));
 for (int i = 0; i <= n; i++)
 dp[i] = -1;
 clock_t start, end;
 double cpu_Ɵme_used;
 start = clock();
 int max_value = rodCutMemo(n, price, dp);
 end = clock();
 cpu_Ɵme_used = ((double)(end - start)) / CLOCKS_PER_SEC;
 prinƞ("Maximum Value: %d\n", max_value);
 prinƞ("ExecuƟon Time: %f seconds\n", cpu_Ɵme_used);
 free(price);
 free(dp);
 return 0;} 