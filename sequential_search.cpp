#include <iostream>

using namespace std;

int A[10]={3, 25, 75, 5, 10, 1, 18, 50, 35, 25};
int n = sizeof(A)/sizeof(A[0]);
void sequential_search();
void choose();

void choose(int choice){
    if(choice==1){
        sequential_search();
    }
    else{
        cout << "\n Have A Nice Day\n";
    }
}
void sequential_search(){
    int key;
    cout << "Masukan Data Yang Ingin Di Cari : ";
    cin >> key;
    for (int i = 0; i < n; i++){
        if (key==A[i]){
            cout << "\nData "<< key <<" Ditemukan Pada Index "<<i<<endl;
            break;
        }
        cout << "\nTidak Ada"<<endl;
        break;
    }
}

int main(){
    int choice;
    cout<<"NAMA : LUTFI NUR ROHMAN"<<endl;
    cout<<"NPM : 2213025064"<<endl;
    do{
        cout<<endl;
        cout<<"MENCARI DATA METODE SEQUENTIAL"<<endl;
        cout<<"**************************"<<endl;
        cout<<"1. Cari Data"<<endl;
        cout<<"2. Exit"<<endl;
        cout<<"**************************"<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>choice;
        cout << endl;
        choose(choice);
    } while(choice != 2);

    return 0;
}