#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
char S1[100], S2[100];
int LCS_table[100][100];
void generateRandomString(char *str, int length) {
char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (int i = 0; i < length; i++) {
str[i] = charset[rand() % (sizeof(charset) - 1)];}
str[length] = '\0';}
void lcsAlgo() {
int m = strlen(S1);
int n = strlen(S2);
for (int i = 0; i <= m; i++){LCS_table[i][0] = 0;}
for (int i = 0; i <= n; i++){LCS_table[0][i] = 0;}
for (int i = 1; i <= m; i++) {
for (int j = 1; j <= n; j++) {
if (S1[i - 1] == S2[j - 1]) {
LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;}
else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1]) {
LCS_table[i][j] = LCS_table[i - 1][j];}
else {
LCS_table[i][j] = LCS_table[i][j - 1];
}}}
int index = LCS_table[m][n];
char lcsAlgo[index + 1];
lcsAlgo[index] = '\0';
int i = m, j = n;
while (i > 0 && j > 0) {
if (S1[i - 1] == S2[j - 1]) {
lcsAlgo[index - 1] = S1[i - 1];
i--;
j--;
index--;}
else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
i--;
else
j--;}
printf("S1 : %s \nS2 : %s \n", S1, S2);
printf("LCS: %s\n", lcsAlgo);}
int main() {
srand(time(0));
int len1, len2;
printf("Enter the length of string S1: ");
scanf("%d", &len1);
printf("Enter the length of string S2: ");
scanf("%d", &len2);
generateRandomString(S1, len1);
generateRandomString(S2, len2);
clock_t start, end;
start = clock();
lcsAlgo();
end = clock();
double time_taken = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC;
printf("Execution Time: %.4f milliseconds\n", time_taken);
return 0;}