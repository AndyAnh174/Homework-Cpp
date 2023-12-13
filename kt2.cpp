#include <iostream>

using namespace std;

int main() {
  // Nhập tọa độ 4 điểm
  int xa, ya, xb, yb, xc, yc, xd, yd;
  cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;

  // Kiểm tra các điều kiện

  // Vuông
  if ((xa - xb) * (xc - xd) == (ya - yb) * (yc - yd)) {
    cout << "Vuông";
    return 0;
  }

  // Chữ nhật
  if ((xa - xb) == (xc - xd) && (ya - yb) == (yc - yd)) {
    cout << "Chữ nhật";
    return 0;
  }

  // Bình hành
  if ((xa - xb) * (yd - yc) == (ya - yb) * (xc - xd) &&
      (xa - xc) * (yd - yb) == (ya - yc) * (xb - xd)) {
    cout << "Bình hành";
    return 0;
  }

  // Thoi
  if ((xa - xb) == (xc - xd) && (ya - yb) == (yc - yd) &&
      (xa - xc) * (yd - yb) == (ya - yc) * (xb - xd)) {
    cout << "Thoi";
    return 0;
  }

  // Khác
  cout << "Khác";
  return 0;
}2