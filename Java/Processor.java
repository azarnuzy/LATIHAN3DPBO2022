public class Processor {
    // private atribute dari kelas Processor
    private String name;
    private int price;

    // konstruktor
    Processor() {
    }

    Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    // mengeset nilai atribut name
    public void setName(String name) {
        this.name = name;
    }

    // mengembalikan nilai atribut name
    public String getName() {
        return this.name;
    }

    // mengeset nilai atribut price
    public void setPrice(int price) {
        this.price = price;
    }

    // mengembalikan nilai atribut price
    public int getPrice() {
        return this.price;
    }

    // menampilkan atribut Processor
    public void printProcessor() {
        System.out.println("Processor name : " + this.getName());
        System.out.println("Processor Price : " + this.getPrice());
    }
}
