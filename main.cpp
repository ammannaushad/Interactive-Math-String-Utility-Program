#include <iostream>
#include <string>

using namespace std;

int main () {
int menu,factorial,number,rows,sumEven,sumOdd,choose,sum,N;  //all cases
factorial= 1; // case 1
char choice; //case 3
string reverse,reversed; //case 4

cout<< "----- Interactive Utility Program -----"<<endl;
cout<< "1. Factorial Calculator"<<endl;
cout<< "2. Number Pyramid"<<endl;
cout<< "3. Sum of Even or Odd Numbers"<<endl;
cout<< "4. Reverse a String"<<endl;
cout<< "5. Exit"<<endl;

do {
    cout<< "Enter your choice: ";
    cin>> menu;


switch (menu) {
case 1: {                           
cout<< "Enter a positive integer: ";
cin>> number;
if (number < 0) {
cout<< "Enter a positive integer"<<endl;
    break;
}
factorial = 1;
int i = 1;
while (i <= number) {
factorial *= i;
i++;
}
cout<< "Factorial of " <<number<< " is: "<<factorial<<endl;
    break;
}

case 2: {
cout<< "Enter number of rows: ";
cin>> rows;
for (int i= 1; i <= rows; i++) {
for (int j= 1; j<= rows - i; j++) {
cout << " ";
    }
for (int j= 1; j<= i; j++) {
cout <<j<< " ";
    }
cout<<endl;
    }
    break;
}


case 3: {
do {
cout<< "Choose sum of even (1) or odd numbers (2): ";
cin>> choose;
if (choose != 1 && choose != 2) {
cout<< "Error. Choose sum of even (1) or odd numbers (2)"<<endl;
}
} while (choose != 1 && choose != 2);

cout<< "Upper Limit (N): ";
cin>> N;

sumEven= 0;
sumOdd= 0;

if (choose == 1) {
for (int i = 0; i <= N; i += 2) {
sumEven += i;
    }
cout<< "Sum of even numbers up to " <<N<< ": " <<sumEven<<endl;

} else if (choose == 2) {
for (int i = 1; i <= N; i += 2) {
sumOdd += i;
    }
cout<< "Sum of odd numbers up to " <<N<< ": " <<sumOdd<<endl;
} else {
cout<< "Error. Choose sum of even (1) or odd numbers (2): "<<endl;
    }
    break;
}
    

case 4: {
cout<< "Enter a string: ";
cin>> reverse;
int len = reverse.length();
reversed= "";
int i = len - 1;
while (i >= 0) {
reversed += reverse[i];
    i--;
}
cout<< "Reversed string: " <<reversed<<endl;
    break;
}

case 5: {
cout<< "Exit. Goodbye"<<endl;
    break;
}

default:
cout<< "Error"<<endl;
    break;
}

} while (menu != 5); 


    return 0;
}
