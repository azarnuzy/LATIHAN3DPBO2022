#include <bits/stdc++.h>
using namespace std;

class Ram
// kelas yang digunakan untuk mengimplementasikan Ram
{
private:
    // private atribute dari kelas Ram
    string capacity;
    int price;

public:
    // konstruktor
    Ram() {}
    Ram(string capacity, int price)
    {
        this->capacity = capacity;
        this->price = price;
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

    // menampilkan atribut Ram
    void printRam()
    {
        cout << "Ram Capacity : " << this->getCapacity() << endl;
        cout << "Ram Price : " << this->getPrice() << endl;
    }

    // destructor
    ~Ram() {}
};