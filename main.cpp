#include <cstdlib>

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include <string.h>

#define maks 500

using namespace std;

class Enkripsi{

public:

Enkripsi();

void enkripsi();

void deskripsi();

void output();

private:

char chiper[maks];

int key;

char plain[maks];

};

Enkripsi::Enkripsi(){

cout<<“Masukkan kata / kalimat = “;

cin.getline(chiper,sizeof(chiper));

cout<<“Masukkan key = “;

cin>>key;

cout<<endl;

}

void Enkripsi::enkripsi(){

for(int i=0;i<strlen(chiper);i+=1){

cout<<chiper[i]<<“(“<<int(chiper[i])<<“) “;

chiper[i] = (chiper[i]+key)%256;

}

}

void Enkripsi::deskripsi(){

for(int i=0;i<strlen(chiper);i+=1){

plain[i] = (chiper[i]-key)%256;

chiper[i] = plain[i];

}

}

void Enkripsi::output(){

for(int i=0;i<strlen(chiper);i+=1){

cout<<chiper[i];

}

}

int main(int argc, char *argv[])

{

Enkripsi Deskripsi;

Deskripsi.enkripsi();

cout<<“\n\nSetelah di Enkripsi = “;

Deskripsi.output();

Deskripsi.deskripsi();

cout<<“\n\nKembali di Deskripsi = “;

Deskripsi.output();

cout<<endl<<endl;

system(“PAUSE”);

return EXIT_SUCCESS;

}
