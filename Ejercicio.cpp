#include <iostream>
using namespace std;

int main() {
    char palabra[100]; 
    int contador = 0;

    cout << "Ingrese una frase: ";
    
    cin.getline(palabra, 100);

    while (palabra[contador] != '\0') {
        contador++;
    }

    int palabras = 0;

    // Si el contador de caracteres es mayor a cero, significa que se escribió algo
    if (contador > 0) {
        palabras = 1; // Asumimos que hay al menos una primera palabra
    }

    // Recorremos el vector elemento por elemento desde 0 hasta N-1
    for (int i = 0; i < contador; i++) {
        
        // Cada vez que detectamos un espacio en blanco, significa que termina una palabra
        if (palabra[i] == ' ') {
            palabras++;
        }
    }

    // Resultados
    cout << "La frase tiene " << contador << " caracteres." << endl;
    cout << "La frase tiene " << palabras << " palabras." << endl;

    return 0;
}
