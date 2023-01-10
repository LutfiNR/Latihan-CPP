#include <iostream>
#include <time.h>// untuk srand
using namespace std;

string opsi[3]= {"Batu","Gunting","Kertas"};//array
string pilCom;//variable
int lagiTidak;//variable

//prosedur menampilan nilai array
void liatArray(){
    //perulangan
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1<< ") " << opsi[i]<<"   ";
    }
    
}
//prosedur komputer memilih
void komputer(){
    srand(time(0));
    pilCom = opsi[rand()%3];
}
//fungsi
string menangKalah(int i){
    string hasil;
    //percabangan
    if (i == 1){
        if (pilCom == opsi[0]){
            hasil = "Seri";
        }else if (pilCom == opsi[1]){
            hasil = "Menang";
        }else{
            hasil = "Kalah";
        }
    }
    if (i == 2){
        if (pilCom == opsi[0]){
            hasil = "Kalah";
        }else if (pilCom == opsi[1]){
            hasil = "Seri";
        }else{
            hasil = "Menang";
        }
    }
    if (i == 3){
        if (pilCom == opsi[0]){
            hasil = "Menang";
        }else if (pilCom == opsi[1]){
            hasil = "Kalah";
        }else{
            hasil = "Seri";
        }
    }
    return hasil;
}
int main()
{
    int pilUser;
    cout << "SUIT GAME" << endl;
    cout << "-------------------------------------" << endl;
    cout << endl;
    //perulangan
    do{
    cout << "Pilih Nomor Yang Akan Di gunakan" << endl;
    liatArray();
	cout << "\nMasukan Pilihan: ";
    cin >> pilUser;
    komputer();
    cout << "Komputer : " <<pilCom<<endl;
    cout << "Kamu : " << opsi[pilUser-1]<<endl;
    cout << menangKalah(pilUser);
    cout << endl;
    cout << "\nApakah Ingin Bermain Lagi?\n1) Ya\n2) Tidak" << endl;
    cin >> lagiTidak;
    if (lagiTidak != 1){
        break;
        } 
    }while (lagiTidak);
}
