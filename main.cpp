#include <iostream>
using namespace std;

void doubleX(int &x);

int main() {
  int x=100;
  cout<<"\nx= "<<x;

  doubleX(x);
  cout<<"\nx= "<<x;
  
}

void doubleX(int &x){
  x=2*x;
}