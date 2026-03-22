#include <iostream>
#include <string>
using namespace std;

int main() {
    const double GBP_Bendras = 0.8729;
    const double USD_Bendras = 1.1793;
    const double INR_Bendras = 104.6918;

    string valiuta;
    double kursas;

    cout << "=== VALIUTOS KEITYKLA ===" << endl;
    cout << "Valiutos kurso palyginimas" << endl;
    cout << "Pasirinkite valiuta (EUR, GBP, USD, INR): ";
    cin >> valiuta;

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

    cout << "1 EUR = " << kursas << " " << valiuta << endl;

    return 0;
}