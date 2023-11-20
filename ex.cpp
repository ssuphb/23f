#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char ch;

	cout << "Enter a character: ";
	cin.get(ch);

	cout << "Character entered: " << ch << endl;

	cin.putback(ch);

	cout << "Character read agagin: " << static_cast<char>(cin.get()) << endl;

	return 0;
}
