#include<iostream>
using namespace std;
int main(){
    int filas,columnas,matris[100][100];
    cout<<"ingrese el numero de filas: ";
    cin>>filas;
    cout<<"ingrese el numero de coliumnas: ";
    cin>>columnas;
    for(int i=0 ;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"ingrese un numero en la matris: ";
            cin>>matris[i][j];        }
    }
    //imprime la matris
        for(int k=0 ;k<filas;k++){
            for(int l=0;l<columnas;l++){
                cout<<matris[k][l]<<" ";   
                }
            cout<<endl;
    }

    int suma = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = i + 1; j < filas; ++j) {
            suma += matris[i][j];
        }
    }

    cout << "La sumatoria de los elementos por encima de la diagonal principal es: " << suma << std::endl;

    return 0;
}
