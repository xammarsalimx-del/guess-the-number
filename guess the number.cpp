#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string state;
	int guess = 0, num = 0, y = 0;

	while (true) {
		cout << "if you want play with player (one to enter the number & else to guess it) Enter '0' \n if you want to play only (guess the number entered by computer) Enter '1'  " << endl;
		cin >> state;

		if (state == "1") {
			while (true) {
				cout << "Enter the largest possible number (larger than zero) : " << endl;
				cin >> y;
				if (y > 0) {
					break;
				}
				else {
					cout << "Please try again and ";
				}
			}

			srand(time(0));
			num = (rand() % y) + 1;
			system("cls");
			break;
		}
		else if (state == "0") {
			while (true) {
				cout << "Enter the largest possible number (larger than zero) : " << endl;
				cin >> y;
				if (y > 0) {
					break;
				}
				else {
					cout << "Please try again and ";
				}
			}

			cout << "Enter your number : " << endl;
			while (true) {
				cin >> num;
				if (num > y) {
					cout << "the largest possible number : " << y << "\n please enter number smaller than or equal " << y << endl;
				}
				else {
					break;
				}
			}
			system("cls");
			break;
		}
		else {
			cout << "Please enter correct option " << endl;
		}
	}

	vector <int> guess_list;

	while (true) {
		cout << "Enter your guess : " << endl;
		cin >> guess;

		if (count(guess_list.begin(), guess_list.end(), guess) == 0) {
			guess_list.push_back(guess);
		}
		else {
			cout << "you entered this guess before " << endl;
			continue;
		}

		if (guess < num) {
			cout << "try a larger number : " << endl;
		}
		else if (guess > num) {
			cout << "try a smaller number : " << endl;
		}
		else {
			system("cls");
			cout << "your guess is true (after " << guess_list.size() << " times)" << endl;
			break;
		}
	}

	cout << "your previous guesses : " << endl;
	for (int number : guess_list) {
		cout << number << " " << endl;
	}

	return 0;
}