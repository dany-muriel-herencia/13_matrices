#include<iostream>

using namespace std;
int main(){
         int n,a,matris[100][100];
         cout<<"ingrese la matris cuadrada";cin>>n;
         a=n-1;
             
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==n-1 || j==0 ){
            matris[i][j]=1;
            }
            else {
            matris[i][j]=0;

    }
    }
    }
    
            for(int k=0 ;k<n;k++){
                for (int j = 0; j < n; j++) {
                cout<<matris[k][j]<<" ";   
                }
            cout<<endl;
            }





    
    return 0;

}