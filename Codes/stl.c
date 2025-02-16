#include <iostream>
#include <vector>
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;
struct Student {
    string name;
    int marks;};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    vector<Student> a(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> a[i].name;
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> a[i].marks;}
    auto x1 = high_resolution_clock::now();
    int max = a[0].marks;
    string max_name = a[0].name;
    int min = a[0].marks;
    string min_name = a[0].name;
    for (int i = 1; i < n; ++i) {
        if (a[i].marks > max) {
            max = a[i].marks;
            max_name = a[i].name;}
        if (a[i].marks < min) {
            min = a[i].marks;
            min_name = a[i].name;}}
    auto x2 = high_resolution_clock::now();
    auto Time = duration_cast<microseconds>(x2 - x1);
    cout << "Maximum mark is " << max << " obtained by " << max_name;
    cout << "\nMinimum mark is " << min << " obtained by " << min_name;
    cout << "\nTime taken: " << Time.count() << " microseconds";
    return 0;
}
