#include <iostream>
using namespace std;

int main(){

    char op;
    double num1, num2;

    cout<< "##### Calculadora Basica #####\n";

    do{cout << "Ingresa el numero 1: \n";
    cin >> num1;
    cout << "Ingresa el numero 2: \n";
    cin >> num2;

    cout << "Ingresa Operacion (+ - * / o 's' si quieres salir ): \n";
   cin >> op;

   if(op == 's' || op == 'S'){
    cout << "Saliste del programa. \n";
    break;
   }

   switch(op){
    case '+':
        cout << "Resultado: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Resultado:  " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case '/':
        if(num2 == 0){
            cout << "No se puede dividir entre cero: \n";
        }else{
            cout << "Resultado: " << num1 / num2 << endl;
        }
        break;
    default: cout << "Error: Ingresa solamente operadores validos \n ";
    }
}while(true);

    return 0;
}
