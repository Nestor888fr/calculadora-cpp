#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(){

    char op;
    double num1, num2;
    double resultado;
    vector<string> historial;

    cout << "##### Calculadora Basica #####\n";

    while(true){ 
        cout << "Ingresa Operacion [+, -, *, /, ^, r, c, h] o 's' si quieres salir ) \n";
        cin >> op;
        
        if(op == 'h' || op == 'H'){
            cout << "###Historial###" << endl;
            for(int i = 0; i < historial.size(); i++){
                cout << historial[i] << endl;
            }
            continue;
        }

        if(op == 'r' || op == 'R' || op == 'c' || op == 'C'){
            cout << "Ingresa el numero ";
            cin >> num1;
        if(num1 < 0){
            cout << "No se le puede sacar raiz a un numero negativo: \n";
        }else{
            if (op == 'r' || op == 'R'){
            resultado = sqrt(num1);
            cout << "Resultado: " << resultado << endl;
            historial.push_back("Raiz Cuadrada de " + to_string(num1) + " = " + to_string(resultado));
            continue;
            }else{
                resultado = cbrt(num1);
                cout << "Raiz cubica: " << resultado << endl;
                 historial.push_back("Raiz Cubica de " + to_string(num1) + " = " + to_string(resultado));
            }
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
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
          historial.push_back(to_string(num1) + " + " + to_string(num2) + " = " + to_string(resultado));
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
         historial.push_back(to_string(num1) + " - " + to_string(num2) + " = " + to_string(resultado));
        break;
    case '*':
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
         historial.push_back(to_string(num1) + " * " + to_string(num2) + " = " + to_string(resultado));
        break;
    case '/':
        if(num2 == 0){
            cout << "No se puede dividir entre cero: \n";
        }else{
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
            historial.push_back(to_string(num1) + " / " + to_string(num2) + " = " + to_string(resultado));
        }
        break;
    case '^':
        resultado = pow(num1, num2);
        cout << "Resultado: " << resultado << endl;
        historial.push_back(to_string(num1) + " ^ " + to_string(num2) + " = " + to_string(resultado));
        break;
    }
}
    return 0;
}
