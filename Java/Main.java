
// mengimport kelas utility
import java.util.Scanner;
/*Saya Muhammad Azar Nuzy 2004191 mengerjakan Latihan 3 C1 dalam 
mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

public class Main {
    public static void main(String[] args) {
        // variabel untuk masukan
        Scanner sc = new Scanner(System.in);
        // instansiasi
        String processorName = "", diskType = "", diskCapacity = "", ramCapacity = "";
        int processorPrice = 0, diskPrice = 0, ramPrice = 0;

        // input untuk setiap atribut yang ada
        System.out.println("Input: ");
        try {
            System.out.print("Processor Name: ");
            processorName = sc.next();
        } catch (Exception e) {
        }
        try {
            System.out.print("Processor Price: ");
            processorPrice = sc.nextInt();
        } catch (Exception e) {
        }
        try {
            System.out.print("Disk Type: ");
            diskType = sc.next();
        } catch (Exception e) {
        }
        try {
            System.out.print("Disk Capacity: ");
            diskCapacity = sc.next();
        } catch (Exception e) {
        }
        try {
            System.out.print("Disk Price: ");
            diskPrice = sc.nextInt();
        } catch (Exception e) {
        }
        try {
            System.out.print("Ram Capacity: ");
            ramCapacity = sc.next();
        } catch (Exception e) {
        }
        try {
            System.out.print("Ram Price: ");
            ramPrice = sc.nextInt();
        } catch (Exception e) {
        }

        // buat objek processor
        Processor dataProcessor = new Processor(processorName, processorPrice);

        // buat objek disk
        Disk dataDisk = new Disk(diskType, diskCapacity, diskPrice);

        // buat objek ram
        Ram dataRam = new Ram(ramCapacity, ramPrice);

        // buat objek PC
        Pc dataPc = new Pc(dataProcessor, dataDisk, dataRam);

        // menampilkan hasil atribut yang ada pada kelas
        System.out.println("\nOutput: ");
        dataPc.printPc();
    }
}