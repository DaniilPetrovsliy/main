#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algoritmh>
#include <queue>
#include <fstream>
#include <cmath>

int factorial(int x) {
	if (x == 0) {
		return 1;
	}
	else {
		int sum = 1;
		for (int i = 1; i <= x; i++) {
			sum *= (2 * i - 1);
		}
		return sum;
	}
}

int main() {
	double x = 0.05;
	double current = 0;
	double sum = 0;

	while (x <= 1) {
		sum = 0;
		x += 0.05;

		int i = 0;
		current = pow(x, 2 * i);
		while (current > 0.0001) {

			sum += current;
			current = pow(x, 2 * i) / factorial(2 * i - 1);
			i++;
		}
		std::cout << "X: " << x << "; Sum: " << sum << "\n";

