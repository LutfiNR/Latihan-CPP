#include <iostream>

using namespace std;

// deklarasi node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// fungsi memasukan node dan membuat tree jika kosong
void insert(Node*& root, int data) {
    if (root == nullptr) {
        root = new Node{data, nullptr, nullptr};
        return;
    }

    if (data < root->data) {
        insert(root->left, data);
    } else {
        insert(root->right, data);
    }
}

// display dengan pre order
void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// display dengan inorder
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// display dengan postorder
void postorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    int choice;
    int data;
    Node* tree;
    
    cout<<"NAMA : LUTFI NUR ROHMAN"<<endl;
    cout<<"NPM : 2213025064"<<endl;
    do{
        cout<<endl;
        cout<<"SINGLE LINKEDLIST BIODATA KELULUSAN MAHASISWA"<<endl;
        cout<<"**************************"<<endl;
        cout<<"1. Insert/create Node"<<endl;
        cout<<"2. Display PreOrder"<<endl;
        cout<<"3. Display InOrder"<<endl;
        cout<<"4. Display PostOrder"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"**************************"<<endl;
        cout<<"Inputkan Pilihan Anda : ";
        cin>>choice;
        cout << endl;
        if(choice==1){
            printf("\nData baru : ");
            scanf("%d", &data);
            insert(tree,data);
        }
        else if(choice==2)
            preorder(tree);
        else if(choice==3)
            inorder(tree);
        else if(choice==4)
            postorder(tree);
        else{
            cout << "\n Have A Nice Day\n";
        }
    } while(choice != 5);
}