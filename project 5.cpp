// project 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double nilai;
	cout << "===program penentuan nilai===" << endl;
	cout << "masukan nilai angka :";
	cin >> nilai;

	cout << "\nHASIL:" << endl;

	if (nilai > 89)
	{
		cout << "nilai mutu:A" << endl;
		cout << "Keterangan : naik kelas" << endl;

	}
	else if (nilai > 80 && nilai <= 89)
	{
		cout << "nilai mutu : B " << endl;
		cout << "Keterangan : naik kelas " << endl;

	}
	else if (nilai > 70 && nilai <= 80)
	{
		cout << "nilai mutu : C " << endl;
		cout << "Keterangan : tidak naik" << endl;
	}
	else if (nilai > 60 && nilai <= 70)
	{
		cout << "nilai mutu : D" << endl;
		cout << "Keterangan : tidak naik" << endl;
	}
	else if (nilai <= 60)
	{
		cout << "niali mutu : E" << endl;
		cout << "Keterangan : tidak naik" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
