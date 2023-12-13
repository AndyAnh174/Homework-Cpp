#include <bits/stdc++.h>
using namespace std;
void nhap(int a[10000],int n){
	for (int i=0;i<n;i++){
		cout<<"vui long nhap a["<<i<<"] : ";	
		cin>>a[i];
					}
}
void ptulaplai(int a[10000],int n){
	int dem[11000]={0};
	for (int i=0;i<n;i++)
		dem[a[i]]++;
	for (int i=0;i<n;i++){
		if (dem[a[i]]>1)
			cout<<"phan tu lap lai la:"<<a[i]<<endl;}
}
void maxlap (int a[10000], int n)
{
	int dem[11000]={0};
	int MAX,MAX2;   
    MAX=0;
    for (int i=0;i<n;i++){
	dem[a[i]]++;
	if (MAX<dem[a[i]]){
	MAX=dem[a[i]];
	MAX2=a[i];
	}
	}
	cout<<"phan tu lap nhieu nhat la:"<<MAX2<<endl;
}
void maxl(int a[10000], int n){

 int max_length = 1;
  int start_index = 0;
  for (int i = 0; i < n; i++) {
    int current_length = 1;
    for (int j = i + 1; j < n; j++) {
      if (a[j] > a[j - 1]) {
        current_length++;
      } else {
        break;
      }
    }

    if (current_length > max_length) {
      max_length = current_length;
      start_index = i;
    }
  }
  cout << "Doan tang dan dai nhat la: ";
  for (int i = start_index; i < start_index + max_length; i++) {
    cout << a[i] << " ";
  }
}
void summin(int a[10000],int n){

 int min = INT_MAX;
  int start = -1;
  int end = -1;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += a[j];
      if (sum < min) {
        min = sum;
        start = i;
        end = j;
      }
    }
    if (start == -1) {
    cout << "Khong co doan lien tiep nao!" << endl;
  } else {
    cout << "Doan lien tiep co tong nho nhat la: ";
    for (int i = start; i <= end; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }

  }
}
int main ()
{
	int a[10000];
	int n;
	cout<<"vui long nhap so nguyen la:";
	cin>>n;
	nhap(a,n);
	ptulaplai(a,n);
	maxlap(a,n);
	maxl(a,n);
	summin(a,n);
}