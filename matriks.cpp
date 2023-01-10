/*  
Nama    Lutfi Nur Rohman
NPM     2213025064

jawaban: 
1. Matriks dalam c++ adalah array dua dimensi
2. Menggunakan Matriks, Anda dapat menyimpan begitu banyak data pada satu saat,
yang dapat diteruskan di sejumlah fungsi kapan pun diperlukan.
*/

#include <iostream>
#include <time.h>
using namespace std;


//decalaration
int matrix1[10][10];//matrix with size 10x10
int matrix2[10][10];
int sumMatrix[10][10];
int multipleMatrix[10][10];
int transposeMatriks[10][10];
int determinanMatriks;
int ordo;


//procedure to input value of matriks by user
void inputMatriks(){
    srand(time(NULL));
    for (int i = 0; i < ordo; i++)
    {
        for (int x = 0; x < ordo; x++)
        {
            matrix1[i][x]= rand()%5;
            matrix2[i][x]= rand()%5;
        }
    }
}

//procedure to show the value of matrix
void showMatriks(){
    cout << "\nMatriks 1| Matriks 2"<< endl;
    for (int i = 0; i < ordo; i++)
    {
        for (int x = 0; x < ordo; x++)
        {
            cout << matrix1[i][x]<< "  ";
        }
        cout << "\t | ";
        for (int x = 0; x < ordo; x++)
        {
        cout<<matrix2[i][x]<< "  ";
        }
        cout << endl;
    }
}

void sumOfMatriks(){
    for (int i = 0; i < ordo; i++)
    {
        for (int x = 0; x < ordo; x++)
        {
            sumMatrix[i][x] = matrix1[i][x] + matrix2[i][x];
        }
    }
    cout << endl;
    for (int i = 0; i < ordo; i++)
    {
        for (int x = 0; x < ordo; x++)
        {
            cout << sumMatrix[i][x]<< "  ";
        }
        cout << endl;
    }
}

void multiplyOfMatriks(){
    for (int i = 0; i < ordo; i++)
    {
        for (int x = 0; x < ordo; x++)
        {
            multipleMatrix[i][x]=0;
            for (int y = 0; y < ordo; y++)
            {        
            multipleMatrix[i][x] =multipleMatrix[i][x] + (matrix1[i][y] * matrix2[y][x]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < ordo; i++)
    {
        for (int x = 0; x < ordo; x++)
        {
            cout << multipleMatrix[i][x]<< "  ";
        }
        cout << endl;
    }
}

void transposeOfMatriks(){
    for (int i = 0; i < ordo; i++)
    {
        for (int x = 0; x < ordo; x++)
        {
            transposeMatriks[i][x]= matrix1[x][i];
            cout << transposeMatriks[i][x]<< "  ";
        }
        cout << endl;
    }
}
int determinanOfMatriks(){
    determinanMatriks = (matrix1[0][0] * matrix1[1][1]) - (matrix1[0][1]*matrix1[1][0]);
    return determinanMatriks;
}
int main()
{
    cout << "Masukan ordo Matriks (max 10): ";
    cin >> ordo;

    inputMatriks();//call procedure
    showMatriks();//call the procedure
    cout << "\nHasil Jumlah 2 Matriks";
    sumOfMatriks();
    cout << "\nHasil Kali 2 Matriks";
    multiplyOfMatriks();
    cout << "\nTranspose Matriks 1\n";
    transposeOfMatriks();
    if (ordo==2){
        cout << "\nDeterminan Matriks 1\n" << determinanOfMatriks()<< endl;
    }else{
        return 0;
    }
    return 0;
}