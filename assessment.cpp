#include<iostream>
using namespace std;

int main() {

	// MIDLSKD --------------------------------
	cout << "-----------------------------------------" << endl;
	cout << "mild:" << endl;
	cout << endl;
	for (int i = 50; i <= 70; i += 2) {
		cout << i << " ";
	}

	cout << endl;
	for (int x = 100; x >= 50; x -= 5) {
		cout << x << " ";
	}

	cout << endl;
	for (int j = 2; j <= 2048; j *= 2) {
		cout << j << " ";
	}

	// MEDUIIUMMMMM ------------------------------
	cout << endl;
	cout << "---------------------------------------------" << endl;
	cout << "medium:" << endl;
	cout << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 6; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
	for (int x = 0; x < 5; x++) {
		for (int x = 1; x <= 4; x++) {
			cout << x << " ";
		}
		cout << endl;
	}

	//SPICYYCYY -------------------------
	cout << "-------------------------------------------" << endl;
	cout << "spicy:" << endl;
	cout << endl;
	int num[8];
	for (int i = 0; i < 8; i++) {
		num[i] = rand() % 20;
	}

	for (int i = 0; i < 8; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	int largest = num[0];
	for (int i = 0; i < 8; i++) {
		if (num[i] > largest) {
			largest = num[i];
		}
	}
	cout << "the lasrgewsts numebr is: " << largest << endl;
	int smallest = num[0];
	for (int i = 0; i < 8; i++) {
		if (num[i] < smallest) {
			smallest = num[i];
		}
	}
	cout << "the smalles t numer isL:" << smallest << endl;
	int range = largest - smallest;
	cout << "range fo tnumbers is: " << range << endl;
	float sum = 0;
	for (int i = 0; i < 8; i++) {
		sum += num[i];
	}
	float average = sum /= 8;
	cout << "the avergabgfe of the arreay is: " << average << endl;
}

