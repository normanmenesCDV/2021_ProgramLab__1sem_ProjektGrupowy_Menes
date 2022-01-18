#include <iostream>
using namespace std;

int main() {
    string przystawki[5] = { "Tortilla Rolls (150g)", "Krazki Cebulowe (9szt)", "Salsa Nachos (150g)", "Nachos Ser (150g)","Frytki (100g)"};
	string zupy[2] = { "Carpacio (200ml)","Krem z kukurydzy (200ml)" };
	string dania_glowne[6]{"Quesadilla z kurczakiem (1szt)","Enchiladas z kurczakiem (3szt)","Enchiladas z wolowina (3szt)","Grillowana piers z kurczaka z sosoem salsa mojito 180g)","Tacos z kurczakiem (3 szt)","Tacos z rostbefem (3szt)"};
	string desery[3] = { "Brownie (150g)","Cremme Bruelle (100g)","Sernik Mango (120g)" };
	string napoje[7] = { "Herbata","Caffe Latte","Americano","Coca-Cola","7up","Mirinda","Woda" };
	int ilosc=0;
	int numer;
	int input=0;
	while (input != 21) {
		cin>>input;
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
			cin>>  ilosc;
			cout << przystawki[numer] << " x" << ilosc << endl;
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
			cin >> ilosc;
			cout << przystawki[numer] << " x" << ilosc << endl;
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
			cin >> ilosc;
			cout << przystawki[numer] << " x" << ilosc << endl;
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
			cin >> ilosc;
			cout << przystawki[numer] << " x" << ilosc << endl;
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
			cin >> ilosc;
			cout << przystawki[numer] << " x" << ilosc << endl;
			break;

		default:
			cout << "wpisano niepoprawny numer, wybierz numer ponownie (1-5)";


		}
		

		

		
	}
	return 0;

}
