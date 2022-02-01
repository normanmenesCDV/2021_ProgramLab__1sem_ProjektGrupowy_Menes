#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>				// _getch()
#include <windows.h>

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

//funkcja, która przestawia kursor konsoli w dowolne miejsce
void gotoxy(const int x, const int y)
{
		COORD coord = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

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

void kontakt()
{
	cout << "**************************************************************************************************************" << endl;
	cout << "* Instagram : jakis instagram                                                                                *" << endl;
	cout << "* Tel : +48 985 493 672                                                                                      *" << endl;
	cout << "* Godziny otwarcia : \n"
		"*   Pon: zamkniete\n"
		"*   Wt-Pt: 12:00-22:00\n"
		"*   Sob: 12:00-24:00\n"
		"*   Niedz: 12:00-20:00 " << endl;
	cout << "* E-mail : tlustykrab@gmail.com                                                                              *" << endl;
	cout << "**************************************************************************************************************" << endl;
	cout << endl;
	cout << endl;
}

int main()
{
	
	setlocale(LC_ALL, ""); // znaki PL

	/******************** USTAWIANIE ROZMIARU OKNA ********************/
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); // uchwyt standardowego wyjścia
	COORD c2; // struktura potrzebna do ustawienia rozmiarów bufora pamięci
	c2.X = 120; // szerokość na 120 szerokości znaków
	c2.Y = 30; // wysokość na 40 wysokości znaków
	SetConsoleScreenBufferSize(handle, c2); // ustawia rozmiar bufora (wyświetlanego tekstu)

	SMALL_RECT sr; // struktura wykorzystywana do ustawienia rozmiaru okna
	sr.Left = 0; // na zero
	sr.Top = 0; // na zero
	sr.Right = c2.X - 1; // szerokość o 1 mniejsza od bufora
	sr.Bottom = c2.Y - 1; // wysokość o 1 mniejsza od bufora
	SetConsoleWindowInfo(handle, true, &sr); // ustawia rozmiar okna (jednostka to szerokość i wysokość pojedynczego znaku)
	/******************************************************************/


	
	string tmp_string;
	short int linijka = 0;
	// Nazwa Restauracji
	// 1. linijka
	tmp_string = "************************************";
	int tmp_string_poczatek = (c2.X) / 2 - (tmp_string.length() / 2);				// zapamiętuje w którym miejscu wyświetlić "*" na początku linijki
	int tmp_string_koniec = (c2.X) / 2 + (tmp_string.length() / 2)-1;				// zapamiętuje w którym miejscu wyświetlić "*" na końcu linijki
	gotoxy(tmp_string_poczatek, linijka);											// ustawia kursor tak, by tekst był wyrównany do środka linijki
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
	tmp_string = "Restauracja \"Tłusty krab\"";
	gotoxy((c2.X)/2-(tmp_string.length()/2), linijka);								// ustawia kursor tak, by tekst był wyrównany do środka linijki
		cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
		cout << "*";
	linijka++;

	// 4. linijka
	gotoxy(tmp_string_poczatek, linijka);
		cout << "*";
	tmp_string = "ul. Ratajczaka 10 Poznań";
	gotoxy((c2.X) / 2 - (tmp_string.length() / 2), linijka);
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

		
	// MENU APLIKACJI
	short int liczbaOpcjiMenu = 4;
	linijka = 10;

	tmp_string = "Wybierz opcję korzystając ze strzałek (góra / dół) i zatwierdzając przyciskiem ENTER";
	gotoxy((c2.X) / 2 - (tmp_string.length() / 2), linijka);
		cout << tmp_string;
	linijka += 2;

	gotoxy(tmp_string_poczatek, linijka);
		tmp_string = "************************************";
		cout << tmp_string;
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
		cout << "*";
	tmp_string = "MENU APLIKACJI";
	gotoxy((c2.X) / 2 - (tmp_string.length() / 2), linijka);
		cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
		cout << "*";
	linijka++;

	gotoxy(tmp_string_poczatek, linijka);
		cout << "*";
	gotoxy(tmp_string_koniec, linijka);
		cout << "*";
	linijka++;

	short int pierwszaOpcjaMenu = linijka;				// potrzebne do rysowania strzałki wyboru
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
	tmp_string = "Złóż zamówienie";
	gotoxy(tmp_string_poczatek + 6, linijka);
		cout << tmp_string;
	gotoxy(tmp_string_koniec, linijka);
		cout << "*";
	linijka++;

	short int ostatniaOpcjaMenu = linijka;				// potrzebne do rysowania strzałki wyboru
	gotoxy(tmp_string_poczatek, linijka);
		cout << "*";
	tmp_string = "Wyjście";
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

		

	// strzałki
	short int wybor;
	short int poprzedniWybor;
	while (true)
	{
		wybor = 1;
		poprzedniWybor = wybor;
			
		while (true)						//przesuwanie strzałki
		{
			//rysowanie strzałki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + wybor - 1);
			cout << static_cast <char>(16);

			//obsługa klawiatury
			poprzedniWybor = wybor;
			switch (_getch())
			{
				case 224: //STRZAŁKI
					switch (_getch())
					{
						case 72: //strzałka w górę
							if (1 < wybor) wybor--;
							else wybor = liczbaOpcjiMenu;
							break;

						case 80: //strzałka w dół
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
							cout << "Wybrałeś: Menu restauracji";
							// sleep
							menu_restaurant();
							break;

						case 2:
							cout << "Wybrałeś: Kontakt";
							// sleep
							kontakt();
							break;
							
						case 3:
							cout << "Wybrałeś: Złóż zamówienie";
							// sleep
							//Wyswietla sie zloz zamowienie
							break;

						case 4:
							cout << "Wybrałeś: Wyjście z aplikacji";
							//sleep
							cout << "Dziękujemy za wybranie naszej restauracji" << endl;
							return 0;
					}
			}

			//czyszczenie strzałki wyboru
			gotoxy(tmp_string_poczatek + 4, pierwszaOpcjaMenu + poprzedniWybor - 1);
				cout << " ";
		}
	}
	return 0;
}
