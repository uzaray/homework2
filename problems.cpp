#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;

//p8
//void maximum(int a, int b, int c) {
//    if (a>b and a>c) {
//        cout << a << endl;
//    }else if (b>a and b>c) {
//        cout << b << endl;
//    }else {
//        cout << c << endl;
//    }
//}
//void minimum(int a, int b, int c) {
//    if (a<b and a<c) {
//        cout << a << endl;
//    }else if (b<a and b<c) {
//        cout << b << endl;
//    }else {
//        cout << c << endl;
//    }
//}
//int main() {
//    int x, y, z;
//    cin >> x >> y >> z;
//    maximum(x, y, z);
//    minimum(x, y, z);
//    return 0;
//}

//p9
//int sum(int a, int b) {
//    int result = a+b;
//    return result;
//}
//int subtract(int a, int b) {
//    int result = a-b;
//    return result;
//}
//int product(int a, int b) {
//    int result = a*b;
//    return result;
//}
//int division(int a, int b) {
//    int result = a/b;
//    return result;
//}
//int main() {
//    int x, y;
//    cin >> x >> y;
//    cout << "The sum is " << sum(x, y) << endl;
//    cout << "The subtract is " << subtract(x, y) << endl;
//    cout << "The product is " << product(x, y) << endl;
//    cout << "The division is " << division(x, y) << endl;
//}

//p10
//int getTriangularNumber(int n) {
//    int result = (n * (n + 1)) / 2;
//    return result;
//}
//
//int main() {
//    int totalTriangularNumbers = 75;
//    int numbersPerLine = 5;
//
//    cout << "First 75 Triangular Numbers:" <<endl;
//
//    for (int i = 1; i <= totalTriangularNumbers; ++i) {
//        int currentTriangularNumber = getTriangularNumber(i);
//
//        cout << currentTriangularNumber << " ";
//
//        if (i % numbersPerLine == 0) {
//            cout << endl;
//        }
//    }
//
//    return 0;
//}

//p11
//void displayEven(int num) {
//    cout << "Even digits are: " << endl;
//    while(num>0) {
//        int digit = num % 10;
//        if (digit % 2 == 0) {
//            cout << digit << endl;
//        }
//        num /= 10;
//    }
//    cout << endl;
//}
//int main() {
//    int a;
//    cin >> a;
//    displayEven(a);
//    return 0;
//}

//p12
//int cubeOfDigits(int number) {
//    int sum = 0;
//    while(number>0){
//        int digit = number % 10;
//        number = number / 10;
//        sum = sum + digit*digit*digit;
//    }
//    return sum;
//}
//void isArmstrong(int sum, int number) {
//    if ( sum == number) {
//        cout << "IS Armstrong" << endl;
//    } else {
//        cout << "NOT Armstrong" << endl;
//    }
//}
//int main() {
//    int a;
//    cin >> a;
//    int sumofCubes = cubeOfDigits(a);
//    isArmstrong(sumofCubes, a);
//}

//p13
//int numberOfDaysInFebruary(int year) {
//    if (year % 400 == 0 or (year % 4 == 0 and year % 100 !=0)) {
//        return 29;
//    }
//    else {
//        return 28;
//    }
//}
//int main(){
//    for (int year = 1983; year <= 2033; ++year) {
//        cout << "\t" << numberOfDaysInFebruary(year) << endl;
//    }
//}

//p14
//double futureInvestmentValue( double investmentAmount, double monthlyInterestRate, int years) {
//    int futureInvestmentValue = investmentAmount * pow(1 + monthlyInterestRate,years*12);
//    return futureInvestmentValue;
//}
//int main() {
//    double InvestmentAmount;
//    double AnnualInterestRate;
//    int years;
//
//    cout << "Investment Amount: " << InvestmentAmount << endl;
//    cin >> InvestmentAmount;
//    cout << "Annual Interest rate: " << AnnualInterestRate << endl;
//    cin >> AnnualInterestRate;
//
//    double monthlyInterestRate = AnnualInterestRate /100/12;
//
//    for (int i = 1; i <= 30 ; ++i) {
//        double futureValue = futureInvestmentValue(InvestmentAmount, AnnualInterestRate, years);
//        cout << setw(4) << years << "\t" << fixed << setprecision(2) << futureValue <<endl;
//    }
//}
//p15
//void printASCII(char ch1, char ch2, int numberPerLine) {
//    int count = 0;
//    for (int i = ch1; i <=ch2 ; ++i) {
//        cout << static_cast<int>(i) << " ";
//        count++;
//        if (count % numberPerLine == 0){
//            cout << endl;
//        }
//    }
//    cout << endl;
//}
//int main() {
//    char starChar = 'a';
//    char endChar = 'm';
//    int charPerLine = 6;
//    printASCII(starChar, endChar, charPerLine);
//    return 0;
//}

//p16
//void printMatrix(int n) {
//    srand(time(NULL));
//
//    int result = 0 + rand() % 1000;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << rand() << "\t" << endl;
//        }
//        cout << endl;
//    }
//}
//int main() {
//    int a;
//    cin >> a;
//    printMatrix(a);
//    return 0;
//}