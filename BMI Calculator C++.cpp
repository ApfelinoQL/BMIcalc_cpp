#include <iostream>
#include <string>

int main() {

    std::string meassys;
    double weight;
    double height;
    int igender;
    double BMI;

    std::cout << "Do you prefer the metric or the imperial system? (m/i) ";
    std::cin >> meassys;

    std::cout << "---------------------------------------------" << '\n';
    std::cout << "Please use a dot, if you have decimal places." << '\n';
    std::cout << "---------------------------------------------" << '\n';

    std::cout << "What weight are you? (kg/lbs) ";
    std::cin >> weight;

    std::cout << "What height are you? (m/in) ";
    std::cin >> height;

    if (meassys == "m") {
        BMI = weight / (height * height);
    }
    
    else if (meassys == "i") {
        BMI = (weight / (height * height)) * 703;
    }

    else {
        std::cout << "Please enter valid inputs." << '\n';
        return 0;
    }

    std::cout << "Your BMI is: " << BMI << '\n';
    if (BMI < 18.5) {
        std::cout << "You are Underweight." << '\n';
    } else if (BMI < 24.9) {
        std::cout << "Your weight is normal." << '\n';
    } else if (BMI < 29.9) {
        std::cout << "You are Overweight." << '\n';
    } else {
        std::cout << "You are Obese." << '\n';
    }

    return 0;
}