#include <iostream>

using namespace std

//pointers
int *num = new int(5); //pointer to memory cell  number
int *nums = new int[5]; //pointer to memory cell  array

//links
const int number = 12;

int& link = *num;
const int& link2 = number;

//how to use

int val = 12;

void func(int& val) {
	val += 1;
}

int main() {
	cout << "Before: " << val << endl;
	int& r_val = val;
	func(r_val);
	cout << "After: " << val;
}