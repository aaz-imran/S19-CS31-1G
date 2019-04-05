//What could possibly go wrong during runtime with the following program?

#include <iostream>
using namespace std;

int main() {
	double numerator, divisor, result;
  
	cout << “Please enter the numerator: ”;
	cin >> numerator;
	cout << “Please enter the divisor: ”;	
	cin >> divisor;
	result = numerator / divisor;
	cout << “The quotient is: ” << result << endl;
  
  return 0;
}
