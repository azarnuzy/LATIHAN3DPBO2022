#include <bits/stdc++.h>
using namespace std;

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

class Pc
// kelas yang digunakan untuk mengimplementasikan Pc
{
private:
    // private atribute dari kelas Pc
    Processor processorObj;
    Disk diskObj;
    Ram ramObj;
    int totalPrice;

public:
    // konstruktor
    Pc() {}
    Pc(Processor processorObj, Disk diskObj, Ram ramObj)
    {
        this->processorObj = processorObj;
        this->diskObj = diskObj;
        this->ramObj = ramObj;
    }

    // mengeset nilai atribut processor
    void setProcessorObj(Processor processorObj)
    {
        this->processorObj = processorObj;
    }
    // mengeset nilai atribut disk
    void setDiskObj(Disk diskObj)
    {
        this->diskObj = diskObj;
    }
    // mengeset nilai atribut ram
    void setRamObj(Ram ramObj)
    {
        this->ramObj = ramObj;
    }
    // mengeset nilai atribut totalPrice
    void setTotalPrice(int processorPrice, int diskPrice, int ramPrice)
    {
        this->totalPrice = processorPrice + diskPrice + ramPrice;
    }

    // mengembalikan nilai atribut processor
    Processor getProcessorObj()
    {
        return this->processorObj;
    }
    // mengembalikan nilai atribut disk
    Disk getDiskObj()
    {
        return this->diskObj;
    }
    // mengembalikan nilai atribut ram
    Ram getRamObj()
    {
        return this->ramObj;
    }
    // mengembalikan nilai atribut totalPrice
    int getTotalPrice()
    {
        return this->totalPrice;
    }
    // menampilkan atribut Pc
    void printPc()
    {
        this->processorObj.printProcessor();
        this->diskObj.printDisk();
        this->ramObj.printRam();
        this->setTotalPrice(this->processorObj.getPrice(), this->diskObj.getPrice(), this->ramObj.getPrice());
        cout << "Total Price: " << this->getTotalPrice() << endl;
    }

    // destructor
    ~Pc() {}
};