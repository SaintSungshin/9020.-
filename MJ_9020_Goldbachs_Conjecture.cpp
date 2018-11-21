#include <iostream>
using namespace std;

bool prime(int a);
void partition(int num);

int main() {

	int row;
	cin >> row;
	int* p = new int[row];
	cout << "Enter " << row << " even numbers (4 - 10000): ";
	
	//제한 명령 필요
	
	for (int i = 0; i < row; i++) {
		cin >> p[i];
		partition(p[i]);
	}
	system("pause");
	return 0;
}

bool prime(int a) {
	int count = 0;
	for (int j = 2; j <= a; j++) {
		if (a % j == 0)
			count++;
	}
	if (count == 1)
		return true;
	else
		return false;
}

void partition(int num) {
	int part;
	for (int k = 2; k <= (num / 2); k++) {
		if (prime(k) && prime(num - k))
			part = k;
	}
	cout << part << " " << num - part << endl;
}