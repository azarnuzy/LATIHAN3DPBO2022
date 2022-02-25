#include <bits/stdc++.h>
using namespace std;

class Disk
// kelas yang digunakan untuk mengimplementasikan Disk
{
private:
    // private atribute dari kelas Disk
    string type;
    string capacity;
    int price;

public:
    // konstruktor
    Disk() {}
    Disk(string type, string capacity, int price)
    {
        this->type = type;
        this->capacity = capacity;
        this->price = price;
    }

    // mengeset nilai atribut type
    void setType(string type)
    {
        this->type = type;
    }

    // mengembalikan nilai atribut type
    string getType()
    {
        return this->type;
    }

    // mengeset nilai atribut capacity
    void setCapacity(string capacity)
    {
        this->capacity = capacity;
    }

    // mengembalikan nilai atribut capacity
    string getCapacity()
    {
        return this->capacity;
    }

    // mengeset nilai atribut price
    void setPrice(int price)
    {
        this->price = price;
    }

    // mengembalikan nilai atribut price
    int getPrice()
    {
        return this->price;
    }

    // menampilkan atribut Disk
    void printDisk()
    {
        cout << "Disk Type : " << this->getType() << endl;
        cout << "Disk Capacity : " << this->getCapacity() << endl;
        cout << "Disk Price : " << this->getPrice() << endl;
    }

    // destructor
    ~Disk() {}
};