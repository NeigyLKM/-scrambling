#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	

	int _byte[120];

	/*for (int i = 0; i < 120; i++) {
		_byte[i] = 0;
	}*/

	for (int i = 0; i < 120; i++) {
		cin >> _byte[i];
	}

	for (int i = 3; i < 5; i++)
	{
		_byte[i] = _byte[i] + _byte[i - 3];
		if (_byte[i] > 1) {
			_byte[i] = 0;
		}
		else if (_byte[i] == 1) {
			_byte[i] = 1;
		}
		else {
			_byte[i] = 0;
		}
	}

	for (int i = 5; i < 120; i++) {
		_byte[i] = _byte[i] + _byte[i - 3]; 

		if (_byte[i] > 1) {
			_byte[i] = 0;
		}
		else if (_byte[i] == 1) {
			_byte[i] = 1;
		}
		else {
			_byte[i] = 0;
		}

		//прибавляем A(i-5)
		_byte[i] += _byte[i - 5];

		if (_byte[i] > 1) {
			_byte[i] = 0;
		}
		else if (_byte[i] == 1) {
			_byte[i] = 1;
		}
		else {
			_byte[i] = 0;
		}
	}

	for (int i = 0; i < 120; i++) 
	{
		if ((i + 1) % 4 == 0) {
			cout << " ";
		}
		cout << _byte[i];
		if (i == 119) {
			cout << endl;
		}
	}

	system("PAUSE");



	/*for (int i = 0; i < 112; i++) {
		cin >> a[i];
	}*/

	//обработка
	//первые три без изменений
	
	//4 и 5 меняются вот так
	/*for (int i = 3; i < 5; i++) {
		a[i] = a[i] + a[i - 3];
		if (a[i] > 1) {
			a[i] = 0;
		}
		else if(a[i] == 1) {
			a[i] = 1;
		}
		else {
			a[i] = 0;
		}
	}*/

	//оставшиеся так
	/*for (int i = 5; i < 112; i++) {
		a[i] = a[i] + a[i - 3]; /*+ a[i - 5];
		
		if (a[i] > 1) {
			a[i] = 0;
		}
		else if (a[i] == 1) {
			a[i] = 1;
		}
		else {
			a[i] = 0;
		}*/

		//прибавляем A(i-5)
		/*a[i] += a[i - 5];

		if (a[i] > 1) {
			a[i] = 0;
		}
		else if (a[i] == 1) {
			a[i] = 1;
		}
		else {
			a[i] = 0;
		}*/

		/*if (a[i] > 1) {

		}*/
	//}

	//выводим
	/*for (int i = 0; i < 112; i++) {
		if ((i + 1) % 4 == 0) {
			cout << " ";
		}
		cout << a[i];
	}*/
	

	return 0;
}