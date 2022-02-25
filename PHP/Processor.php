<?php
class Processor
{
    // private atribute dari kelas Processor
    private $name;
    private $price;

    // konstruktor
    function __construct($name, $price)
    {
        $this->name = $name;
        $this->price = $price;
    }

    // mengeset nilai atribut name
    function setName($name)
    {
        $this->name = $name;
    }

    // mengembalikan nilai atribut name
    function  getName()
    {
        return $this->name;
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

    // menampilkan atribut Processor
    function printProcessor()
    {
        echo "Processor name : " . $this->getName() . "<br>";
        echo "Processor Price : " . $this->getPrice() . "<br>";
    }

    function __destruct()
    {
    }
}
