#include <bits/stdc++.h>
/*Saya Muhammad Azar Nuzy 2004191 mengerjakan Latihan 3 C1 dalam
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
using namespace std;
// mengimport kelas PC
#include "Pc.cpp"

int main()
{
    // instansiasi
    string processorName, diskType, diskCapacity, ramCapacity;
    int processorPrice, diskPrice, ramPrice;

    // membuat masukan
    cout << "Input\n";
    cout << "Processor Name: ";
    cin >> processorName;
    cout << "Processor Price: ";
    cin >> processorPrice;
    cout << "Disk Type: ";
    cin >> diskType;
    cout << "Disk Capacity: ";
    cin >> diskCapacity;
    cout << "Disk Price: ";
    cin >> diskPrice;
    cout << "Ram Capacity: ";
    cin >> ramCapacity;
    cout << "Ram Price: ";
    cin >> ramPrice;

    // buat objek processor
    Processor dataProcessor(processorName, processorPrice);

    // buat objek disk
    Disk dataDisk(diskType, diskCapacity, diskPrice);

    // buat objek ram
    Ram dataRam(ramCapacity, ramPrice);

    // buat objek PC
    Pc dataPc(dataProcessor, dataDisk, dataRam);

    // menampilkan hasil atribut yang ada pada kelas
    cout << "Output\n";
    dataPc.printPc();
}
