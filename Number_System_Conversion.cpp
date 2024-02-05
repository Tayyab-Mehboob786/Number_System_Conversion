#include<iostream>
#include<string>
using namespace std;
//Deciaml to Binary Convertor
void decimal_binary()
{
	int decimal;
	cout << "Enter a Decimal Number :";
	cin >> decimal;
	int binary[32];
	int index = 0;
	if (decimal == 0)
	{
		cout << "Invalid Input " << endl;
	}
	else
	{
		while (decimal > 0)
		{
			binary[index] = decimal % 2;
			decimal = decimal / 2;
			index++;
		}
		cout << "Binary representation: ";
		for (int i = index - 1; i >= 0; i--) {
			cout << binary[i];
		}
		cout << endl;
	}
}
//Deciaml to Octal Convertor
void decimal_octal()
{
	int decimal;
	cout << "Enter a Decimal Number :";
	cin >> decimal;
	int octal[32];
	int index = 0;
	if (decimal == 0)
	{
		cout << "Invalid Input " << endl;
	}
	else
	{
		while (decimal > 0)
		{
			octal[index] = decimal % 8;
			decimal = decimal / 8;
			index++;
		}
		cout << "Octal representation: ";
		for (int i = index - 1; i >= 0; i--) {
			cout << octal[i];
		}
		cout << endl;
	}
}
//Deciaml to Hexadecimal Convertor
void decimal_hexadecimal() {
	string hexadecimal = "";
	int decimal;
	cout << "Enter a Decimal Number :";
	cin >> decimal;

	while (decimal > 0) {
		int remainder = decimal % 16;
		if (remainder < 10) {
			hexadecimal = char('0' + remainder) + hexadecimal;
		}
		else {
			hexadecimal = char('A' + remainder - 10) + hexadecimal;
		}
		decimal = decimal / 16;
	}

	cout << "Hexadecimal representation: " << hexadecimal << endl;
}
//Binary to Decimal Convertor
void binary_decimal()
{
	int decimal = 0, base = 1;
	int binary;
	cout << "Enter a binary number: ";
	cin >> binary;
	while (binary > 0) {
		int lastDigit = binary % 10;
		decimal += lastDigit * base;
		base *= 2;
		binary /= 10;
	}
	cout << "Decimal representation: " << decimal << endl;

}
//Binary to Octal Convertor
void binary_octal()
{
	int decimal=0;
	int octal[32];
	int index = 0;
	int base = 1;
	int binary;
	cout << "Enter a binary number: ";
	cin >> binary;
	while (binary > 0) {
		int lastDigit = binary % 10;
		decimal += lastDigit * base;
		base *= 2;
		binary /= 10;
	}
	while (decimal > 0)
	{
		octal[index] = decimal % 8;
		decimal = decimal / 8;
		index++;
	}
	cout << "Octal representation: ";
	for (int i = index - 1; i >= 0; i--) {
		cout << octal[i];
	}
	cout << endl;
}
//Binary to Hexadecimal Convertor
void binary_hexadecimal()
{
	int decimal = 0, base = 1;
	string hexadecimal = "";
	int binary;
	cout << "Enter a binary number: ";
	cin >> binary;
	while (binary > 0) {
		int lastDigit = binary % 10;
		decimal += lastDigit * base;
		base *= 2;
		binary /= 10;
	}
	while (decimal > 0) {
		int remainder = decimal % 16;
		if (remainder < 10) {
			hexadecimal = char('0' + remainder) + hexadecimal;
		}
		else {
			hexadecimal = char('A' + remainder - 10) + hexadecimal;
		}
		decimal = decimal / 16;
	}

	cout << "Hexadecimal representation: " << hexadecimal << endl;
}
//Octal to Decimal Convertor
void octal_decimal()
{
	int decimal = 0, base = 1;
	int octal;
	cout << "Enter a Octal number: ";
	cin >> octal;
	while (octal > 0) {
		int lastDigit = octal % 10;
		decimal += lastDigit * base;
		base *= 8;
		octal /= 10;
	}
	cout << "Decimal representation: " << decimal << endl;
}
//Octal to Binary Convertor
void octal_binary()
{

	int decimal = 0, base = 1;
	int octal;
	int binary[32];
	int index = 0;
	cout << "Enter a Octal number: ";
	cin >> octal;
	while (octal > 0) {
		int lastDigit = octal % 10;
		decimal += lastDigit * base;
		base *= 8;
		octal /= 10;
	}
	while (decimal > 0)
	{
		binary[index] = decimal % 2;
		decimal = decimal / 2;
		index++;
	}
	cout << "Binary representation: ";
	for (int i = index - 1; i >= 0; i--) {
		cout << binary[i];
	}
	cout << endl;
}
//Octal to Hexadecimal Convertor
void octal_hexadecimal()
{
	string hexadecimal = "";
	int decimal = 0, base = 1;
	int octal;
	cout << "Enter a Octal number: ";
	cin >> octal;
	while (octal > 0) {
		int lastDigit = octal % 10;
		decimal += lastDigit * base;
		base *= 8;
		octal /= 10;
	}
	while (decimal > 0) {
		int remainder = decimal % 16;
		if (remainder < 10) {
			hexadecimal = char('0' + remainder) + hexadecimal;
		}
		else {
			hexadecimal = char('A' + remainder - 10) + hexadecimal;
		}
		decimal = decimal / 16;
	}
	cout << "Hexadecimal representation: " << hexadecimal << endl;
}
//Hexadecimal to Decimal Convertor
void hexadecimal_decimal() {
	int decimal = 0;
	int base = 1;
	string hexadecimal;
	cout << "Enter a hexadecimal number: ";
	cin >> hexadecimal;
	int length = hexadecimal.length();
	for (int i = length - 1; i >= 0; i--) {
		if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
			decimal += (hexadecimal[i] - '0') * base;
		}
		else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
			decimal += (hexadecimal[i] - 'A' + 10) * base;
		}
		else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
			decimal += (hexadecimal[i] - 'a' + 10) * base;
		}
		base *= 16;
	}
	cout << "Decimal representation: " << decimal << endl;
}
//Hexadecimal to Binary Convertor
void hexadecimal_binary()
{
	int decimal = 0;
	int base = 1;
	int binary[40];
	int index = 0;
	int octal[32];
	string hexadecimal;
	cout << "Enter a hexadecimal number: ";
	cin >> hexadecimal;
	int length = hexadecimal.length();
	for (int i = length - 1; i >= 0; i--) {
		if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
			decimal += (hexadecimal[i] - '0') * base;
		}
		else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
			decimal += (hexadecimal[i] - 'A' + 10) * base;
		}
		else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
			decimal += (hexadecimal[i] - 'a' + 10) * base;
		}
		base *= 16;
	}
	while (decimal > 0)
	{
		binary[index] = decimal % 2;
		decimal = decimal / 2;
		index++;
	}
	cout << "Binary representation: ";
	for (int i = index - 1; i >= 0; i--) {
		cout << binary[i];
	}
	cout << endl;
}
int main()
{
	int opt;
	char x;
	cout << "***************CONVERSION MENUE***************" << endl;     //Creating a Menu for Number system conversion
	
	do
	{
		cout << "{" << endl;
		cout << "\tWhich Conversion do you want to do?" << endl;
		cout << endl;
		cout << "\tPress 1 for Decimal to Binary Conversion" << endl;
		cout << "\tPress 2 for Decimal to Octal Conversion" << endl;
		cout << "\tPress 3 for Decimal to Hexadecimal Conversion" << endl;
		cout << "\tPress 4 for Binary to Decimal Conversion" << endl;
		cout << "\tPress 5 for Binary to Octal Conversion" << endl;
		cout << "\tPress 6 for Binary to Hexadecimal Conversion" << endl;
		cout << "\tPress 7 for Octal to Decimal Conversion" << endl;
		cout << "\tPress 8 for Octal to Binary Conversion" << endl;
		cout << "\tPress 9 for Octal to Hexadecimal Conversion" << endl;
		cout << "\tPress 10 for Hexadecimal to Decimal Conversion" << endl;
		cout << "\tPress 11 for Hexadecimal to Binary Conversion" << endl;
		cout << "}" << endl;
		cout << "INPUT :";
		cin >> opt;
		if (opt == 1) {
			cout << "\t*********Decimal to Binary Conversion*********" << endl;
			decimal_binary();
		}
		else if (opt == 2)
		{
			cout << "\t*********Decimal to Octal Conversion*********" << endl;
			decimal_octal();
		}
		else if (opt == 3)
		{
			cout << "\t*********Decimal to Hexadecimal Conversion*********" << endl;
			decimal_hexadecimal();
		}
		else if (opt == 4)
		{
			cout << "\t*********Binary to Decimal Conversion*********" << endl;
			binary_decimal();
		}
		else if (opt == 5)
		{
			cout << "\t*********Binary to Octal Conversion*********" << endl;
			binary_octal();
		}
		else if (opt == 6)
		{
			cout << "\t*********Binary to Hexadecimal Conversion*********" << endl;
			binary_hexadecimal();
		}
		else if (opt == 7)
		{
			cout << "\t*********Octal to Decimal Conversion*********" << endl;
			octal_decimal();
		}
		else if (opt == 8)
		{
			cout << "\t*********Octal to Binary Conversion*********" << endl;
			octal_binary();
		}
		else if (opt == 9)
		{
			cout << "\t*********Octal to Hexadecimal Conversion*********" << endl;
			octal_hexadecimal();
		}
		else if (opt == 10)
		{
			cout << "\t*********Hexadecimal to Decimal Conversion*********" << endl;
			hexadecimal_decimal();
		}
		else if (opt == 11)
		{
			cout << "\t*********Hexadecimal to Binary Conversion*********" << endl;
			hexadecimal_binary();
			

		}
		else
		{
			cout << "Invalid Input" << endl;
		}
		cout << "Do you want to do another Conversion?(Y/N) :";          //If User want to perform another Conversion;
		cin >> x;
	} while (x == 'y' || x == 'Y');
}
