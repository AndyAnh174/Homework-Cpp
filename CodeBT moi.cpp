#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
//tim tong
int tongpt(int a[], int n) {
  int so_dai_xa = a[0];
  int so_end_max = a[0];

  for (int i = 1; i < n; i++) {
    so_end_max = max(a[i], so_end_max + a[i]);
    so_dai_xa = max(so_dai_xa, so_end_max);
  }

  return so_dai_xa;
}
//tom so lon 2
int sl2(int a,int b[]) {
int max = 0, max2=0;
          for(int i = 0; i < a; i++){
		if(max < b[i])
		{
			max = b[i];	
		}			
	}
	// Gan gia tri lon nhat cua mang cho max
	for(int i = 0; i < a; i++){
		if(max == b[i])
		{
			continue;
		}	
		else if(max2 < b[i]){
			max2 = b[i];
		}		
	}
        // Gan gia tri lon hai cua mang cho max2
	cout << "so lon 2 la: " << max2 << endl;
          return max2;
}
//so phan tu lien tiep dai nhat
int ptlientuc(int a[1000], int b){
int so_i=0;
int so_len=1;
          for(int i=0; i<b;i++) {
                    int j=i;
                    int len=1;
                    while(j<b && a[j]<=a[j+1]){
                              j++;
                              len++;
                    }
                    if(len>so_len){
                              so_len = len;
                              so_i= i;
                    }
                    
          }
return so_len;
}


int main() {
  int n;
  cout << "Nhập số lượng phần tử của mảng: ";
  cin >> n;

  int phantu[n];
  for (int i = 0; i < n; i++) {
    cout << "Nhập phần tử thứ " << i + 1 << ": ";
    cin >> phantu[i];
  }

  int so_nho_nhat = phantu[0];
  int so_lon_nhat = phantu[0];
  int thu2_so_lon_nhat = phantu[0];

  for (int i = 1; i < n; i++) {
    if (phantu[i] < so_nho_nhat) {
      so_nho_nhat = phantu[i];
    }
    if (phantu[i] > so_lon_nhat) {
      so_lon_nhat = phantu[i];
    } else if (phantu[i] > thu2_so_lon_nhat) {
      thu2_so_lon_nhat = phantu[i];
    }
  }

  for (int i = 0; i < n; i++) {
    bool so_chuan = true;
    for (int j = 2; j * j <= phantu[i]; j++) {
      if (phantu[i] % j == 0) {
        so_chuan = false;
        break;
      }
    }
    if (so_chuan) {
      cout<< phantu[i] << " ";
    }
  }

     cout<< "la cac so nguyen to\n";    
  for (int i = 0; i < n; i++) {
    if (sqrt(phantu[i]) == int(sqrt(phantu[i]))) {
      cout << phantu[i] << " ";
    }
  }
  cout << "la cac so chinh phuong\n";

//tong
int t = tongpt(phantu, n);
  cout << "tong cac phan tu day lien tiep: " << t <<"\n" ;
  cout << "so lon nhat: " << so_lon_nhat<< "\n" ;
  cout << "so nho nhat: " << so_nho_nhat << "\n" ;

//so lon 2
sl2(n, phantu);
cout << "phan tu lien tuc lon nhat la: " << ptlientuc(phantu, n);
//soft code test

return 0;
}



  
