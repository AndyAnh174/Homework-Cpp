#include <iostream>
#include <cmath>
#include <string>
int P(int n){
  // tao dang tap sua nha 
  int sum=0;
  for(int i=1;i<=n;i++) {
    sum+=i;
  }
  return sum;
}
int Q(int n){
  int multiply=1;
  for(int i=1;i<=n;i++){
    multiply*=i;
  }
  return multiply;
}
int R(int n){
  int sum_odd=0;
  for(int i=1;i<=n;i++){
    if(i %2 !=0 ){
    sum_odd+=i; }
  }
  return sum_odd;
}
int S(int n){
  int power_of_3 = 0;
  for(int i=1;i<=n;i++){
    power_of_3 += pow(i, 3);
  }
return power_of_3;
}
float T(int n){
  float sum_power_divide =0;
  for(float i=1;i<=n;i++){
    sum_power_divide += i/pow(i, i);
  }
  return sum_power_divide;
}
int U(int n){
  int sum_power = 0;
  for(int i=1;i<=n;i++){
      sum_power += i*(i+1);
  }
return sum_power;
}
int V(int n){
  int extra=0;
  int sum_loop=0;
  for(int i=1;i<=n;i++){
    extra=extra*10 +1;
    sum_loop += extra;
  }
return sum_loop;
}
int X(int n){
  int sum_loop_N=0;
  int extra=0;
  for(int i=1;i<=n;i++){
    extra +=i;
    sum_loop_N+=extra;
    }
   return sum_loop_N;
    
  }


int main(){
  int n;
  std::cin>>n;
  if(n>1) {
    std::cout<<P(n) <<"\n";
    std::cout<<Q(n) <<"\n";
    std::cout<<R(n) <<"\n";
    std::cout<<S(n) <<"\n";
    std::cout<<T(n) <<"\n";
    std::cout<<U(n) <<"\n";
    std::cout<<V(n) <<"\n";
    std::cout<<X(n) <<"\n";
  }
  else {
    int j=0;
    std::cout<<j;

  }
return 0;
}

