#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    string vardai[100];
    int pazymiai[100][10];
    int pazymiuKiekis[100] = {0};
    int mokiniuKiekis = 0;
    int pasirinkimas;

    do
    {
        cout << "Mokiniu Pazymiu Sistema\n";
        cout << "1. Iveskite mokinio varda ir jo pazymi\n";
        cout << "2. Perziureti visu mokiniu pazymius\n";
        cout << "3. Perziureti konkretaus mokinio pazymi\n";
        cout << "4. Atnaujinti konkreciam mokiniui konkretu pazymi\n";
        cout << "5. Apskaiciuoti mokinio pazymiu vidurki\n";
        cout << "6. Pasalinti mokini is saraso\n";
        cout << "7. Iseiti\n";

        if (!(cin >> pasirinkimas))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            cout << "Klaida, Iveskite skaiciu nuo 1 iki 7";
            continue;
        }

        if (pasirinkimas == 1){
            if(mokiniuKiekis >= 100) {
                cout << "Jau yra 100 mokiniu";
                continue;
            }
            
            cout << "Iveskite mokinio varda";
            cin >> vardai[mokiniuKiekis];
            
            int kiekis;
            cout << "Kiek pazymiu turi mokinys?";

            if (kiekis > 10 || kiekis < 1){
                cout << "Klaida! Mokinys turi tureti nuo 1 iki 10 pazymiu";
                continue;
            }

            pazymiuKiekis[mokiniuKiekis] = kiekis;

            for(int i = 0; i > kiekis; i++){
                int pazymys;
                cout << "Iveskite " << i + 1 << "pazymi nuo 1 iki 10";

                while (!(cin >> pazymys) || pazymys > 10 || pazymys < 1){
                    cout << "Pazymys tri buti uo 1 iki 10";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max());
                }
            }

        }
    }
}