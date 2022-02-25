from Processor import Processor
from Disk import Disk
from Ram import Ram


class Pc:
    # private atribute dari kelas Pc
    __processorObj = Processor()
    __diskObj = Disk()
    __ramObj = Ram()
    __totalPrice = 0

    # konstruktor
    def __init__(self, processorObj, diskObj, ramObj):
        self.__processorObj = processorObj
        self.__diskObj = diskObj
        self.__ramObj = ramObj

    # mengeset nilai atribut processor
    def setProcessorObj(self, processorObj):
        self.__processorObj = processorObj

    # mengeset nilai atribut disk
    def setDiskObj(self, diskObj):
        self.__diskObj = diskObj

    # mengeset nilai atribut ram
    def setRamObj(self, ramObj):
        self.__ramObj = ramObj

    # mengeset nilai atribut totalPrice
    def setTotalPrice(self, processorPrice, diskPrice, ramPrice):
        self.__totalPrice = processorPrice + diskPrice + ramPrice

    # mengembalikan nilai atribut processor
    def getProcessorObj(self):
        return self.__processorObj

    # mengembalikan nilai atribut disk
    def getDiskObj(self):
        return self.__diskObj

    # mengembalikan nilai atribut ram
    def getRamObj(self):
        return self.__ramObj

    # mengembalikan nilai atribut totalPrice
    def getTotalPrice(self):
        return self.__totalPrice

    # menampilkan atribut Pc
    def printPc(self):
        self.__processorObj.printProcessor()
        self.__diskObj.printDisk()
        self.__ramObj.printRam()
        self.setTotalPrice(self.__processorObj.getPrice(),
                           self.__diskObj.getPrice(), self.__ramObj.getPrice())
        print("Total Price: " + str(self.getTotalPrice()))
