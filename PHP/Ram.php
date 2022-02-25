<?php
class Ram
{
    // private atribute dari kelas Ram
    private $capacity;
    private $price;

    // konstruktor
    function __construct($capacity, $price)
    {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // mengeset nilai atribut capacity
    function setCapacity($capacity)
    {
        $this->capacity = $capacity;
    }

    // mengembalikan nilai atribut capacity
    function  getCapacity()
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

    // menampilkan atribut Ram
    function printRam()
    {
        echo "Ram Capacity : " . $this->getCapacity() . "<br>";
        echo "Ram Price : " . $this->getPrice() . "<br>";
    }

    function __destruct()
    {
    }
}
