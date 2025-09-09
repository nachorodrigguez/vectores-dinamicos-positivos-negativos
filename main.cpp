#include <iostream>

using namespace std;

void mostrarVector(int vec[], int &tamanio){
    int i = 0;
    if (vec[i] < 0){
        for (i=0; i<tamanio; i++){
        cout << "Numero negativo  " << i+1 << " es : " << vec[i] << endl;
        }
    }
    else if (vec[i] > 0){
        for (i=0; i<tamanio; i++){
        cout << "Numero positivo  " << i+1 << " es : " << vec[i] << endl;
            }
        cout << "-----------------------------" << endl;
        }
}

int* cargarVec(int vec[], int vecNegativo[],int tamanio){
    for (int i=0; i<tamanio; i++){
            if (vecNegativo[i] == 0){
                vecNegativo[i] = vec[i];
            }
    }
    return vecNegativo;
}
int main()
{
    /// Inicializacicon de variables negativas
    int *vecNegativoDinamico, n,tamanioNegativo = 0;
    int vecNegativo [10]{};

    /// Inicializacion de variables positivas
    int *vecPositivoDinamico, tamanioPositivo = 0;
    int vecPositivo [10]{};

    for (int x=0; x<10; x++){
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n<0){
        tamanioNegativo = tamanioNegativo + 1;
        vecNegativoDinamico = new int [tamanioNegativo]{};
        vecNegativoDinamico[tamanioNegativo - 1] = n;
        cargarVec(vecNegativoDinamico, vecNegativo, tamanioNegativo);
        delete []vecNegativoDinamico;
        }
    else if (n>0){
        tamanioPositivo = tamanioPositivo + 1;
        vecPositivoDinamico = new int [tamanioPositivo]{};
        vecPositivoDinamico [tamanioPositivo - 1] = n;
        cargarVec(vecPositivoDinamico, vecPositivo, tamanioPositivo);
        delete []vecPositivoDinamico;
        }
    }
    mostrarVector(vecPositivo, tamanioPositivo);
    mostrarVector(vecNegativo, tamanioNegativo);
    return 0;
}
