// #include <iostream>
// using namespace std;
//     class car{
//         public:
//         string brand;
//         long int speed;
//         void drive(){
//             cout<<"The car is driving at "<< speed << " km/h"<< endl;
//         }
//     };
// int main(){
//     car mycar ;
//     mycar.brand="Mahindra";
//     mycar.speed= 120;
//     mycar.drive();
//     return 0;
// }
#include <iostream>
using namespace std;

class car {
public:
    string brand;
    int speed;

    car() {}

    car(string b,int s) {
        brand = b;
        speed = s;
    }

    car(const car &obj) {
        brand = obj.brand;
        speed = obj.speed;
    }

    void drive() {
        cout << "The car "<<brand<<" is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    car mycar("Mahindra", 120);
    mycar.drive();

    car copycar(mycar);
    copycar.drive();

    return 0;
}
