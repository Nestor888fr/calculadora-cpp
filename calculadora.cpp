#include <iostream>
#include <cmath>

using namespace std;

int main(){

    char op;
    double num1, num2;
    double base, exponente;

    cout<< "##### Calculadora Basica #####\n";

    while(true){ 
        cout << "Ingresa Operacion (+ - * / ^ r o 's' si quieres salir ): \n";
        cin >> op;
       
        if(op == 'r' || op == 'R'){
            cout << "Ingresa el numero: ";
            cin >> num1;
            
        if(num1 < 0){
            cout << "No se le puede sacar raiz a un numero negativo: \n";
        }else{
            cout << "Resultado: " << sqrt(num1) << endl;
            continue;
        }
    } 
        if(op == 's' || op == 'S'){
            cout << "Saliste del programa. \n";
            break;
   }
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '^') {
            cout << "Error: Ingresa solamente operadores validos\n";
            continue;
        }

        cout << "Ingresa el numero 1: \n";
        cin >> num1;

        cout << "Ingresa el numero 2: \n";
        cin >> num2;


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
    case '^':
        cout << "Resultado: " << pow(num1, num2) << endl;
        break;
    }
}
    return 0;
}
