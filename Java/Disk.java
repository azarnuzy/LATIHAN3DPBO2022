// kelas yang digunakan untuk mengimplementasikan Disk
// kelas Disk
public class Disk {
    // private atribute dari kelas Disk
    private String type;
    private String capacity;
    private int price;

    // konstruktor
    Disk() {
    }

    Disk(String type, String capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    // mengeset nilai atribut type
    public void setType(String type) {
        this.type = type;
    }

    // mengembalikan nilai atribut type
    public String getType() {
        return this.type;
    }

    // mengeset nilai atribut capacity
    public void setCapacity(String capacity) {
        this.capacity = capacity;
    }

    // mengembalikan nilai atribut capacity
    public String getCapacity() {
        return this.capacity;
    }

    // mengeset nilai atribut price
    public void setPrice(int price) {
        this.price = price;
    }

    // mengembalikan nilai atribut price
    public int getPrice() {
        return this.price;
    }

    // menampilkan atribut Disk
    public void printDisk() {
        System.out.println("Type : " + this.getType());
        System.out.println("Capacity : " + this.getCapacity());
        System.out.println("Price : " + this.getPrice());
    }
}
