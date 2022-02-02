#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>
#include "kontakt.hpp";
#include "menu_restauracji.hpp";
#include "panel_glowny.hpp";

using namespace std;

const short int rozmiarX = 120;					// do ustawienia szerokości okna


int main()
{
	
	setlocale(LC_ALL, ""); // znaki PL

	/******************** USTAWIANIE ROZMIARU OKNA ********************/
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); // uchwyt standardowego wyjścia
	COORD c2; // struktura potrzebna do ustawienia rozmiarów bufora pamięci
	c2.X = rozmiarX; // szerokość na 120 szerokości znaków
	//c2.Y = 30; // wysokość na 40 wysokości znaków (usuwa suwak)
	SetConsoleScreenBufferSize(handle, c2); // ustawia rozmiar bufora (wyświetlanego tekstu)

	SMALL_RECT sr; // struktura wykorzystywana do ustawienia rozmiaru okna
	sr.Left = 0; // na zero
	sr.Top = 0; // na zero
	sr.Right = c2.X - 1; // szerokość o 1 mniejsza od bufora
	//sr.Bottom = c2.Y - 1; // wysokość o 1 mniejsza od bufora (usuwa suwak)
	SetConsoleWindowInfo(handle, true, &sr); // ustawia rozmiar okna (jednostka to szerokość i wysokość pojedynczego znaku)
	/******************************************************************/	
	
	//menu_aplikacji();
	naglowek_restauracji();
	string tmp_string;
	tmp_string = "ZŁÓŻ ZAMÓWIENIE";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), 8);
	cout << tmp_string << endl << endl;

	string imie_nazwisko_klienta;
	short int nrZamowienia = 1;
	string lokalizacja;	// "na miejscu" / "na wynos"
	short int nrStolika;
	string adres;

	cout << "Nr zamówienia: " << nrZamowienia << endl;

	cout << "Imię i nazwisko: ";
	getline(cin, imie_nazwisko_klienta);

	cout << "Zamówienie będzie realizowane\n"
			"  1. na miejscu\n"
			"  2. na wynos\n";
	cout << "Opcja: _\b";
	char tmp_lokalizacja;
	do {
		tmp_lokalizacja = _getch();
	} while (tmp_lokalizacja != '1' and tmp_lokalizacja != '2');
	switch (tmp_lokalizacja)
	{
		case '1':
			lokalizacja = "na miejscu";
			cout << lokalizacja << endl;
			do {
				cout << "Nr stolika (1-23): ";
				cin >> nrStolika;
			} while (nrStolika < 1 or nrStolika > 23);

			break;
		case '2':
			lokalizacja = "na wynos";
			cout << lokalizacja << endl;

			cout << "Obejmujemy dostawę i zamówienia, tylko w powiecie poznańskim - zamówienia spoza tego obszaru nie będą realizowane." << endl;
			cout << "Adres dostawy: " << endl;
			getline(cin, adres);
			// czas dostawy
			break;
	}
	system("cls");
	naglowek_restauracji();

	return 0;
}
