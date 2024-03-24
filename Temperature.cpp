#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

int main() {
    double celsius;
    
    // Input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    // Convert to Fahrenheit and Kelvin
    double fahrenheit = celsiusToFahrenheit(celsius);
    double kelvin = celsiusToKelvin(celsius);
    
    // Output the converted temperatures
    cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    
    return 0;
}
