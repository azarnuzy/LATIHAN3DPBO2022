<?php
// kelas yang digunakan untuk mengimplementasikan Disk
class Disk
{
    // private atribute dari kelas Disk
    private $type = "";
    private $capacity = "";
    private $price = 0;

    function __construct($type = "", $capacity = "", $price = 0)
    {
        // konstruktor
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }
    // mengeset nilai atribut type
    function setType($type)
    {
        $this->type = $type;
    }
    // mengembalikan nilai atribut type
    function getType()
    {
        return $this->type;
    }
    // mengeset nilai atribut capacity
    function setCapacity($capacity)
    {
        $this->capacity = $capacity;
    }
    // mengembalikan nilai atribut capacity
    function getCapacity()
    {
        return $this->capacity;
    }
    // mengeset nilai atribut price
    function setPrice($price)
    {
        $this->price = $price;
    }
    // mengembalikan nilai atribut price
    function getPrice()
    {
        return $this->price;
    }
    // menampilkan atribut Disk
    function printDisk()
    {
        echo "Type : " . $this->getType() . "<br>";
        echo "Capacity : " . $this->getCapacity() . "<br>";
        echo "Price : " . $this->getPrice() . "<br>";
    }

    function __destruct()
    {
    }
}
