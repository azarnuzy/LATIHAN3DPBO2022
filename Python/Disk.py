# kelas yang digunakan untuk mengimplementasikan Disk
# kelas Disk
class Disk:
    # private atribute dari kelas Disk
    __type = ""
    __capacity = ""
    __price = 0

    def __init__(self, type="", capacity="", price=0):
        # konstruktor
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    # mengeset nilai atribut type
    def setType(self, type):
        self.__type = type

    # mengembalikan nilai atribut type
    def getType(self):
        return self.__type

    # mengeset nilai atribut capacity
    def setCapacity(self, capacity):
        self.__capacity = capacity

    # mengembalikan nilai atribut capacity
    def getCapacity(self):
        return self.__capacity

    # mengeset nilai atribut price
    def setPrice(self, price):
        self.__price = price

    # mengembalikan nilai atribut price
    def getPrice(self):
        return self.__price

    # menampilkan atribut Disk
    def printDisk(self):
        print("Type : " + self.getType())
        print("Capacity : " + self.getCapacity())
        print("Price : " + str(self.getPrice()))
