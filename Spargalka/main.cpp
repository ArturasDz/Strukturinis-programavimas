#include <iostream>
#include <string>

using namespace std;


// =====================================================
// 1. TEKSTO ISVEDIMAS
// =====================================================

void uzduotis1()
{
    cout << "Labas!" << endl;
    cout << "As mokausi C++." << endl;
    cout << "Man patinka programuoti." << endl;
}


// =====================================================
// 2. KINTAMIEJI
// =====================================================

void uzduotis2()
{
    int amzius = 20;
    double ugis = 1.80;
    string vardas = "Artur";

    cout << "Vardas: " << vardas << endl;
    cout << "Amzius: " << amzius << endl;
    cout << "Ugis: " << ugis << endl;
}


// =====================================================
// 3. IVESTIS
// =====================================================

void uzduotis3()
{
    int amzius;

    cout << "Ivesk savo amziu: ";
    cin >> amzius;

    cout << "Tavo amzius: " << amzius << endl;
}


// =====================================================
// 4. A + B, A - B, A * B, A / B
// =====================================================

void uzduotis4()
{
    double a, b;

    cout << "Ivesk pirma skaiciu: ";
    cin >> a;

    cout << "Ivesk antra skaiciu: ";
    cin >> b;

    cout << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;

    if (b != 0)
    {
        cout << "a / b = " << a / b << endl;
    }
    else
    {
        cout << "Dalyba is nulio negalima!" << endl;
    }
}


// =====================================================
// 5. LIKUTIS %
// =====================================================

void uzduotis5()
{
    int x;

    cout << "Ivesk skaiciu: ";
    cin >> x;

    cout << "Paskutinis skaitmuo: " << x % 10 << endl;
}


// =====================================================
// 6. TEIGIAMAS / NEIGIAMAS
// =====================================================

void uzduotis6()
{
    int x;

    cout << "Ivesk skaiciu: ";
    cin >> x;

    if (x > 0)
    {
        cout << "Skaicius yra teigiamas." << endl;
    }
    else if (x < 0)
    {
        cout << "Skaicius yra neigiamas." << endl;
    }
    else
    {
        cout << "Skaicius yra nulis." << endl;
    }
}


// =====================================================
// 7. LYGINIS / NELYGINIS
// =====================================================

void uzduotis7()
{
    int x;

    cout << "Ivesk skaiciu: ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "Skaicius yra lyginis." << endl;
    }
    else
    {
        cout << "Skaicius yra nelyginis." << endl;
    }
}


// =====================================================
// 8. DIDESNIS IS DVIEJU
// =====================================================

void uzduotis8()
{
    int a, b;

    cout << "Ivesk a: ";
    cin >> a;

    cout << "Ivesk b: ";
    cin >> b;

    if (a > b)
    {
        cout << "Didesnis skaicius: " << a << endl;
    }
    else if (b > a)
    {
        cout << "Didesnis skaicius: " << b << endl;
    }
    else
    {
        cout << "Skaiciai yra lygus." << endl;
    }
}


// =====================================================
// 9. DIDZIAUSIAS IS TRIJU
// =====================================================

void uzduotis9()
{
    int a, b, c;

    cout << "Ivesk a: ";
    cin >> a;

    cout << "Ivesk b: ";
    cin >> b;

    cout << "Ivesk c: ";
    cin >> c;

    int didziausias = a;

    if (b > didziausias)
    {
        didziausias = b;
    }

    if (c > didziausias)
    {
        didziausias = c;
    }

    cout << "Didziausias: " << didziausias << endl;
}


// =====================================================
// 10. FOR CIKLAS 1 - 10
// =====================================================

void uzduotis10()
{
    cout << "Skaiciai nuo 1 iki 10:" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
}


// =====================================================
// 11. LYGINIAI SKAICIAI 1 - 100
// =====================================================

void uzduotis11()
{
    cout << "Lyginiai skaiciai nuo 1 iki 100:" << endl;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}


// =====================================================
// 12. 1 + 2 + 3 + ... + N
// =====================================================

void uzduotis12()
{
    int n;
    int suma = 0;

    cout << "Ivesk n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
    }

    cout << "Suma: " << suma << endl;
}


// =====================================================
// 13. WHILE
// =====================================================

void uzduotis13()
{
    int i = 1;

    cout << "Skaiciai nuo 1 iki 5:" << endl;

    while (i <= 5)
    {
        cout << i << endl;

        i++;
    }
}


// =====================================================
// 14. MASYVAS
// =====================================================

void uzduotis14()
{
    int skaiciai[5] = {5, 10, 15, 20, 25};

    cout << "Masyvo skaiciai:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << skaiciai[i] << endl;
    }
}


// =====================================================
// 15. MASYVO SUMA
// =====================================================

void uzduotis15()
{
    int skaiciai[5] = {5, 10, 15, 20, 25};

    int suma = 0;

    for (int i = 0; i < 5; i++)
    {
        suma = suma + skaiciai[i];
    }

    cout << "Masyvo suma: " << suma << endl;
}


// =====================================================
// 16. DIDZIAUSIAS MASYVO ELEMENTAS
// =====================================================

void uzduotis16()
{
    int skaiciai[5] = {4, 15, 7, 23, 9};

    int didziausias = skaiciai[0];

    for (int i = 1; i < 5; i++)
    {
        if (skaiciai[i] > didziausias)
        {
            didziausias = skaiciai[i];
        }
    }

    cout << "Didziausias masyvo skaicius: "
         << didziausias << endl;
}


// =====================================================
// 17. FUNKCIJA a + b
// =====================================================

int suma(int a, int b)
{
    return a + b;
}

void uzduotis17()
{
    int a, b;

    cout << "Ivesk a: ";
    cin >> a;

    cout << "Ivesk b: ";
    cin >> b;

    cout << "Suma: " << suma(a, b) << endl;
}


// =====================================================
// 18. FUNKCIJA LYGINIS
// =====================================================

bool lyginis(int x)
{
    return x % 2 == 0;
}

void uzduotis18()
{
    int x;

    cout << "Ivesk skaiciu: ";
    cin >> x;

    if (lyginis(x))
    {
        cout << "Skaicius yra lyginis." << endl;
    }
    else
    {
        cout << "Skaicius yra nelyginis." << endl;
    }
}


// =====================================================
// 19. REKURSIJA - FAKTORIALAS
// =====================================================

int faktorialas(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * faktorialas(n - 1);
}

void uzduotis19()
{
    int n;

    cout << "Ivesk skaiciu: ";
    cin >> n;

    cout << n << "! = " << faktorialas(n) << endl;
}


// =====================================================
// PAGRINDINE PROGRAMA
// =====================================================

int main()
{
    int pasirinkimas;

    do
    {
        cout << endl;
        cout << "======================================" << endl;
        cout << "          C++ MOKYMOSI PROGRAMA      " << endl;
        cout << "======================================" << endl;

        cout << "1  - Teksto isvedimas" << endl;
        cout << "2  - Kintamieji" << endl;
        cout << "3  - Ivestis" << endl;
        cout << "4  - A + B, A - B, A * B, A / B" << endl;
        cout << "5  - Likutis %" << endl;
        cout << "6  - Teigiamas / neigiamas" << endl;
        cout << "7  - Lyginis / nelyginis" << endl;
        cout << "8  - Didesnis is dvieju" << endl;
        cout << "9  - Didziausias is triju" << endl;
        cout << "10 - For ciklas" << endl;
        cout << "11 - Lyginiai 1-100" << endl;
        cout << "12 - Suma 1+2+...+N" << endl;
        cout << "13 - While ciklas" << endl;
        cout << "14 - Masyvas" << endl;
        cout << "15 - Masyvo suma" << endl;
        cout << "16 - Didziausias masyvo elementas" << endl;
        cout << "17 - Funkcija a+b" << endl;
        cout << "18 - Funkcija lyginis" << endl;
        cout << "19 - Rekursija / faktorialas" << endl;
        cout << "0  - Baigti" << endl;

        cout << endl;
        cout << "Pasirink: ";
        cin >> pasirinkimas;

        cout << endl;

        switch (pasirinkimas)
        {
            case 1:
                uzduotis1();
                break;

            case 2:
                uzduotis2();
                break;

            case 3:
                uzduotis3();
                break;

            case 4:
                uzduotis4();
                break;

            case 5:
                uzduotis5();
                break;

            case 6:
                uzduotis6();
                break;

            case 7:
                uzduotis7();
                break;

            case 8:
                uzduotis8();
                break;

            case 9:
                uzduotis9();
                break;

            case 10:
                uzduotis10();
                break;

            case 11:
                uzduotis11();
                break;

            case 12:
                uzduotis12();
                break;

            case 13:
                uzduotis13();
                break;

            case 14:
                uzduotis14();
                break;

            case 15:
                uzduotis15();
                break;

            case 16:
                uzduotis16();
                break;

            case 17:
                uzduotis17();
                break;

            case 18:
                uzduotis18();
                break;

            case 19:
                uzduotis19();
                break;

            case 0:
                cout << "Programa baigta." << endl;
                break;

            default:
                cout << "Tokio pasirinkimo nera." << endl;
        }

    } while (pasirinkimas != 0);

    return 0;
}