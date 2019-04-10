/*
 alvina vania kirana
 140810180010
 b
 10 april 2019
 */

#include <iostream>
using namespace std;

struct {
    char npm;
    char nama;
    float ipk;
    elemenList* next;
};

typedef elemenList* pointer;
typedef pointer list;

void createList (list& first);
void createElemen (pointer& pBaru);
void insertSortIPK (list& first, pointer pBaru);
void traversal (list first);

int main() {
    pointer p;
    list first;
    
    int pilih;
    
    createList (first);
    
    while (1){
        cout << "1. Tambah Data Baru"<<endl;
        cout << "2. Lihat Data" << endl;
        cout << "3. Exit" <<endl;
        cout << "Masukkan Pilihan   :";
        cin >> pilih;
        switch(pilih){
            case 1:
                createElemen(p);
                insertSortIPK(first, p);
                traversal (first);
                break;
            case 2:
                traversal (first);
                break;
            case 3:
                return 0;
                break;
        }
    }
    return 0;
}

void createList (list& first){
    first=NULL;
}

void createElemen (pointer& pBaru){
    if (first==NULL){
        first=pBaru;
    }
    else {
        pBaru->next=first;
        first=pBaru;
    }
}

void insertSortIPK (list& first, pointer pBaru){
    if (first==NULL){
        first=pBaru;
    }
    else {
        pBaru->next=first;
        first=pBaru;
    }
}

void traversal (list first){
    pointer pBaru;
    
    cout <<"NPM                 NAMA                    IPK"<<endl;
    if (first==NULL){
        cout << "List Kosong"<<endl;
    }
    else{
        pBantu=first;
        do {
            cout <<pBantu->npm<<"                   "<<pBantu->Nama<<"                  "<<pBantu->ipk<<endl;
            pBantu=pBantu->next;
        }
        while (pBantu!=NULL);
    }
}
