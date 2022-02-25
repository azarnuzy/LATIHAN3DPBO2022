# mengimport kelas
from Pc import Pc
from Processor import Processor
from Disk import Disk
from Ram import Ram
""" Saya Muhammad Azar Nuzy 2004191 mengerjakan Latihan 3 C1 dalam
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin """

# Membuat variabel untuk dijadikan masukan
processorName = ""
diskType = ""
diskCapacity = ""
ramCapacity = ""
processorPrice = 0
diskPrice = 0
ramPrice = 0

# membuat masukan
print("Input: ")
processorName = str(input("Processor Name: "))
processorPrice = int(input("Processor Price: "))
diskType = str(input("Disk Type: "))
diskCapacity = str(input("Disk Capacity: "))
diskPrice = int(input("Disk Price: "))
ramCapacity = str(input("Ram Capacity: "))
ramPrice = int(input("Ram Price: "))

# buat objek processor
dataProcessor = Processor(processorName, processorPrice)

# buat objek disk
dataDisk = Disk(diskType, diskCapacity, diskPrice)

# buat objek ram
dataRam = Ram(ramCapacity, ramPrice)

# buat objek PC
dataPc = Pc(dataProcessor, dataDisk, dataRam)

# menampilkan hasil atribut yang ada pada kelas
print("Output")
dataPc.printPc()
