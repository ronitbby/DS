// #include <iostream>
// using namespace std;
// int main() {
//     // cout << "Hello, World!\n";  

//     // int a=2,b=5;
//     // int sum =a+b;
//     // cout<< "sum= "<<sum;
//     int a;
//     unsigned long long fact =1;
//     cout<<"Enter a number: ";
//     cin >> a;
//     for(int i =1;i 7<=a;++i){ 
//         fact*= i;
//     }

//     cout<<"Factorial of "<<a<<" is" << fact;


//     return 0;  
    
// }
// #include <iostream>
// using namespace std;

// int main() {
//     char op;        
//     int n1, n2;    

//     cout << "Enter two numbers: ";
//     cin >> n1 >> n2;
//     cout << "Enter operator (+, -, *, /): ";
//     cin >> op;
    
//     switch (op) {
//         case '+':
//             cout << "Result: " << n1 + n2 << endl;
//             break;
//         case '-':
//             cout << "Result: " << n1 - n2 << endl;
//             break;
//         case '*':
//             cout << "Result: " << n1 * n2 << endl;
//             break;
//         case '/':
//             if (n2 == 0) {
//                 cout << "Error: Division by zero is not allowed." << endl;
//             } else {
//                 cout << "Result: " << n1 / n2 << endl;
//             }
//             break;
//         default:
//             cout << "Invalid Operator" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int marks;

//     cout << "Enter your marks (0 - 100): ";
//     cin >> marks;

//     if (marks >= 90) {
//         cout << "Grade: A+" << endl;
//     } else if (marks >= 80) {
//         cout << "Grade: A" << endl;
//     } else if (marks >= 70) {
//         cout << "Grade: B+" << endl;
//     } else if (marks >= 60) {
//         cout << "Grade: B" << endl;
//     } else if (marks >= 50) {
//         cout << "Grade: C" << endl;
//     } else if (marks >= 40) {
//         cout << "Grade: D" << endl;
//     } else {
//         cout << "Grade: F (Fail)" << endl;
//     }

//     return 0;
// }


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


int main(){
    car mycar ;
    mycar.brand="Mahindra";
    mycar.speed= 120;
    mycar.drive();
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//    // int arr[5] = {1, 2, 3, 4, 5};
//    char arr[6]="Ronit";

//    for(int i = 0; i < 5; i++) {
//        cout << arr[i] << " ";
//    }

//    return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     char arr[] = "Ronit";  

//     for (int i = 0; i < 5; i++) {
//         cout << "Index " << i << ": " << arr[i] << endl;
//     }

//     return 0;
// }
// int main(){
//  int arr[]=new int arr2[10];
//  for(int i=0;i<20;i++){
//     cout<<"i"<<arr2[i]<< endl;                                                                                                               
//  }
// }
#include <iostream>
using namespace std;
// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int i = 1, j = 2; 
//     cout << "Before swapping: ";
//     for (int k = 0; k < 5; k++) {
//         cout << arr[k] << " ";
//     }
//     swap(&arr[i], &arr[j]);
//     cout << "\nAfter swapping:  ";
//     for (int k = 0; k < 5; k++) {
//         cout << arr[k] << " ";
//     }
//     return 0;
// }
