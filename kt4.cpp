#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int n;

    // Nhập số điểm
    cout << "Nhap so diem: ";
    cin >> n;

    // Kiểm tra điều kiện
    if (n <= 0) {
        cout << "So diem khong hop le.\n";
        return 1;
    }

    // Khai báo mảng điểm
    vector<Point> points(n);

    // Nhập tọa độ cho từng điểm
    for (int i = 0; i < n; ++i) {
        cout << "A" << i + 1 << " (x y): ";
        cin >> points[i].x >> points[i].y;
    }

    // Tìm tọa độ trùng nhau nhiều nhất
    map<pair<int, int>, int> pointCount;
    for (const auto& point : points) {
        pointCount[{point.x, point.y}]++;
    }

    int maxCount = 0;

    cout << "Cac toa do trung nhau nhieu nhat la:\n";
    for (const auto& entry : pointCount) {
        if (entry.second == maxCount) {
            cout << "(" << entry.first.first << ", " << entry.first.second << ") ";
        } else if (entry.second > maxCount) {
            maxCount = entry.second;
            cout << "Toa do trung nhau nhieu nhat la: (" << entry.first.first << ", " << entry.first.second << ") ";
        }
    }

    if (maxCount <= 1) {
        cout << "\nKhong co diem trung nhau nhieu nhat.\n";
    } else {
        cout << "voi so lan xuat hien la " << maxCount << ".\n";
    }

    // Đếm số đoạn thẳng song song với trục OX và các điểm phân biệt
    map<int, int> xCount;
    for (const auto& point : points) {
        xCount[point.x]++;
    }

    int parallelLinesOX = 0;
    for (const auto& entry : xCount) {
        int occurrences = entry.second;
        if (occurrences > 1) {
            parallelLinesOX += occurrences * (occurrences - 1) / 2;
        }
    }

    if (parallelLinesOX > 0) {
        cout << "So luong doan thang song song voi truc OX la: " << parallelLinesOX << endl;
    } else {
        cout << "Khong co doan thang song song voi truc OX.\n";
    }

    // Đếm số đoạn thẳng song song với trục OY và các điểm trùng nhau
    map<int, int> yCount;
    for (const auto& point : points) {
        yCount[point.y]++;
    }

    int parallelLinesOY = 0;
    for (const auto& entry : yCount) {
        int occurrences = entry.second;
        if (occurrences > 1) {
            parallelLinesOY += occurrences * (occurrences - 1) / 2;
        }
    }

    if (parallelLinesOY > 0) {
        cout << "So luong doan thang song song voi truc OY la: " << parallelLinesOY << endl;
    } else {
        cout << "Khong co doan thang song song voi truc OY.\n";
    }

    return 0;
}
