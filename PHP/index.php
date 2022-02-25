<?php

/*Saya Muhammad Azar Nuzy 2004191 mengerjakan Latihan 3 C1 dalam
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
// mengimport kelas PC
include "Pc.php";

// instansiasi
// membuat masukan

// buat objek processor
$dataProcessor = new Processor("Intel Core I5", 500000);

// buat objek disk
$dataDisk = new Disk("SSD", "512GB", 800000);

// buat objek ram
$dataRam = new Ram("16GB", 400000);

// buat objek PC
$dataPc = new Pc($dataProcessor, $dataDisk, $dataRam);

// menampilkan hasil atribut yang ada pada kelas
$dataPc->printPc();
