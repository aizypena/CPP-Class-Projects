//formative assessment number 1.1
/*
INSTRICTION:
The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the 
user to input two integer vales for the calculation
*/

#include <iostream>
#include <iomanip>

using namespace std;

void menu() {
	cout << "========================================" << endl;
	cout << setw(22) << "MENU" << endl;
	cout << "========================================" << endl << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;
}

int main() {
	int choice, num1, num2;
	char repeat;
	
	menu();
	
	do {
		cout << "Enter your choice (1-5): ";
		cin >> choice;
		cout << "Enter your two integer numbers: ";
		cin >> num1 >> num2;
		
		switch(choice) {
			case 1:
				cout << "Result: " << num1 + num2 << endl;
				break;
			case 2:
				cout << "Result: " << num1 - num2 << endl;
				break;
			case 3:
				cout << "Result: " << num1 * num2 << endl;
				break;
			case 4:
				cout << "Result: " << num1 / num2 << endl;
				break;
			case 5:
				cout << "Result: " << num1 % num2 << endl;
				break;
		}
		
		cout << "Pres y or Y to continue: ";
		cin >> repeat;
	} while(repeat == 'y' || repeat == 'Y');
	return 0;
}
