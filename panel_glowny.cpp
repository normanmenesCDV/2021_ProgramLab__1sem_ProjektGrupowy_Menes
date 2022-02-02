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

//funkcja, która przestawia kursor konsoli w dowolne miejsce
void gotoxy(const int x, const int y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void naglowek_restauracji() {
	system("cls");
	string tmp_string;
	short int linijka = 0;
	// Nazwa Restauracji
	// 1. linijka
	tmp_string = "************************************";
	int tmp_string_poczatek = rozmiarX / 2 - (tmp_string.length() / 2);				// zapamiêtuje w którym miejscu wyœwietliæ "*" na pocz¹tku linijki
	int tmp_string_koniec = rozmiarX / 2 + (tmp_string.length() / 2) - 1;				// zapamiêtuje w którym miejscu wyœwietliæ "*" na koñcu linijki
	gotoxy(tmp_string_poczatek, linijka);											// ustawia kursor tak, by tekst by³ wyrównany do œrodka linijki
	cout << tmp_string;
	linijka++;

	// 2. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 3. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Restauracja \"T³usty krab\"";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);								// ustawia kursor tak, by tekst by³ wyrównany do œrodka linijki
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 4. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "ul. Ratajczaka 10 Poznañ";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 5. linijka
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	// 6. linijka
	gotoxy(tmp_string_poczatek, linijka);
	tmp_string = "************************************";
	cout << tmp_string;
}


void menu_aplikacji() {
	naglowek_restauracji();

	// MENU APLIKACJI
	string tmp_string;
	const short int liczbaOpcjiMenu = 4;
	short int linijka = 10;

	tmp_string = "Wybierz opcjê korzystaj¹c ze strza³ek (góra / dó³) i zatwierdzaj¹c przyciskiem ENTER";
	gotoxy(rozmiarX / 2 - (tmp_string.length() / 2), linijka);
	cout << tmp_string;
	linijka++;

	tmp_string = "Aby przerwaæ dzia³anie aplikacji, naciœnij w dowolnym momencie klawisz ESC";
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
	tmp_string = "MENU APLIKACJI";
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
	tmp_string = "Menu restauracji";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Kontakt";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Z³ó¿ zamówienie";
	gotoxy(tmp_string_poczatek + 6, linijka);
	cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
	cout << "*";
	linijka++;

	short int ostatniaOpcjaMenu = linijka;				// potrzebne do rysowania strza³ki wyboru
	gotoxy(tmp_string_poczatek, linijka);
	cout << "*";
	tmp_string = "Wyjœcie";
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
					else wybor = liczbaOpcjiMenu;
					break;

				case 80: //strza³ka w dó³
					if (wybor < liczbaOpcjiMenu) wybor++;
					else wybor = 1;
					break;
				}
				break;
			case 13: //ENTER
				gotoxy(tmp_string_poczatek, linijka);
				switch (wybor)
				{
				case 1:
					cout << "Wybra³eœ: Menu restauracji";
					// sleep
					menu_restauracji();
					break;

				case 2:
					cout << "Wybra³eœ: Kontakt";
					// sleep
					kontakt();
					break;

				case 3:
					cout << "Wybra³eœ: Z³ó¿ zamówienie";
					// sleep
					zloz_zamowienie();
					break;

				case 4:
					cout << "Wybra³eœ: Wyjœcie z aplikacji" << endl;
					//sleep
					gotoxy(tmp_string_poczatek, linijka+1);
					cout << "Dziêkujemy za wybranie naszej restauracji" << endl;
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


