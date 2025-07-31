

// Q1

#include <iostream>
using namespace std;

void swapValues(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int* findLargest(int* x, int* y, int* z) {
    if (*x >= *y && *x >= *z) return x;
    else if (*y >= *x && *y >= *z) return y;
    else return z;
}

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrA = &a, *ptrB = &b, *ptrC = &c;

    cout << "Original values:\n";
    cout << "a = " << a << " at " << ptrA << endl;
    cout << "b = " << b << " at " << ptrB << endl;
    cout << "c = " << c << " at " << ptrC << endl;

    swapValues(ptrA, ptrB);
    swapValues(ptrB, ptrC);

    cout << "\nAfter swapping using pointers:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    int* largest = findLargest(ptrA, ptrB, ptrC);
    *largest = 100;

    cout << "\nAfter modifying the largest to 100:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}



// Q2

#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}

float calculate(float x, float y) {
    return x * y;
}

float calculate(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}

int main() {
    cout << "Sum (int): " << calculate(5, 10) << endl;
    cout << "Product (float): " << calculate(2.5f, 4.0f) << endl;
    cout << "Average (3 ints): " << calculate(10, 20, 30) << endl;
    return 0;
}
//  Q3

#include <iostream>
using namespace std;

void doubleByValue(int x) {
    x *= 2;
}

void doubleByReference(int &x) {
    x *= 2;
}

int main() {
    int a = 5, b = 5;

    doubleByValue(a);
    doubleByReference(b);

    cout << "After doubleByValue, a = " << a << endl;       // unchanged
    cout << "After doubleByReference, b = " << b << endl;   // doubled
    return 0;
}
 
// Q4

#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // pointer arithmetic
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    cout << "Sum using pointer arithmetic = " << sum << endl;

    // Function call
    cout << "Sum via function = " << sumArray(arr, 5) << endl;

    return 0;
}


// Q5
#include <iostream>
using namespace std;

class Calculator {
public:
    int process(int a, int b) {
        return a + b;
    }

    int process(int* a, int* b) {
        return *a + *b;
    }

    int process(int &a) {
        a *= 2;
        return a;
    }

    int process(int a, int* b) {
        return a * (*b);
    }
};

int main() {
    Calculator calc;
    int x = 5, y = 10;

    cout << "Sum of integers: " << calc.process(x, y) << endl;
    cout << "Sum of pointers: " << calc.process(&x, &y) << endl;
    cout << "Double by reference: " << calc.process(x) << endl;
    cout << "Product of value and pointer: " << calc.process(x, &y) << endl;

    return 0;
}
