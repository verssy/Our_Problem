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
  vector<char> data;

  string path = "myfile.txt";

  ifstream fin;
  fin.open(path);

  if (!fin.is_open()) {
    cout << "Could not open file.\n";
  } else {
    cout << "File opened successfully.\n";
    char ch;
    // Input Validation

    cout << "Your data:\n";
    while (fin.get(ch)) {
      cout << ch;
      data.push_back(ch);
    }

    // Data release

    fin.close();

    return;
  }

  int main() { return 0; }
