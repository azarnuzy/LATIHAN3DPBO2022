#include <bits/stdc++.h>
using namespace std;

class Processor
// kelas yang digunakan untuk mengimplementasikan Processor
{
private:
    // private atribute dari kelas Processor
    string name;
    int price;

public:
    // konstruktor
    Processor() {}
    Processor(string name, int price)
    {
        this->name = name;
        this->price = price;
    }

    // mengeset nilai atribut name
    void setName(string name)
    {
        this->name = name;
    }
    // mengembalikan nilai atribut name
    string getName()
    {
        return this->name;
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

    // menampilkan atribut Processor
    void printProcessor()
    {
        cout << "Processor name : " << this->getName() << endl;
        cout << "Processor Price : " << this->getPrice() << endl;
    }

    // destructor
    ~Processor() {}
};