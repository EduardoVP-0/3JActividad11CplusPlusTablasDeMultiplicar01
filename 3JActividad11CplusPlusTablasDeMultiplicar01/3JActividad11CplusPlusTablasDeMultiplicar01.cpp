// 3JActividad11CplusPlusTablasDeMultiplicar01.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int NUM, i, RESUL;
	string linea;
	cout << "Digite un numero: "; cin >> linea;
	NUM = stoi(linea);
	i = 1;
	while (i <= 12) {
		RESUL = NUM * i;
		cout << NUM << " * " << i << " = " << RESUL << endl;
		i++;
	}

	system("PAUSE");
	return 0;
}
