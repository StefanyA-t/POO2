#include <iostream>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
};


int main() {
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  Car carObj3;
  carObj3.brand = "Toyota";
  carObj3.model = "Tacoma";
  carObj3.year = 1995;


  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";

  return 0;
}
