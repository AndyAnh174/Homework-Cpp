#include <iostream>
#include <cmath>
using namespace std;

int countNonDecreasingSubarrays(int n, int k, int A[]) {
    int count = 0;

    for (int i = 0; i <= n - k; ++i) {
        bool isNonDecreasing = true;
        for (int j = i; j < i + k - 1; ++j) {
            if (A[j] > A[j + 1]) {
                isNonDecreasing = false;
                break;
            }
        }

        if (isNonDecreasing) {
            count++;
        }
    }

    return count;
}

int main() {

    int n, k;
    cout << "nhap so day trong mang: ";
    cin >> n;
    cout <<"nhap so day ban yeu cau: ";
    cin>> k;
    
    int A[n];
    for (int i = 0; i < n; ++i) {
      cout<<"A["<<i<<"]: ";
        cin >> A[i];
    }
    int result = countNonDecreasingSubarrays(n, k, A);
    cout << "ket qua la: " <<result << endl;

    return 0;
}