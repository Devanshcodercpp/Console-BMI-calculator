#include <iostream>
#include <windows.h>
using namespace std;

void NewLine(void) {
	cout << endl;
}

int main(void) {
	double weight;
	float height;
	double BMI;
	int terminate;

	cout << "Welcome to Console BMI calculator: " << endl;
	NewLine();
	cout << "Please enter your weight (in kilograms, you can use a pounds to kilogram converter): ";
	cin >> weight;
	cin.ignore();
	NewLine();
	cout << "Now enter your height (in meters): ";
	cin >> height;

	Sleep(3000);
	system("cls");

	BMI = weight / (height * height);
	cout << "Revialing your BMI: " << endl;
	Sleep(3000);
	system("cls");
	cout << "Your BMI is: " << BMI << endl;

	if (BMI < 18.5) {
		cout << "You are under weight: " << endl;
	}
	else if (BMI > 18.5 && BMI < 22.5) {
		cout << "Your height and weight are perfect: " << endl;
	}
	else {
		cout << "you are Overweight; " << endl;
	}

	cout << "Enter any number to terminate the program; " << endl;
	cin >> terminate;

	if (terminate == 1) {
		return 0;
	}
	else {
		return 0;
	}
	return 0;
}
