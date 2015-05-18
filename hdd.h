#ifndef HDD_H
#define HDD_H
#include <fstream>
#include <string>
#include <string.h>
#include<iostream>
//#include"directblock.h"

using namespace std;


struct superBlock{

    char Particion;
    char NombreDisco[25];
    int size;
    int usedSpace;
    int bloqueSize;
    int CantBloques;
};//42 bytes;

struct iNodo{

int size;
char perms[2];
char FechaC[10];
char FechaM[10];
int bloquesUsados;
//directBlock directB;
int indirectos_Simples;

};

struct iNodes{
    char nombre[30];
    int iNode;
    bool available;
};



class HDD
{
public:
    HDD();
    void createDisk(string diskName, int diskSize, int blockSize,char partitionLetter);
    void writeOnDisk(char* name);
    void diskSize(string nombre);
    void initBitMap(int size);
    void printBitmap();
    superBlock disk;

    iNodes iNodeTable[100];
    iNodo iNodos[100];
    char* Blocks;
    int getAvailableINode();
    int getAvailableBlock();
    int getAvailability();
    char* bitmap;
    void write(char* buffer,int posBuffer, int size, ofstream writer);

    ~HDD();
};

#endif // HDD_H
