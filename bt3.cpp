#include <bits/stdc++.h>
 using namespace std;
 string DaoNguoc(string a) {
    int length = a.length();
    string temp;
    for (int i = length-1; i >=0; i--) {
        temp.push_back(a[i]);
    }
    return temp;
}

int main (void) {
   char a[1000];
cin >> a;
   cout << "Chuoi sau khi dao nguoc la: ";
    cout << DaoNguoc(a) << endl;
   char temp;
 
   int i, j;
    
    
   int size = strlen(a);
 
   for (i = 0; i < size-1; i++) {
      for (j = i+1; j < size; j++) {
         if (a[i] > a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
    

   cout << "so sau sap xep: " << a << endl;
   return 0;
}