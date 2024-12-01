/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

void llenarDatos(int V[] , int n)
{
    for (int i=0; i<n; i++) {
        V[i] = rand() % 50 + 1;
    }
}
void ver(int V[], int n) {
    for (int i=0; i<n; i++) {
        cout << V[i] << " ";
    }
}
int busquedaBinaria(int V[], int n, int el) {
    int inicio, fin, medio;
    inicio = 0;
    fin = n-1;
    while (inicio <= fin) {
        medio = inicio + (fin - inicio) / 2;
        if (V[medio] == el) {
            return medio;
        }
        else if (el > V[medio]) {
            inicio = medio + 1;
        }
        else {
            fin = medio - 1;
        }
    }
    return -1;
}
void ordenar(int V[], int n) {
    int i,j, aux;
    for (i=0; i<n; i++)
        for (j=0; j<n-1; j++) {
            if (V[j] > V[j+1]) {
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;    
            }
        }
}
int main()
{
    int V[10], e, encontrado;
    llenarDatos(V, 10);
    ver(V, 10);
    ordenar(V, 10);
    cout << endl;
    ver(V, 10);
    cout << "Valor a buscar: ";
    cin >> e;
    encontrado = busquedaBinaria(V, 10, e);
    if (encontrado == -1)
        cout << "No se ha encontrado el elemento";
    else 
        cout << "El elemento " << e << " se encontro en la posicion " << encontrado;

    return 0;
}

