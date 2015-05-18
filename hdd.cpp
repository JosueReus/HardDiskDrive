#include "hdd.h"


HDD::HDD()
{

}

HDD::~HDD()
{

}

int HDD::getAvailableBlock()
{
    for(int x=0;x<disk.CantBloques;x++)
    {
        if(Blocks[x]==0)
            return x;
    }
    return -1;
}

int HDD::getAvailableINode()
{
    for(int x=0;x<disk.CantBloques;x++)
    {
        if(iNodeTable[x].available==true)
            return x;
    }
    return -1;
}

//void HDD::write(char* buffer,int posBuffer, int size, ofstream writer)
//{

//}

void HDD::initBitMap(int size)
{
    bitmap=new char[size];
    for(int x=0; x<size;x++)
    {
        bitmap[x]='0';
    }

}

void HDD::createDisk(string diskName, int diskSize, int blockSize,char partitionLetter)
{
     //putchar (toupper(partitionLetter));

    string name=diskName+"("+partitionLetter+")";
    ofstream hdd (name.c_str(),ios::binary | ios::app | ios::ate );

    strcpy(disk.NombreDisco,diskName.c_str());
    disk.bloqueSize=blockSize;
    disk.CantBloques=diskSize/512;
    disk.Particion=partitionLetter;
    disk.size=diskSize;
    disk.usedSpace=0;
    int num=diskSize/512;
    Blocks=new char[disk.CantBloques];
    initBitMap(disk.CantBloques);

    hdd.write((char*)&disk,sizeof(disk));
    hdd.close();
}

void HDD::diskSize(string nombre)
{


}

void HDD::writeOnDisk(char* name)
{/*
    filebuf *pbuf;
    char* buffer;
    ofstream destiny;
    //ifstream source;
    long size;

    ifstream source(name,ios::in|ios::ate|ios::binary);
    //source(name,ios::in|ios::ate|ios::binary);
    source.seekg(0);


    int numInode=getAvailableINode();
    int numBloque=getAvailableBlock();
    //int index=getAvailability;
    //Hacer Funcion


    pbuf=source.rdbuf();
    size=pbuf->pubseekoff(0,ios::end,ios::in);
    buffer=new char[size];
    pbuf->sgetn(buffer,size);
    source.close();

    long blocks=size/512;

    iNodos[numInode].size=size;
    iNodos[numInode].bloquesUsados;

    destiny.open(name, ios::out | ios::binary |ios::app);*/

    //write(name,index,size,destiny);



}


void HDD::printBitmap()
{
    for(int x=0;x<disk.CantBloques;x++)
    {
        cout<<bitmap[x]<<endl;
    }

}

