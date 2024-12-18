#include <iostream>
using namespace std;
#include <set>

int main() {
  // Create a set called cars that will store strings
  set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cars.insert("alto");


  // Print set elements
  for (string car : cars) {
    cout << car << "\t";
  }
  cout<< cars.size();

  cars.erase("BMW");
  for (auto it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";}

  return 0;
}

