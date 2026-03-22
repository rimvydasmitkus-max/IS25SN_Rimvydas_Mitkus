#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;

    int pasirinkimas;
    string valiuta;
    double kiekis;
    double rezultatas = 0;
    double kursas = 0;

    cout << "=== VALIUTOS KEITYKLA ===" << endl;
    cout << "1 - Valiutos kurso palyginimas" << endl;
    cout << "2 - Pirkti valiuta" << endl;
    cout << "3 - Parduoti valiuta" << endl;
    cout << "Pasirinkite veiksma: ";
    cin >> pasirinkimas;

    cout << "Pasirinkite valiuta (EUR, GBP, USD, INR): ";
    cin >> valiuta;

    switch (pasirinkimas) {
        case 1:
            if (valiuta == "EUR") {
                kursas = 1.0;
            }
            else if (valiuta == "GBP") {
                kursas = GBP_Bendras;
            }
            else if (valiuta == "USD") {
                kursas = USD_Bendras;
            }
            else if (valiuta == "INR") {
                kursas = INR_Bendras;
            }
            else {
                cout << "Neteisingai ivesta valiuta." << endl;
                return 0;
            }

            kursas = round(kursas * 100) / 100;
            cout << fixed << setprecision(2);
            cout << "1 EUR = " << kursas << " " << valiuta << endl;
            break;

        case 2:
            cout << "Iveskite EUR kieki, uz kuri pirksite valiuta: ";
            cin >> kiekis;

            if (valiuta == "EUR") {
                rezultatas = kiekis;
            }
            else if (valiuta == "GBP") {
                rezultatas = kiekis * GBP_Pirkti;
            }
            else if (valiuta == "USD") {
                rezultatas = kiekis * USD_Pirkti;
            }
            else if (valiuta == "INR") {
                rezultatas = kiekis * INR_Pirkti;
            }
            else {
                cout << "Neteisingai ivesta valiuta." << endl;
                return 0;
            }

            rezultatas = round(rezultatas * 100) / 100;
            cout << fixed << setprecision(2);
            cout << "Jus gausite: " << rezultatas << " " << valiuta << endl;
            break;

        case 3:
            cout << "Iveskite, kiek pasirinktos valiutos parduosite: ";
            cin >> kiekis;

            if (valiuta == "EUR") {
                rezultatas = kiekis;
            }
            else if (valiuta == "GBP") {
                rezultatas = kiekis * GBP_Parduoti;
            }
            else if (valiuta == "USD") {
                rezultatas = kiekis * USD_Parduoti;
            }
            else if (valiuta == "INR") {
                rezultatas = kiekis * INR_Parduoti;
            }
            else {
                cout << "Neteisingai ivesta valiuta." << endl;
                return 0;
            }

            rezultatas = round(rezultatas * 100) / 100;
            cout << fixed << setprecision(2);
            cout << "Jus gausite: " << rezultatas << " EUR" << endl;
            break;

        default:
            cout << "Neteisingas pasirinkimas." << endl;
    }

    return 0;
}
