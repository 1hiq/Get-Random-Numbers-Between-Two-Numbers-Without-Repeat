#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int arraySum(int arr[], int lenght) {
	int sum = 0;
	for (int i = 0; i < lenght; i++) {
		sum += arr[i];
	}
	return sum;
}

bool checkIfThatNumberExistingInTheNumbersWhichIsBeforeIt(int num, int arr[], int arrLenght) {
	int j = 0;
	for (int i = 0; i < arrLenght; i++) {
		if (num != arr[i]) {
			j++;
		}
	}

	if (j == arrLenght) {
		return 1;
	}
	else {
		return 0;
	}
}

int getSumBetweenTwoNums(int start, int end) {
	int sum = 0;
	for (int i = start; i <= end; i++) {
		sum += i;
	}
	return sum;
}


int main(void) {
	

	int randomNums[100];
	srand(time(0));

	int start, end;
	cout << "Please enter the first number: ";
	cin >> start;
	cout << "Please enter the last number: ";
	cin >> end;

	for (int i = 0; arraySum(randomNums, 100) != getSumBetweenTwoNums(start, end); i++) {
		if (i == 0) {
			randomNums[i] = start + rand() % (end - start + 1);
			cout << randomNums[i] << endl;
		}
		else {
			int randomNum = start + rand() % (end - start + 1);
			if (checkIfThatNumberExistingInTheNumbersWhichIsBeforeIt(randomNum, randomNums, i) == 1) {
				randomNums[i] = randomNum;
				cout << randomNums[i] << endl;
			}
		}
	}


	return 0;
}
