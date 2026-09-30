#include <iostream>
using namespace std ;
int main()
{
	int i;
	cout <<"Enter your guess : " ;
	cin >> i;
		while (true) {
			if (i < 89) {
				cout << "try a larger number : ";
				cin >> i;
			}
			else if (i > 89) {
				cout << "try a smaller number : ";
				cin >> i;
			}
			else  {
				cout << "your guess is true";
				break;
			}
			}
}	
	