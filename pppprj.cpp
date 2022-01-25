#include <iostream>
using namespace std;

int main() {
	string a;
	cout << " podaj swoje imie: " << endl;
	cin >> a;
	cout << "zamowienie na miejscu czy na wynos?(1-na miejscu, 2 - na wynos): ";
	int b;
	int c;
	int e;
	int f;
	int g;
	int i;
	string h;
	double suma = 0;
	cin >> b;
	string d;
	if (b == 1) {
		cout << "podaj numer stolika: ";
		cin >> c;
	}
	else {
		cout << "Obejmujemy dostawe tylko w powiecie poznanskim!" << endl;
		cout << "Wprowadz nazwe swojej ulicy: " << endl;
		cin >> d;
		cout << "wprowadz numer mieszkania/domu: " << endl;
		cin >> h;
		cout << "adres: " << d << h << endl;
		cout << "Zamowienie mozna skladac tylko na wybrany dzien" << endl;
		cout << "Jesli chcesz zeby zamowienie dotarlo do ciebie jak najszybciej (1h) wybierz '1', jesli chcesz wybrac godzine przyjazdu zamowienia, nacisnij: '0'" << endl;
		cin >> e;
		if (e == 1) {
			cout << "twoje zamowienie zostanie dostarczone za okolo godzine";
		}
		else {
			cout << "podaj godzine dostawy: ";
			cin >> f;
			cout << "podaj minute dostawy: ";
			cin >> g;
			cout << "twoj czas dostawy to: " << f << ":" << g;


		}
		cout << endl;

	}
	cout << "Zloz zamowienie!" << endl;
	float CP[5] = { 21.99, 18.99, 15.99, 16.99, 9.99 };
	float CZ[2] = { 23.99, 17.99 };
	float CG[6] = { 34.99, 40.99, 47.99, 38.99, 35.99, 40.99 };
	float CD[3] = { 20.99, 18.99, 22.99 };
	float CN[7] = { 8.99, 10.99, 9.99, 7.99, 7.99, 7.99, 6.99 };
	string przystawki[5] = { "Tortilla Rolls (150g)", "Krazki Cebulowe (9szt)", "Salsa Nachos (150g)", "Nachos Ser (150g)","Frytki (100g)" };
	string zupy[2] = { "Carpacio (200ml)","Krem z kukurydzy (200ml)" };
	string dania_glowne[6]{ "Quesadilla z kurczakiem (1szt)","Enchiladas z kurczakiem (3szt)","Enchiladas z wolowina (3szt)","Grillowana piers z kurczaka z sosoem salsa mojito 180g)","Tacos z kurczakiem (3 szt)","Tacos z rostbefem (3szt)" };
	string desery[3] = { "Brownie (150g)","Cremme Bruelle (100g)","Sernik Mango (120g)" };
	string napoje[7] = { "Herbata","Caffe Latte","Americano","Coca-Cola","7up","Mirinda","Woda" };
	float ilosc_p = 0;
	float ilosc_z = 0;
	float ilosc_dg = 0;
	float ilosc_ds = 0;
	float ilosc_n = 0;
	int numer = -1;
	int input = 0;
	while (input <= 5) {
		cout << "Co chcesz zamowic? (1-przystawki,2-zupy,3-dania glowne,4-desery,5-napoje,liczba powyzej 6-koniec zamowienia)";
		cin >> input;
		switch (input) {
		case 1:

			cout << "wybierz numer przystawki :) (0-4)";
			cin >> numer;
			while (numer > 4) {
				cout << "wybierz poprawny numer dania (0-4)";
				cin >> numer;
			}
			cout << "wybrales: " << przystawki[numer] << endl;
			cout << "podaj ilosc jaka chcesz zamowic: " << endl;
			cin >> ilosc_p;
			cout << przystawki[numer] << " x" << ilosc_p << endl;
			suma = suma + CP[numer] * ilosc_p;
			break;

		case 2:
			cout << "wybierz numer zupy :) (0-1) ";
			cin >> numer;
			while (numer > 1) {
				cout << "wybierz poprawny numer dania (0-1)";
				cin >> numer;
			}
			cout << "wybrales: " << zupy[numer] << endl;
			cout << "podaj ilosc jaka chcesz zamowic: " << endl;
			cin >> ilosc_z;
			cout << zupy[numer] << " x" << ilosc_z << endl;
			suma = suma + CZ[numer] * ilosc_z;
			break;

		case 3:
			cout << "wybierz numer dania glownego :) (0-5)";
			cin >> numer;
			while (numer > 5) {
				cout << "wybierz poprawny numer dania (0-5)";
				cin >> numer;
			}
			cout << "wybrales: " << dania_glowne[numer] << endl;
			cout << "podaj ilosc jaka chcesz zamowic: " << endl;
			cin >> ilosc_dg;
			cout << dania_glowne[numer] << "x" << ilosc_dg << endl;
			suma = suma + CG[numer] * ilosc_dg;
			break;


		case 4:
			cout << " wybierz numer deseru :) (0-2)";
			cin >> numer;
			while (numer > 2) {
				cout << "wybierz poprawny numer dania (0-2)";
				cin >> numer;
			}
			cout << "wybrales: " << desery[numer] << endl;
			cout << "podaj ilosc jaka chcesz zamowic: " << endl;
			cin >> ilosc_ds;
			cout << desery[numer] << " x" << ilosc_ds << endl;
			suma = suma + CD[numer] * ilosc_ds;
			break;
		case 5:
			cout << "wybierz numer napoju :) (0-6)";
			cin >> numer;
			while (numer > 6) {
				cout << "wybierz poprawny numer dania (0-6)";
				cin >> numer;
			}
			cout << "wybrales: " << napoje[numer] << endl;
			cout << "podaj ilosc jaka chcesz zamowic: " << endl;
			cin >> ilosc_n;
			cout << napoje[numer] << " x" << ilosc_n << endl;
			suma = suma + CN[numer] * ilosc_n;
			break;

		default:
			cout << "wybrano numer powyzej 5,koniec zamowienia";


		}
	}
	cout << endl;
	cout << "Twoje zamowienie to :" << endl;
	cout << "Przystawki  : " << przystawki[numer]<<" x "<< ilosc_p << endl;
	cout << "Zupy : " << zupy[numer] << " x " << ilosc_z << endl;
	cout << "Dania glowne : " << dania_glowne[numer] << " x " << ilosc_dg << endl;
	cout << "Desery : " << desery[numer] << " x " << ilosc_ds << endl;
	cout << "Napoje : " << napoje[numer] << " x " << ilosc_n << endl;
	cout << "jak chcesz zaplacic?(1-gotowka,2-karta) ";
	cin >> i;





	if (b == 1) {
		cout << "RAPORT ZAMOWIENIA" << endl;
		cout << "zamowienia pana/pani: " << a << ", do stolika: " << c << endl;
		cout << "koszt twojego zamowienia to: " << suma << "zl" << endl;
		cout << "czas oczekiwania na twoje dania to: przystawki-15 min, dania glowne-30 min.";


	}
	else {
		cout << "RAPORT ZAMOWIENIA" << endl;
		cout << "zamowienie Pana/Pani: " << a << ", na adres: " << d << h << endl;
		cout << "koszt twojego zamowienia to: " << suma << "zl" << endl;
		if (e == 1) {
			cout << "czas oczekiwania na twoje zamowienie to okolo godzina." << endl;

		}
		else {
			cout << "Zamowienie dowieziemy do Ciebie na godzine: " << f << ":" << g << endl;
		}
		if (i == 1) {
			cout << "Platnosc gotowka";

		}
		else {
			cout << "Platnosc karta";
		}

	}




}