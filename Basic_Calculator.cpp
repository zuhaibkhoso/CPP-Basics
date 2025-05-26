#include <iostream>
#include <string>
using namespace std;

int main() {

	float x, y, result;
	string input;
	
	while(true){

		cout << "What do you want to perform?\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\npress 'Q' to quit\n\nEnter Option: ";
		cin >> input;
		
		
		if (input == "1"){
			
			cout << "Enter 1st Number: ";
			cin >> x;
		
			cout << "Enter 2nd Number: ";
			cin >> y;
		
			result = x + y;
		
			cout << "\nFinal Output: " << result << "\n" << endl;
		}
		
			if (input == "2"){
			
			cout << "Enter 1st Number: ";
			cin >> x;
		
			cout << "Enter 2nd Number: ";
			cin >> y;
		
			result = x - y;
		
			cout << "\nFinal Output: " << result << "\n" << endl;
		}
		
			if (input == "3"){
			
			cout << "Enter 1st Number: ";
			cin >> x;
		
			cout << "Enter 2nd Number: ";
			cin >> y;
		
			result = x * y;
		
			cout << "\nFinal Output: " << result << "\n" << endl;
		}
		
			if (input == "4"){
			
			cout << "Enter 1st Number: ";
			cin >> x;
		
			cout << "Enter 2nd Number: ";
			cin >> y;
		
			result = x / y;
		
			cout << "\nFinal Output: " << result << "\n" << endl;
		}
		
		if (input == "Q"){
			
			return 0;
		}
	}
}
