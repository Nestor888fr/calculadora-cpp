#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

double numero(string mensaje){
    double n;
    while(true){
        cout << mensaje;
        cin >> n;
        if(cin.fail()){
            cout << "No es un numero, intenta otra vez. \n";
            cin.clear();
            cin.ignore(1000, '\n');
        }else{
            return n;
        }
    }
}

int main(){

    char op;
    double num1, num2;
    double resultado;
    vector<string> historial;

    cout << "##### Calculadora Basica #####\n";

    while(true){ 
        cout << "Ingresa Operacion \n";
        cout << "[+] Suma   [-] Resta   [*]Multiplicacion \n";
        cout << "[/] Division   [^] Potencia   [r] Raiz Cuadrada \n";
        cout << "[c] Raiz cubica   [h] Ver Historial   [S] Salir \n";
        cin >> op;

        bool OperacionValida = (op == '+' || op == '-' || op == '*' || op == '/' || op == '^' || op == 'r' || op == 'c');
        bool Menu = (op == 'h' || op == 's' || op == 'H' || op == 'S');

        if(!OperacionValida && !Menu){
            cout << "Error: Ingresa solamente operadores validos\n";
            continue;
        }
        
        if(op == 'h' || op == 'H'){
            cout << "###Historial###" << endl;
            for(int i = 0; i < historial.size(); i++){
                cout << historial[i] << endl;
            }
            continue;
        }

        if(op == 'r' || op == 'R' || op == 'c' || op == 'C'){
            num1 = numero("Ingresa el numero: ");

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
        num1 = numero("Ingresa el Numero 1: \n");
        num2 = numero("Ingresa el Numero 2: \n");

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
