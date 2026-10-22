#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;

    int veiksmas, valiuta;
    double suma, kursas, rezultatas;
    string valiutosPavadinimas;

    cout << fixed << setprecision(2);

    do
    {
        cout << "Valiutos Keitykla";
        cout << "1. Valiutos kurso palyginimas su euru.";
        cout << "2. Valiutos pirkimas (EUR -> pasirinkta valiuta)";
        cout << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)";
        cout << "4. išeiti";

        if (!(cin >> veiksmas))
        {
            cout << "Klaida, Įveskite skaičiu nuo 1 iki 4";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            continue;
        }

        if (veiksmas == 4)
        {
            cout << "Programa baigia darbą";
            break;
        }

        if (veiksmas < 1 || veiksmas > 4)
        {
            cout << "Klaida: Tokio pasirinkimo nėra";
            continue;
        }

        cout << "Valiutos pasirinkimas";
        cout << "1. Didžiosios Britanijos svaras(GBP)";
        cout << "2. Jungtinių Amerikos Valtijų doleris(USD)";
        cout << "3. Indijos rupija(INR)";
        cout << "Pasirinkite valiuta";

        if (!(cin >> valiuta))
        {
            cout << "Klaida, Įveskite skaičiu nuo 1 iki 4";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            continue;
        }

        if (valiuta == 1)
        {
            valiutosPavadinimas == "GBP";
        }
        else if (valiuta == 2)
        {
            valiutosPavadinimas == "USD";
        }
        else if (valiuta == 3)
        {
            valiutosPavadinimas == "INR";
        }
        else
        {
            cout << "Klaida: Tokios valiutos pasirinkimo nėra.";
            continue;
        }
        cout << "Pasirinkite valiutą: " << valiutosPavadinimas;

        if (veiksmas == 1)
        {
            if (valiuta == 1)
            {
                kursas == GBP_Bendras;
            }
            else if (valiuta == 2)
            {
                kursas == USD_Bendras;
            }
            else if (valiuta == 3)
            {
                kursas == (INR_Bendras);
            }
        }

        cout << "valiuta:" << valiutosPavadinimas;
    } while (veiksmas != 4);
    return 0;
}