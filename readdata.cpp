// Connecting libraries and other utilities

#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function for reading data

void read() {
  string path = "myfile.txt";

  ifstream finp;
  finp.open(path);

  if (!finp.is_open()) {
    cout << "Could not open file.\n";
  } else {
    cout << "File opened successfully.\n";
    char ch;
    // Input Validation

    cout << "Your data:\n";
    while (fin.get(ch)) {
      cout << ch;
    }

    // Data release

    finp.close();

    return;
  }


int main() 
{ 
  return 0; 
}
