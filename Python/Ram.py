# kelas yang digunakan untuk mengimplementasikan Ram
class Ram:
    # private atribute dari kelas Ram
    capacity = ""
    price = 0

    # konstruktor
    def __init__(self, capacity="", price=0):
        self.__capacity = capacity
        self.__price = price

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

    # menampilkan atribut Ram
    def printRam(self):
        print("Ram Capacity : " + self.getCapacity())
        print("Ram Price : " + str(self.getPrice()))
