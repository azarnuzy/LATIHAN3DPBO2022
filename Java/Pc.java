public class Pc {
    // private atribute dari kelas Pc
    private Processor processorObj;
    private Disk diskObj;
    private Ram ramObj;
    private int totalPrice;

    // konstruktor
    Pc() {
    }

    Pc(Processor processorObj, Disk diskObj, Ram ramObj) {
        this.processorObj = processorObj;
        this.diskObj = diskObj;
        this.ramObj = ramObj;
    }

    // mengeset nilai atribut processor
    public void setProcessorObj(Processor processorObj) {
        this.processorObj = processorObj;
    }

    // mengeset nilai atribut disk
    public void setDiskObj(Disk diskObj) {
        this.diskObj = diskObj;
    }

    // mengeset nilai atribut ram
    public void setRamObj(Ram ramObj) {
        this.ramObj = ramObj;
    }

    // mengeset nilai atribut totalPrice
    public void setTotalPrice(int processorPrice, int diskPrice, int ramPrice) {
        this.totalPrice = processorPrice + diskPrice + ramPrice;
    }

    // mengembalikan nilai atribut processor
    public Processor getProcessorObj() {
        return this.processorObj;
    }

    // mengembalikan nilai atribut disk
    public Disk getDiskObj() {
        return this.diskObj;
    }

    // mengembalikan nilai atribut ram
    public Ram getRamObj() {
        return this.ramObj;
    }

    // mengembalikan nilai atribut totalPrice
    public int getTotalPrice() {
        return this.totalPrice;
    }

    // menampilkan atribut Pc
    public void printPc() {
        this.processorObj.printProcessor();
        this.diskObj.printDisk();
        this.ramObj.printRam();
        this.setTotalPrice(this.processorObj.getPrice(), this.diskObj.getPrice(), this.ramObj.getPrice());
        System.out.println("Total Price: " + this.getTotalPrice());
    }
}
