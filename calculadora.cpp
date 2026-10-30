#include <iostream>
using namespace std;

int main(){

    char op;
    double num1;
    double num2;

    cout<< "##### Calculadora Basica #####\n";

    cout << "Ingresa el numero 1: \n";
    cin >> num1;
    cout << "Ingresa el numero 2: \n";
    cin >> num2;

   cout << "Ingresa Operacion (+ - * /): \n";
   cin >> op;


   switch(op){
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        if(num2 == 0){
            cout << "No se puede dividir entre cero: ";
        }else{
            cout << num1 / num2;
        }
        break;
    default: cout << "Error: Ingresa solamente operadores validos ";

   }

    return 0;
}