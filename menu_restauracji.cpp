#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>
#include "kontakt.hpp";
#include "menu_restauracji.hpp";
#include "panel_glowny.hpp";

using namespace std;

const short int rozmiarX = 120;					// do ustawienia szerokoœci okna

/******************************     LISTA DAÑ     ******************************/
// string typ_dania [liczba_dañ][liczba_parametrów_danego_dania]	

const short int lParametrowDania = 2;	 // nazwa, cena

const short int lPrzystawek = 5;		// liczba dostêpnych przystawek
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



void wyswietl_liste_dania(const short int lDanychDan, char typ_dania, const short int linijka)
{
	short int tmp_linijka = linijka - 1;
	for (short int i = 0; i < lDanychDan; i++) {
		tmp_linijka++;
		for (short int j = 0; j < lParametrowDania; j++) {
			if (j == 0) gotoxy(2, tmp_linijka);
			else if (j == 1) gotoxy(74, tmp_linijka);

			if (typ_dania == 'p') cout << przystawki[i][j] << "  ";
			else if (typ_dania == 'z') cout << zupy[i][j] << "  ";
			else if (typ_dania == 'g') cout << dglowne[i][j] << "  ";
			else if (typ_dania == 'd') cout << desery[i][j] << "  ";
			else if (typ_dania == 'n') cout << napoje[i][j] << "  ";
			if (j == 1) cout << "\b\bzl";
		}
		cout << endl;
	}
}



void menu_restauracji()
{
	naglowek_restauracji();

	// MENU RESTAURACJI
	string tmp_string;
	const short int liczbaOpcjiMenuRestauracji = 6;
	short int linijka = 10;

	tmp_string = "Wybierz, któr¹ kartê chcesz obejrzeæ";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	linijka += 2;

	tmp_string = "************************************";
	int tmp_string_poczatek = rozmiarX / 2 - (tmp_string.length() / 2);				// zapamiêtuje w którym miejscu wyœwietliæ "*" na pocz¹tku linijki
	int tmp_string_koniec = rozmiarX / 2 + (tmp_string.length() / 2) - 1;			// zapamiêtuje w którym miejscu wyœwietliæ "*" na koñcu linijki
	gotoxy(tmp_string_poczatek, linijka);
	cout << tmp_string;
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "MENU RESTAURACJI";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int pierwszaOpcjaMenu = linijka;				// potrzebne do rysowania strza³ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Przystawki";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Zupy";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Danie g³ówne";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Desery";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Napoje";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int ostatniaOpcjaMenu = linijka;				// potrzebne do rysowania strza³ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "[powrót]";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	tmp_string = "************************************";
	cout << tmp_string;
	linijka += 2;



	// strza³ki
	short int wybor;
	short int poprzedniWybor;
	while (true)
	{
		wybor = 1;
		poprzedniWybor = wybor;

		while (true)						//przesuwanie strza³ki
		{
			//rysowanie strza³ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + wybor - 1);
			cout << static_cast <char>(16);

			//obs³uga klawiatury
			poprzedniWybor = wybor;
			switch (_getch())
			{
			case 224: //STRZA£KI
				switch (_getch())
				{
				case 72: //strza³ka w górê
					if (1 < wybor) wybor--;
					else wybor = liczbaOpcjiMenuRestauracji;
					break;

				case 80: //strza³ka w dó³
					if (wybor < liczbaOpcjiMenuRestauracji) wybor++;
					else wybor = 1;
					break;
				}
				break;
			case 13: //ENTER
				// czyszczenie poprzedniej listy
				gotoxy(0, linijka);
				for (int i = 0; i < 10; i++) {			// 10 = max liczba dañ danej kategorii
					cout << "                                                                                               " << endl;
				}

				gotoxy(65 / 2, linijka);
				switch (wybor)
				{
				case 1:
					tmp_string = "PRZYSTAWKI";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lPrzystawek, 'p', linijka + 1);
					break;

				case 2:
					tmp_string = "ZUPY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lZup, 'z', linijka + 1);
					break;

				case 3:
					tmp_string = "DANIA G£ÓWNE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lPrzystawek, 'g', linijka + 1);
					break;

				case 4:
					tmp_string = "DESERY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lPrzystawek, 'd', linijka + 1);
					break;

				case 5:
					tmp_string = "NAPOJE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					wyswietl_liste_dania(lPrzystawek, 'n', linijka + 1);
					break;

				case 6:
					cout << "Wybra³eœ: Powrót do menu aplikacji";
					// sleep
					menu_aplikacji();
					exit(0);
				}
				break;
			case 27: //ESC
				gotoxy(tmp_string_poczatek, linijka);
				cout << "Wyjœcie z programu\n";
				exit(0);
				break;
			}

			//czyszczenie strza³ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + poprzedniWybor - 1);
			cout << " ";
		}
	}
}



/*************************************************************************************/

void zamowienie_wyswietl_liste_dania(const short int lDanychDan, char typ_dania, const short int linijka)
{
	short int tmp_linijka = linijka - 1;
	for (short int i = 0; i < lDanychDan; i++) {
		tmp_linijka++;
		for (short int j = 0; j < lParametrowDania; j++) {
			if (j == 0) gotoxy(2, tmp_linijka);
			else if (j == 1) gotoxy(74, tmp_linijka);

			if (typ_dania == 'p') cout << przystawki[i][j] << "  ";
			else if (typ_dania == 'z') cout << zupy[i][j] << "  ";
			else if (typ_dania == 'g') cout << dglowne[i][j] << "  ";
			else if (typ_dania == 'd') cout << desery[i][j] << "  ";
			else if (typ_dania == 'n') cout << napoje[i][j] << "  ";
			if (j == 1) cout << "\b\bzl";
		}
		cout << endl;
	}
}


void skladanie_zamowienia_menu()
{
	// MENU RESTAURACJI
	string tmp_string;
	const short int liczbaOpcjiMenuRestauracji = 6;
	short int linijka = 10;

	tmp_string = "Wybierz, któr¹ kartê chcesz obejrzeæ";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	linijka += 2;

	tmp_string = "************************************";
	int tmp_string_poczatek = rozmiarX / 2 - (tmp_string.length() / 2);				// zapamiêtuje w którym miejscu wyœwietliæ "*" na pocz¹tku linijki
	int tmp_string_koniec = rozmiarX / 2 + (tmp_string.length() / 2) - 1;			// zapamiêtuje w którym miejscu wyœwietliæ "*" na koñcu linijki
	gotoxy(tmp_string_poczatek, linijka);
	cout << tmp_string;
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "MENU RESTAURACJI";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int pierwszaOpcjaMenu = linijka;				// potrzebne do rysowania strza³ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Przystawki";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Zupy";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Danie g³ówne";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Desery";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Napoje";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int ostatniaOpcjaMenu = linijka;				// potrzebne do rysowania strza³ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "[z³ó¿ zamówienie]";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	tmp_string = "************************************";
	cout << tmp_string;
	linijka += 2;



	// strza³ki
	short int wybor;
	short int poprzedniWybor;
	while (true)
	{
		wybor = 1;
		poprzedniWybor = wybor;

		while (true)						//przesuwanie strza³ki
		{
			//rysowanie strza³ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + wybor - 1);
			cout << static_cast <char>(16);

			//obs³uga klawiatury
			poprzedniWybor = wybor;
			switch (_getch())
			{
			case 224: //STRZA£KI
				switch (_getch())
				{
				case 72: //strza³ka w górê
					if (1 < wybor) wybor--;
					else wybor = liczbaOpcjiMenuRestauracji;
					break;

				case 80: //strza³ka w dó³
					if (wybor < liczbaOpcjiMenuRestauracji) wybor++;
					else wybor = 1;
					break;
				}
				break;
			case 13: //ENTER
				// czyszczenie poprzedniej listy
				gotoxy(0, linijka);
				for (int i = 0; i < 10; i++) {			// 10 = max liczba dañ danej kategorii
					cout << "                                                                                               " << endl;
				}

				gotoxy(65 / 2, linijka);
				switch (wybor)
				{
				case 1:
					tmp_string = "PRZYSTAWKI";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lPrzystawek, 'p', linijka + 1);
					break;

				case 2:
					tmp_string = "ZUPY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lZup, 'z', linijka + 1);
					break;

				case 3:
					tmp_string = "DANIA G£ÓWNE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lPrzystawek, 'g', linijka + 1);
					break;

				case 4:
					tmp_string = "DESERY";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lPrzystawek, 'd', linijka + 1);
					break;

				case 5:
					tmp_string = "NAPOJE";
					gotoxy(80 / 2 - (tmp_string.length() / 2), linijka);
					cout << tmp_string;
					zamowienie_wyswietl_liste_dania(lPrzystawek, 'n', linijka + 1);
					break;

				case 6:
					cout << "Zakoñcz sk³adanie zamówienia";
					// !!!!!!! ///
				}
				break;
			case 27: //ESC
				gotoxy(tmp_string_poczatek, linijka);
				cout << "Wyjœcie z programu\n";
				exit(0);
				break;
			}

			//czyszczenie strza³ki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + poprzedniWybor - 1);
			cout << " ";
		}
	}
}

void zloz_zamowienie() {
	naglowek_restauracji();
	string tmp_string;
	tmp_string = "Z£Ó¯ ZAMÓWIENIE";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), 8);
	cout << tmp_string << endl << endl;

	string imie_nazwisko_klienta;
	short int nrZamowienia = 1;
	string lokalizacja;	// "na miejscu" / "na wynos"
	short int nrStolika;
	string adres;

	cout << "Nr zamówienia: " << nrZamowienia << endl;

	cout << "Imiê i nazwisko: ";
	getline(cin, imie_nazwisko_klienta);

	cout << "Zamówienie bêdzie realizowane\n"
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

		cout << "Obejmujemy dostawê i zamówienia, tylko w powiecie poznañskim - zamówienia spoza tego obszaru nie bêd¹ realizowane." << endl;
		cout << "Adres dostawy: " << endl;
		getline(cin, adres);
		// czas dostawy
		break;
	}
	system("cls");
	naglowek_restauracji();

}