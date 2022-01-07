#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int wybor = 4;
    for (int i = 0; i < wybor; i--)
    {
        cout << "************************************" << endl;
        cout << "* Witamy w restauracji Tlusty krab *" << endl;
        cout << "* ul. Ratajczaka 10 Poznan        *" << endl;
        cout << "*                                  *" << endl;
        cout << "* By przejsc do :                  *" << endl;
        cout << "* Menu dan wcisnij 1               *" << endl;
        cout << "* Kontakt wcisnij 2                *" << endl;
        cout << "* Zloz zamowienie wcisnij 3        *" << endl;
        cout << "* Wyjscie z programy wpisz 'e'     *" << endl;
        cout << "************************************" << endl;
        cout << endl;
                cin >> wybor;
                if (wybor < 4) {
                    switch (wybor)
                    {
                    case 1:
                        //Wyswietla sie menu dan
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
                    }
                }
                else
                    cout << "Dziekujemy za wybranie naszej restauracji" << endl;
        }
    return 0;
}