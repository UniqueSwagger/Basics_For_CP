#include <iostream>
using namespace std;
struct Person {
  string first_name;
  string last_name;
  int age;
  float salary;

  void displayInfo() {
    cout << "first name : " << first_name << endl;
    cout << "last name : " << last_name << endl;
    cout << "age : " << age << endl;
    cout << "salary : " << salary << endl;
  }
};

int main() {
  Person p1;
  cin >> p1.first_name;
  cin >> p1.last_name;
  cin >> p1.age;
  cin >> p1.salary;
  p1.displayInfo();
  return 0;
}