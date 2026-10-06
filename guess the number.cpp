#include <iostream>
using namespace std;
int main()
{
	int guess, num, tryer = 0;
	cout << "Enter your number : " << endl;
	cin >> num;
	system("cls");
	cout << "Enter your guess : " << endl;
	cin >> guess;
	tryer++;
	while (true) {
		if (guess < num) {
			cout << "try a larger number : " << endl;
			cin >> guess;
			tryer++;
		}
		else if (guess > num) {
			cout << "try a smaller number : " << endl;
			cin >> guess;
			tryer++;
		}
		else {
			cout << "your guess is true (after " << tryer << " times) " << endl;
			break;
		}
	}
}