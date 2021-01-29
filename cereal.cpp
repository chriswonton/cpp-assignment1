#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  cout << "enter cereal weight (in ounces): "; // user prompted
  double weight;
  cin >> weight; // user's weight input
  double mTon = 35273.92; // 1 metric ton
  double cerealBox = 17.637 / mTon;
  // assuming avg cereal box weight in ounces is 17.637
  // convert to metric tons
  double mWeight = weight / mTon; // user's input weight in metric tons

  cout << "weight in metric tons: " << mWeight << endl; // prints weight
  cout << "boxes needed: " << mWeight / cerealBox << endl; // prints boxes needed
  return 0;
}
