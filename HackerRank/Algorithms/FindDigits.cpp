#include <iostream>
#include <vector>
#include <cstddef>

using namespace std;

int even_digits(const int number) {
  int even_counter = 0;
  int num_remainder = number;

  while (num_remainder) {
    // extract the first digit
    int digit = num_remainder % 10;

    if (digit != 0 && number % digit == 0) {
      ++even_counter;
    }
    // shift an input number for one digit
    num_remainder /= 10;
  }

  return even_counter;
}

int main() {
  int n;

  cin >> n;

  while (n--) {
    int number;

    cin >> number;
    cout << even_digits(number) << endl;
  }
  return 0;
}
