// komentarzami zostaną oznaczone osoby, które odpowiadają za dany element kodu
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
    Autorzy:
        * Norman Menes
        * Dawid Gorniaczyk
        * Kamil Ławrynowicz
        * Maciej Witkowski
        * Michal Kudlinski
        * Wojtek Janicki

* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>

#include <cstdlib>

using namespace std;

    	string P[5] = { "Tortilla Rolls (150g) ", "Krazki Cebulowe (9szt) ", "Salsa Nachos (150g) ", "Nachos Ser (150g) ","Frytki (100g) "};
	string Z[2] = { "Carpacio (200ml) ","Krem z kukurydzy (200ml) " };
	string G[6]{"Quesadilla z kurczakiem (1szt) ","Enchiladas z kurczakiem (3szt) ","Enchiladas z wolowina (3szt) ","Grillowana piers z kurczaka z sosoem salsa mojito 180g) ","Tacos z kurczakiem (3 szt) ","Tacos z rostbefem (3szt) "};
	string D[3] = { "Brownie (150g) ","Cremme Bruelle (100g) ","Sernik Mango (120g) " };
	string N[7] = { "Herbata ","Caffe Latte ","Americano ","Coca-Cola ","7up ","Mirinda ","Woda " };
	float CP[5] = { 21.99, 18.99, 15.99, 16.99, 9.99};
	float CZ[2] = { 23.99, 17.99 };
	float CG[6] = { 34.99, 40.99, 47.99, 38.99, 35.99, 40.99};//Dawid Gorniaczyk
	float CD[3] = { 20.99, 18.99, 22.99 };
	float CN[7] = { 8.99, 10.99, 9.99, 7.99, 7.99, 7.99, 6.99 };//Dawid Gorniaczyk

	int E;

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
			cout << "*" << " 1." << P[0] << CP[0] << " zl  *" << endl;
			cout << "*" << " 2." << P[1] << CP[1] << " zl *" << endl;
			cout << "*" << " 3." << P[2] << CP[2] << " zl    *" << endl;
			cout << "*" << " 4." << P[3] << CP[3] << " zl      *" << endl;
			cout << "*" << " 5." << P[4] << CP[4] << " zl           *" << endl;//Dawid Gorniaczyk
			cout << "*************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			break;

		case 2:
			cout << "***************************************" << endl;
			cout << "*                2.Zupy               *" << endl;
			cout << "*" << " 1." << Z[0] << CZ[0] << " zl         *" << endl;
			cout << "*" << " 2." << Z[1] << CZ[1] << " zl *" << endl;//Dawid Gorniaczyk
			cout << "***************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			break;

		case 3:
			cout << "**********************************************************************" << endl;
			cout << "*                             3.Dania głowne                         *" << endl;
			cout << "*" << " 1." << G[0] << CG[0] << " zl                          *" << endl;
			cout << "*" << " 2." << G[1] << CG[1] << " zl                          *" << endl;
			cout << "*" << " 3." << G[2] << CG[2] << " zl                            *" << endl;//Dawid Gorniaczyk
			cout << "*" << " 4." << G[3] << CG[3] << " zl *" << endl;
			cout << "*" << " 5." << G[4] << CG[4] << " zl                              *" << endl;//Dawid Gorniaczyk
			cout << "**********************************************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			break;

		case 4:
			cout << "************************************" << endl;
			cout << "*           4.Desery               *" << endl;
			cout << "*" << " 1." << D[0] << CD[0] << " zl        *" << endl;
			cout << "*" << " 2." << D[1] << CD[1] << " zl *" << endl;
			cout << "*" << " 3." << D[2] << CD[2] << " zl   *" << endl;//Dawid Gorniaczyk
			cout << "***********************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			break;

		case 5:
			cout << "****************************" << endl;
			cout << "*         5.Napoje         *" << endl;
			cout << "*" << " 1." << N[0] << CN[0] << " zl        *" << endl;
			cout << "*" << " 2." << N[1] << CN[1] << " zl   *" << endl;
			cout << "*" << " 3." << N[2] << CN[2] << " zl      *" << endl;
			cout << "*" << " 4." << N[3] << CN[3] << " zl      *" << endl;
			cout << "*" << " 5." << N[4] << CN[4] << " zl            *" << endl;//Dawid Gorniaczyk
			cout << "*" << " 6." << N[5] << CN[5] << " zl        *" << endl;
			cout << "*" << " 7." << N[6] << CN[6] << " zl           *" << endl;//Dawid Gorniaczyk
			cout << "****************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;
			break;

		default:
			cout << "Podano błędny numer strony podaj poprawną strone 1-5" << endl;
			cin >> E;
		}
	}
}

int main()
{
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
		case 1:
			menu_restaurant();
			break;
		case 2:
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
