#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>
#include "header.hpp";

using namespace std;

const short int rozmiarX = 120;					// do ustawienia szerokości okna

/******************************     LISTA DAŃ     ******************************/
// string typ_dania [liczba_dań][liczba_parametrów_danego_dania]	

	const short int lParametrowDania = 2;	 // nazwa, cena
	
	const short int lPrzystawek = 5;		// liczba dostępnych przystawek
    string przystawki[lPrzystawek][lParametrowDania] = {
		"Tortilla Rolls (150g)", "21.99",
		"Krazki Cebulowe (9szt)", "18.99",
		"Salsa Nachos (150g)", "15.99",
		"Nachos Ser (150g)", "16.99",
		"Frytki (100g)", " 9.99"
	};

	const short int lZup = 2;
	string zupy[lZup][lParametrowDania] = {
		"Carpacio (200ml)","23.99",
		"Krem z kukurydzy (200ml) ", "17.99"
	};

	const short int lDGlownych = 6;
	string dglowne[lDGlownych][lParametrowDania] = {
		"Quesadilla z kurczakiem (1szt)", "34.99",
		"Enchiladas z kurczakiem (3szt)", "40.99",
		"Enchiladas z wolowina (3szt)", "47.99",
		"Grillowana piers z kurczaka z sosoem salsa mojito 180g)", "38.99",
		"Tacos z kurczakiem (3 szt)", "35.99",
		"Tacos z rostbefem (3szt)", "40.99"
	};

	const short int lDeserow = 3;
	string desery[3][lParametrowDania] = {
		"Brownie (150g) ", "20.99",
		"Cremme Bruelle (100g) ", "18.99",
		"Sernik Mango (120g) ", "22.99"
	};

	const short int lNapojow = 7;
	string napoje[lNapojow][lParametrowDania] = {
		"Herbata ", "8.99",
		"Caffe Latte ", "10.99",
		"Americano ", "9.99",
		"Coca-Cola ", "7.99",
		"7up ", "7.99",
		"Mirinda ", "7.99",
		"Woda ", "6.99"
	};
/*******************************************************************************/

	int E;






void wyswietl_liste_dania(const short int lDanychDan, char typ_dania)
{
	
	for (short int i = 0; i < lDanychDan; i++) {
		for (short int j = 0; j < lParametrowDania; j++) {
			if (typ_dania == 'p') cout << przystawki[i][j] << "  ";
			else if (typ_dania == 'z') cout << zupy[i][j] << "  ";
			else if (typ_dania == 'g') cout << dglowne[i][j] << "  ";
			else if (typ_dania == 'd') cout << desery[i][j] << "  ";
			else if (typ_dania == 'n') cout << napoje[i][j] << "  ";
			if (j == 1) cout << "\b\bzl";
		}
		cout << endl;
	}
	cout << "*************************************" << endl;
	cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
	cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
}

	//

void menu_restaurant()//Maciej Witkowski
{
	cout << "************************************" << endl;
	cout << "*         MENU RESTAURACJI         *" << endl;
	cout << "* 1. Przystawki                    *" << endl;
	cout << "* 2. Zupy                          *" << endl;
	cout << "* 3. Dania główne                  *" << endl;
	cout << "* 4. Desery                        *" << endl;
	cout << "* 5. Napoje                        *" << endl;
	cout << "************************************" << endl;
	cout << "Podaj którą kartę chcesz obejrzeć" << endl;
	cin >> E;

	while (true)
	{
		switch (E)
		{
		case 1:
			cout << "*************************************" << endl;
			cout << "*           1.Przystawki            *" << endl;
			wyswietl_liste_dania(lPrzystawek, 'p');
			cin >> E;
			system("cls");
			break;

		case 2:
			cout << "***************************************" << endl;
			cout << "*                2.Zupy               *" << endl;
			wyswietl_liste_dania(lZup, 'z');
			cin >> E;
			system("cls");
			break;

		case 3:
			cout << "**********************************************************************" << endl;
			cout << "*                             3.Dania głowne                         *" << endl;
			wyswietl_liste_dania(lPrzystawek, 'g');
			cin >> E;
			system("cls");
			break;

		case 4:
			cout << "************************************" << endl;
			cout << "*           4.Desery               *" << endl;
			wyswietl_liste_dania(lPrzystawek, 'd');
			cin >> E;
			system("cls");
			break;

		case 5:
			cout << "****************************" << endl;
			cout << "*         5.Napoje         *" << endl;
			wyswietl_liste_dania(lPrzystawek, 'n');
			cin >> E;
			system("cls");
			break;

		default:
			cout << "Podano błędny numer strony podaj poprawną strone 1-5" << endl;
			cin >> E;
		}
	}
}



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

	menu_aplikacji();
	
	return 0;
}
