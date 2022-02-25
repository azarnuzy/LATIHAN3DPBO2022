<?php
include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc
{
    // private atribute dari kelas Pc
    private $processorObj;
    private $diskObj;
    private $ramObj;
    private $totalPrice;

    // konstruktor
    function __construct($processorObj, $diskObj, $ramObj)
    {
        $this->processorObj = $processorObj;
        $this->diskObj = $diskObj;
        $this->ramObj = $ramObj;
    }

    // mengeset nilai atribut processor
    function  setProcessorObj($processorObj)
    {
        $this->$processorObj = $processorObj;
    }

    // mengeset nilai atribut disk
    function  setDiskObj($diskObj)
    {
        $this->$diskObj = $diskObj;
    }

    // mengeset nilai atribut ram
    function  setRamObj($ramObj)
    {
        $this->ramObj = $ramObj;
    }

    // mengeset nilai atribut totalPrice
    function  setTotalPrice($processorPrice, $diskPrice, $ramPrice)
    {
        $this->totalPrice = $processorPrice + $diskPrice + $ramPrice;
    }

    // mengembalikan nilai atribut processor
    function getProcessorObj()
    {
        return $this->processorObj;
    }

    // mengembalikan nilai atribut disk
    function getDiskObj()
    {
        return $this->diskObj;
    }

    // mengembalikan nilai atribut ram
    function getRamObj()
    {
        return $this->ramObj;
    }

    // mengembalikan nilai atribut totalPrice
    function getTotalPrice()
    {
        return $this->totalPrice;
    }

    // menampilkan atribut Pc
    function  printPc()
    {
        $this->processorObj->printProcessor();
        $this->diskObj->printDisk();
        $this->ramObj->printRam();
        $this->setTotalPrice($this->processorObj->getPrice(), $this->diskObj->getPrice(), $this->ramObj->getPrice());
        echo "Total Price: " . $this->getTotalPrice() . "<br>";
    }

    function __destruct()
    {
    }
}
