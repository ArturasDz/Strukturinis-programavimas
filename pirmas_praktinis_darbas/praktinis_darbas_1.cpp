#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    //valiutos
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;
    
    //kintamieji
    int veiksmas, valiuta;
    double suma, kursas, rezultatas;
    string valiutosPavadinimas;

    //pinigu isvedimas
    cout << fixed << setprecision(2);

    do
    {

        //pagrindinis meniu
        cout << "Valiutos Keitykla\n";
        cout << "1. Valiutos kurso palyginimas su euru\n";
        cout << "2. Valiutos pirkimas (EUR -> pasirinkta valiuta)\n";
        cout << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)\n";
        cout << "4. išeiti\n";

        cout << "pasirinkite veiksma: ";

        if (!(cin >> veiksmas))
        {
            cout << "Klaida, Įveskite skaičiu nuo 1 iki 4\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }

        if (veiksmas == 4)
        {
            cout << "Programa baigia darbą.\n";
            break;
        }

        if (veiksmas < 1 || veiksmas > 4)
        {
            cout << "Klaida: Tokio pasirinkimo nėra.\n";
            continue;
        }

        cout << "Valiutos pasirinkimas\n";
        cout << "1. Didžiosios Britanijos svaras(GBP)\n";
        cout << "2. Jungtinių Amerikos Valtijų doleris(USD)\n";
        cout << "3. Indijos rupija(INR)\n";
        cout << "Pasirinkite valiuta\n";

        if (!(cin >> valiuta))
        {
            cout << "Klaida, Įveskite skaičiu nuo 1 iki 3\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }

        if (valiuta == 1)
        {
            valiutosPavadinimas = "GBP";
        }
        else if (valiuta == 2)
        {
            valiutosPavadinimas = "USD";
        }
        else if (valiuta == 3)
        {
            valiutosPavadinimas = "INR";
        }
        else
        {
            cout << "\nKlaida: Tokios valiutos pasirinkimo nėra.\n";
            continue;
        }

        if (veiksmas == 1)
        {
            if (valiuta == 1)
            {
                kursas = GBP_Bendras;
            }
            else if (valiuta == 2)
            {
                kursas = USD_Bendras;
            }
            else
            {
                kursas = INR_Bendras;
            }

            cout << "\nKurso palyginimas:\n";

            cout << "1 EUR = " << setprecision(2) << kursas
                 << " " << valiutosPavadinimas << '\n';

            cout << "1 " << valiutosPavadinimas << " = "
                 << (1.0 / kursas) << " EUR\n";

            
            cout << setprecision(2);
        }
        else

        {
            cout << "Iveskite suma "
                 << (veiksmas == 2 ? "EUR" : valiutosPavadinimas)
                 << ": ";

           
            if (!(cin >> suma))
            {
                cout << "Klaida: suma turi buti skaicius.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (suma <= 0)
            {
                cout << "Klaida: suma turi buti teigiama.\n";
                continue;
            }

            
            if (veiksmas == 2)
            {
                if (valiuta == 1)
                {
                    kursas = GBP_Pirkti;
                }
                else if (valiuta == 2)
                {
                    kursas = USD_Pirkti;
                }
                else
                {
                    kursas = INR_Pirkti;
                }

                
                rezultatas = suma * kursas;

               
                cout << suma << " EUR -> " << rezultatas
                     << " " << valiutosPavadinimas << '\n';
            }
            else
            {
                
                if (valiuta == 1)
                {
                    kursas = GBP_Parduoti;
                }
                else if (valiuta == 2)
                {
                    kursas = USD_Parduoti;
                }
                else
                {
                    kursas = INR_Parduoti;
                }

                
                rezultatas = suma / kursas;

              
                cout << "suma" << " " << valiutosPavadinimas
                     << " -> " << rezultatas << " EUR\n";
            }
        }
        cout << "\nPaspauskite Enter, kad griztumete i pagrindini meniu...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();

    }
    while (true);

    return 0;
}