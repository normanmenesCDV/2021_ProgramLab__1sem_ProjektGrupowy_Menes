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

using namespace std;

string A = " A) Tortilla Rolls(150g) ", B = " B) Krążki Cebulowe(9szt) ", C = " C)Salsa Nachos(150g) ", D = " D)Nachos Ser(150g) ";//Dawid Gorniaczyk
string Q = " Q)Frytki(100g) ", F = " F)Carpacio(200ml) ", G = " G)Krem z kukurydzy(200ml) ", H = " H) Quesadilla z kurczakiem(1sz) ";//Dawid Gorniaczyk
string I = " I) Enchiladas z kurczakiem(3szt) ", J = " J)Enchiladas z wolowina(3szt) ", K = " K)Grillowana pires z kurczaka z sosem salsa mojito(180g) ", L = " L)Tacos z kurczakiem(3szt) ";//Dawid Gorniaczyk
string M = " M) Tacos z rostbefem(3szt) ", N = " N) Brownie(150g) ", O = " O) Cremme Bruelle(100g) ", P = " P) Sernik Mango(120g) ";//Dawid Gorniaczyk
string R = " R) Herbata ", S = " S) Caffe Latte ", T = " T) Americano ", U = " U) Coca-Cola(0.2l) ", W = " W) 7up(0.2l) ", X = " X) Mirinda(0.2l) ", Y = " Y) Woda(0.3l) ";//Dawid Gorniaczyk
float a = 21.99, b = 18.99, c = 15.99, d = 16.99, q = 9.99, f = 23.99, g = 17.99, h = 34.99, i = 40.99, j = 47.99, k = 38.99, l = 35.99;//Dawid Gorniaczyk
float m = 40.99, n = 20.99, o = 18.99, p = 22.99, r = 8.99, s = 10.99, t = 9.99, u = 7.99, w = 7.99, x = 7.99, y = 6.99;//Dawid Gorniaczyk
int E;

void menu_restaurant()//Maciej Witkowski
{
	cout << "************************************" << endl;
	cout << "*         MENU RESTAURACJI         *" << endl;
	cout << "* 1.Przystawki                     *" << endl;
	cout << "* 2.Zupy                           *" << endl;
	cout << "* 3.Dania główne                   *" << endl;
	cout << "* 4.Desery                         *" << endl;
	cout << "* 5Napoje                          *" << endl;
	cout << "************************************" << endl;
	cout << "Podaj którą kartę chcesz obejrzeć" << endl;
	cin >> E;

	while (true)
	{
		switch (E)
		{
		case 1:
			cout << "************************************" << endl;
			cout << "*          1.Przystawki            *" << endl;
			cout << "*" << A << a << " zl *" << endl;
			cout << "*" << B << b << " zl*" << endl;
			cout << "*" << C << c << " zl    *" << endl;
			cout << "*" << D << d << " zl      *" << endl;
			cout << "*" << Q << q << " zl           *" << endl;//Dawid Gorniaczyk
			cout << "************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;

		case 2:
			cout << "*************************************" << endl;
			cout << "*              2.Zupy               *" << endl;
			cout << "*" << F << f << " zl        *" << endl;
			cout << "*" << G << g << " zl*" << endl;//Dawid Gorniaczyk
			cout << "*************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;

		case 3:
			cout << "********************************************************************" << endl;
			cout << "*                            3.Dania głowne                        *" << endl;
			cout << "*" << H << h << " zl                         *" << endl;
			cout << "*" << I << i << " zl                        *" << endl;
			cout << "*" << J << j << " zl                           *" << endl;//Dawid Gorniaczyk
			cout << "*" << K << k << " zl*" << endl;
			cout << "*" << M << m << " zl                              *" << endl;//Dawid Gorniaczyk
			cout << "********************************************************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;

		case 4:
			cout << "***********************************" << endl;
			cout << "*          4.Desery               *" << endl;
			cout << "*" << N << n << " zl       *" << endl;
			cout << "*" << O << o << " zl*" << endl;
			cout << "*" << P << p << " zl  *" << endl;//Dawid Gorniaczyk
			cout << "***********************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;

		case 5:
			cout << "***********************************" << endl;
			cout << "*            5.Napoje             *" << endl;
			cout << "*" << R << r << " zl              *" << endl;
			cout << "*" << S << s << " zl         *" << endl;
			cout << "*" << T << t << " zl            *" << endl;
			cout << "*" << U << u << " zl      *" << endl;
			cout << "*" << W << w << " zl            *" << endl;//Dawid Gorniaczyk
			cout << "*" << X << x << " zl        *" << endl;
			cout << "*" << Y << y << " zl           *" << endl;//Dawid Gorniaczyk
			cout << "***********************************" << endl;
			cout << "1.Przystawki || 2.Zupy || 3.Dania Główne || 4.Desery || 5.Napoje" << endl;
			cout << "Jeśli chcesz zobaczyć inne strony wprowadź numer strony 1-5" << endl;
			cin >> E;

		default:
			cout << "Podano błędny numer strony podaj poprawną strone 1-5" << endl;
			cin >> E;
		}
	}
}

int main()
{

    return 0;
}
