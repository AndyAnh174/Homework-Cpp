#include <iostream>
#include <vector>

using namespace std;

const int denominations[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200};

void rutTien(int &soTienTrongTK, int soTienCanRut) {
    vector<int> soLuongTien;

    for (int i = 0; i < sizeof(denominations) / sizeof(denominations[0]); ++i) {
        int soLuong = soTienCanRut / denominations[i];
        soLuongTien.push_back(soLuong);

        soTienCanRut %= denominations[i];
        soTienTrongTK -= soLuong * denominations[i];
    }

    cout << "Số tiền dư trong tài khoản: " << soTienTrongTK << " VND" << endl;

    for (int i = 0; i < soLuongTien.size(); ++i) {
        if (soLuongTien[i] > 0) {
            cout << "Mệnh giá " << denominations[i] << " VND: " << soLuongTien[i] << " tờ" << endl;
        }
    }
}

int main() {
    int soTienTrongTK; 
    cout << "nhap so du tai khoan: ";
    cin >> soTienTrongTK;
    int soTienCanRut;
    cout << "Nhập số tiền cần rút (VND): ";
    cin >> soTienCanRut;

    
    if (soTienCanRut > soTienTrongTK) {
        cout << "Không đủ tiền trong tài khoản." << endl;
    } else {
        rutTien(soTienTrongTK, soTienCanRut);
    }

    return 0;
}

