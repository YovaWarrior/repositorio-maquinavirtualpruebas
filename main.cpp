#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; /* inicializar arreglo con 10 enteros*/
    int sum = 0; // Empiezo la suma en 0

    // recorrer el arreglo y agregar cada elemento a la suma
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    /* imprimir la suma en la consola*/
    cout << "La suma de los elementos del arreglo es: " << sum << endl;

    int arr2[6] = {10, 5, 20, 15, 25, 30}; // inicializar arreglo con 6 enteros
    int gran = arr2[0]; // suponga que el primer elemento es el más grande

    // recorrer el arreglo y actualizar la más grande si se encuentra un elemento más grande
    for (int f = 1; f < 6; f++) {
        if (arr2[f] > gran) {
            gran = arr2[f];
        }
    }

    // imprime el elemento más grande en la consola
    cout << "El elemento más grande del arreglo es: " << gran << endl;

    int arr3[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // inizializar el arreglo con 8 enteros

    // recorre la mitad del arreglo e intercambie cada elemento con su contraparte en el otro lado
    for (int i = 0; i < 4; i++) {
        int temp = arr3[i]; // almacenar elemento actual en variable temporal
        arr3[i] = arr3[7-i]; // establecer el elemento actual a su contraparte en el otro lado
        arr3[7-i] = temp; // establecer la contraparte de la variable temporal almacenada
    }

    // imprime el arreglo invertido en la consola
    cout << "El arreglo invertido es: ";
    for (int h = 0; h < 8; h++) {
        cout << arr3[h] << " ";
    }
    cout << endl;

    int arr4[10] = {1, 2, 3, 8, 5, 6, 7, 25, 9, 40}; // Inizializar el arreglo con 10 enteros
    int sum2 = 0; // inicializar la variable para contener la suma de los elementos del arreglo


    // recorrer el arreglo y agregar cada elemento a la variable de suma
    for (int r = 0; r < 10; r++) {
        sum2 += arr4[r];
    }

    // imprime la suma de los elementos del arreglo en la consola
    cout << "La suma de los elementos del arreglo es: " << sum2 << endl;

    string frutas[9] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"}; // initialize array with fruits
    unordered_map<string, int> cuenta; // declarar unordered_map para contener conteos de cada fruta

    // recorrer el arreglo e incrementar el recuento de cada fruta en unordered_map
    for (int t = 0; t < 9; t++) {
        cuenta[frutas[t]]++;
    }

    // imprime los conteos de cada fruta a la consola
    for (auto const& x : cuenta) {
        cout << "Aqui hay " << x.second << " " << x.first << endl;
    }

    return 0;
}
