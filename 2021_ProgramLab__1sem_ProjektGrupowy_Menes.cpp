#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

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
/*
void wyswietl_liste_dania()
{
	// nameof(nazwa_tablicy)
	for (short int i = 0; i < T; i++) {
		for (short int j = 0; j < lParametrowDania; j++) {
			cout << T[i][j] << "  ";
			if (j == 1) cout << "\b\bzl";
		}
		cout << endl;
	}
}
*/

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
			for (short int i = 0; i < lPrzystawek; i++) {
				for (short int j = 0; j < lParametrowDania; j++) {
					cout << przystawki[i][j] << "  ";
					if (j == 1) cout << "\b\bzl";
				}
				cout << endl;
			}
			cout << "*************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			system("cls");
			break;

		case 2:
			cout << "***************************************" << endl;
			cout << "*                2.Zupy               *" << endl;
			for (short int i = 0; i < lZup; i++) {
				for (short int j = 0; j < lParametrowDania; j++) {
					cout << zupy[i][j] << "  ";
					if (j == 1) cout << "\b\bzl";
				}
				cout << endl;
			}
			cout << "***************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			system("cls");
			break;

		case 3:
			cout << "**********************************************************************" << endl;
			cout << "*                             3.Dania głowne                         *" << endl;
			for (short int i = 0; i < lDGlownych; i++) {
				for (short int j = 0; j < lParametrowDania; j++) {
					cout << dglowne[i][j] << "  ";
					if (j == 1) cout << "\b\bzl";
				}
				cout << endl;
			}
			cout << "**********************************************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			system("cls");
			break;

		case 4:
			cout << "************************************" << endl;
			cout << "*           4.Desery               *" << endl;
			for (short int i = 0; i < lDeserow; i++) {
				for (short int j = 0; j < lParametrowDania; j++) {
					cout << desery[i][j] << "  ";
					if (j == 1) cout << "\b\bzl";
				}
				cout << endl;
			}
			cout << "***********************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			system("cls");
			break;

		case 5:
			cout << "****************************" << endl;
			cout << "*         5.Napoje         *" << endl;
			for (short int i = 0; i < lNapojow; i++) {
				for (short int j = 0; j < lParametrowDania; j++) {
					cout << napoje[i][j] << "  ";
					if (j == 1) cout << "\b\bzl";
				}
				cout << endl;
			}
			cout << "****************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
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
	int wybor = 4;
	for (int i = 0; i < wybor; i--)
	{
		cout << "************************************" << endl;
		cout << "* Witamy w restauracji Tlusty krab *" << endl;
		cout << "* ul. Ratajczaka 10 Poznan         *" << endl;
		cout << "*                                  *" << endl;
		cout << "* By przejsc do :                  *" << endl;
		cout << "* Menu dan wcisnij 1               *" << endl;
		cout << "* Kontakt wcisnij 2                *" << endl;
		cout << "* Zloz zamowienie wcisnij 3        *" << endl;
		cout << "* Wyjscie z programy wpisz 'e'     *" << endl;
		cout << "************************************" << endl;
		cout << endl;
		if (!(cin >> wybor))
		{
			cout << "Dziekujemy za wybranie naszej restauracji" << endl;
			exit(0);
		}

		switch (wybor)
		{
		case 1:		// MENU RESTAURACJI
			menu_restaurant();
			break;
		case 2:		// KONTAKT
			cout << "**************************************************************************************************************" << endl;
			cout << "* Instagram : jakis instagram                                                                                *" << endl;
			cout << "* Tel : +48 985 493 672                                                                                      *" << endl;
			cout << "* Godziny otwarcia : Pon zamkniete | Wtr - Piat = 12:00 do 22:00 | Sob 12:00 do 24:00 | Niedz 12:00 do 20:00 *" << endl;
			cout << "* E-mail : tlustykrab@gmail.com                                                                              *" << endl;
			cout << "**************************************************************************************************************" << endl;
			cout << endl;
			cout << endl;
			break;
		case 3:
			//Wyswietla sie zloz zamowienie
			break;
		default:
			cout << "Wybierz jedna z opcji " << endl;
		}
	}
	return 0;
}
