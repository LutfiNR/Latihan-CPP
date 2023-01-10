#include <iostream>
using namespace std;


int array1[3][3];
int array2[3][3];
int hasilJumlah[3][3];
int panjang1=sizeof(array1[0])/sizeof(int);
int panjang2=sizeof(array2[0])/sizeof(int);


void masukanArray1 (){
    for (int i = 0; i < panjang1; i++)
    {
        for (int x = 0; x < panjang2; x++)
        {
            cout << "Data Ke (" << i << "," << x << ") = ";
            cin >> array1[i][x];
        }
    }
}
void masukanArray2 (){
    for (int i = 0; i < panjang1; i++)
    {
        for (int x = 0; x < panjang2; x++)
        {
            cout << "Data Ke (" << i << "," << x << ") = ";
            cin >> array2[i][x];
        }
    }
}

void lihatArray(){
    for (int i = 0; i < panjang1; i++)
    {
        for (int x = 0; x < panjang2; x++)
        {
            cout << array1[i][x] << "  ";
        }
        cout << "\t|\t";
        for (int x = 0; x < panjang2; x++)
        {
            cout << array2[i][x] << "  ";
        }
        cout << endl;
    }
}

void jumlah(){
    for (int i = 0; i < panjang1; i++)
    {
        for (int x = 0; x < panjang2; x++)
        {
            hasilJumlah[i][x] = array1[i][x] + array2[i][x]; 
        }
    }
}

void hasil(){
    for (int i = 0; i < panjang1; i++)
    {
        for (int x = 0; x < panjang2; x++)
        {
            cout << hasilJumlah[i][x] << "   ";
        }
    cout << endl;
    }
}
int main(){

    cout << "Masukan Nilai Matrix 1 :" << endl;
    masukanArray1();
    cout << "\nMasukan Nilai Matrix 2 :" << endl;
    masukanArray2();

    cout << "\nNilai Matrix 1 dan 2 :" << endl;
    lihatArray();

    jumlah();
    cout << "\nHasil Penjumlahan Kedua Matrix :\n";
    hasil();

    return 0;
}

