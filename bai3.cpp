#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

bool compare(int a, int b) {
    string s1 = to_string(a);
    string s2 = to_string(b);

    return s1 + s2 > s2 + s1;
}


string concatenateLargestNumber(int nums[], int n) {
    
    sort(nums, nums + n, compare);

    string result = "";
    for (int i = 0; i < n; ++i) {
        result += to_string(nums[i]);
    }

    return result;
}

int main() {
   
    int n;
    cout << "nhap so phan tu n: ";
    cin >> n;

    int nums[100]; 
    for (int i = 0; i < n; ++i) {
      cout <<"so thu "<<i+1<<" ";
        cin >> nums[i];
    }


    string result = concatenateLargestNumber(nums, n);
    cout << "so nguyen duong lon nhat: " << result << endl;

    return 0;
}