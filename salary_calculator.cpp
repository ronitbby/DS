#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int employeeID, experience;
    string name;
    double basicSalary, bonusRate, bonusAmount, totalSalary;

    cout << "Enter Employee ID: ";
    cin >> employeeID;

    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Years of Experience: ";
    cin >> experience;

    if (experience < 2)
        bonusRate = 0.05;
    else if (experience <= 5)
        bonusRate = 0.10;
    else
        bonusRate = 0.15;

    bonusAmount = basicSalary * bonusRate;
    totalSalary = basicSalary + bonusAmount;

    cout << "\n=== EMPLOYEE DETAILS ===\n";
    cout << "ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << fixed << setprecision(2);
    cout << "Basic Salary: $" << basicSalary << endl;
    cout << "Experience: " << experience << " years" << endl;
    cout << "Bonus Rate: " << (bonusRate * 100) << "%" << endl;
    cout << "Bonus Amount: $" << bonusAmount << endl;
    cout << "Total Salary: $" << totalSalary << endl;

    return 0;
}
