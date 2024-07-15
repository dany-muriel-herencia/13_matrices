#include<iostream>

using namespace std;
int main(){
         int n,matris[100][100];
         cout<<"ingrese la matris cuadrada";cin>>n;
             
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"ingrese un numero en la matris: ";
            cin>>matris[i][j];        }
    }
    int suma=0;
    //imprime la matris
        for(int k=0 ;k<n;k++){
            for(int l=0;l<n;l++){
                 cout<<matris[k][l]<<" ";
            }
            cout<<endl;

        }
    
    for(int y=0;y<n;y++){
            suma+=matris[y][n-1-y];
        }
    
    cout<<suma;

    return 0;
}