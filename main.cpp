#include <iostream>

using namespace std;

bool is_divisible(int a) {
	int sumOfDigits = 0, temp = a;
	while(temp >= 1) {
		sumOfDigits += temp%10;
		temp=temp/10;
	}
	return (a % sumOfDigits == 0);
}

int main() {
	cout<<is_divisible(171);
	return 0;
}
