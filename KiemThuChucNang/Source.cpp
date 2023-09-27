#include <iostream>
#include <string>
using namespace std;

double calculateBMI(double weight_kg, double height_m) {
    double bmi = weight_kg / (height_m * height_m);
    return bmi;
}

string determineStatus(double bmi) {
    if (bmi < 0) {
        return "Không hợp lệ";
    }
    else if (bmi < 18.5) {
        return "Under";
    }
    else if (bmi < 24.9) {
        return "Normal";
    }
    else {
        return "Over";
    }
}

int main() {
    double weight, height;
    cin >> weight;
    cin >> height;

    if (weight < 0.1 || height < 0.1 || weight > 200 || height > 2.6) {
        cout << "Không hợp lệ" << endl;
    }
    else {
        double bmi = calculateBMI(weight, height);
        string status = determineStatus(bmi);

        cout << status << endl;
    }

    return 0;
}
