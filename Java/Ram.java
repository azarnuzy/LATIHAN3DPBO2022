public class Ram {
    // private atribute dari kelas Ram
    private String capacity;
    private int price;

    // konstruktor
    Ram() {
    }

    Ram(String capacity, int price) {
        this.capacity = capacity;
        this.price = price;
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

    // menampilkan atribut Ram
    public void printRam() {
        System.out.println("Ram Capacity : " + this.getCapacity());
        System.out.println("Ram Price : " + this.getPrice());
    }
}
