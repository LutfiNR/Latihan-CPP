#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

//declaration
void choose();
void inputData();
string checkLulus();
void displayData();

//declaration struc Linked list
struct Mahasiswa{
    string nama,npm;
    int nilai;
    Mahasiswa *next;
};
Mahasiswa *baru, *first=NULL, *last=NULL, *current;

//prosedur pilih
void choose(int choice){
    if(choice==1){
        inputData();
    }
    else if(choice==2){
        displayData();
    }
    else{
        cout << "\n Have A Nice Day\n";
    }
}

//input data
void inputData(){
    baru = new Mahasiswa();
    cout<<"input NPM: ";
    cin>>baru->npm;
    cout<<"input Nama : ";
    cin.ignore();
    getline(cin,baru->nama);
    cout<<"input Nilai : ";
    cin>>baru->nilai;

    baru->next=NULL;

    if(first==NULL){
        first=baru;
    }else{
        last->next=baru;
    }
    last=baru;
    last->next=NULL;
}

//check kelulusan
string checkLulus(int nilai){
    string lulus = (nilai>=60) ? "Lulus":"Tidak";
    return lulus;
}

//display data
void displayData(){
    if (first==NULL){
        cout<<"Data Kosong! Silahkan Masukkan Data";
    }
    else{
        current=first;
        cout << endl;
        while(current != NULL){
            cout<<"NPM : "<<current->npm<<"    ";
            cout<<"Nama : "<<current->nama<<"    ";
            cout<<"Nilai : "<<current->nilai<<"    ";
            cout<<"Kelulusan : "<<checkLulus(current->nilai)<< endl;
            current=current->next;
            }
        }
    getch();
}
int main(){
    int choice;
    cout<<"NAMA : LUTFI NUR ROHMAN"<<endl;
    cout<<"NPM : 2213025064"<<endl;
    do{
        cout<<endl;
        cout<<"SINGLE LINKEDLIST BIODATA KELULUSAN MAHASISWA"<<endl;
        cout<<"**************************"<<endl;
        cout<<"1. Input Data"<<endl;
        cout<<"2. Display Data"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"**************************"<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>choice;
        cout << endl;
        choose(choice);
    } while(choice != 3);

    return 0;
}
