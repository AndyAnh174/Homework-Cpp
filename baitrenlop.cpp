
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  
  sort(a, a + n);

  
  bool isPossible = true;
  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] != a[2] - a[1]) {
      isPossible = false;
      break;
    }
  }


  if (isPossible) {
    cout << "Co the tao thanh day cap so cong." << endl;
    cout << "Cong sai: " << a[2] - a[1] << endl;
  } else {

    int minDiff = INT_MAX;
    int i = 0;
    int j = 1;
    while (i < n && j < n) {
      int diff = a[j] - a[i];
      if (diff < minDiff) {
        minDiff = diff;
      }
      i++;
      j++;
    }
    cout << "Khong the tao thanh day cap so cong." << endl;
    cout << "2 so co hieu nho nhat: " << a[i - 1] << " " << a[i] << endl;
  }


  int maxGCD = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int gcd = __gcd(a[i], a[j]);
      if (gcd > maxGCD) {
        maxGCD = gcd;
      }
    }
  }
  cout << "Uoc so lon nhat cua 1 cap 2 so trong day: " << maxGCD << endl;

  return 0;
}