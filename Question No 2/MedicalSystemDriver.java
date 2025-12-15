import java.util.ArrayList;
import java.util.Scanner;

interface Payable {
    double getPaymentAmount();
}

class Doctor {
    private String docName;
    private int docID;
    private double docFee;

    public Doctor(String docName, int docID, double docFee) {
        this.docName = docName;
        this.docID = docID;
        this.docFee = docFee;
    }

    public int getDocID() {
        return docID;
    }

    public double getDocFee() {
        return docFee;
    }

    @Override
    public String toString() {
        return String.format("Dr. %s (ID: %d) | Fee: $%.2f", docName, docID, docFee);
    }
}

class Patient {
    private String pName;
    private int pID;
    private String pDisease;

    public Patient(String pName, int pID, String pDisease) {
        this.pName = pName;
        this.pID = pID;
        this.pDisease = pDisease;
    }

    @Override
    public String toString() {
        return String.format("Patient: %s (ID: %d) | Disease: %s", pName, pID, pDisease);
    }
}

class Medicine {
    private int medID;
    private String medName;
    private int medQty;
    private double medPrice;

    public Medicine(int medID, String medName, int medQty, double medPrice) {
        this.medID = medID;
        this.medName = medName;
        this.medQty = medQty;
        this.medPrice = medPrice;
    }

    public double getMedicineTotalCost() {
        return medQty * medPrice;
    }

    @Override
    public String toString() {
        return String.format("%s (x%d) @ $%.2f", medName, medQty, medPrice);
    }
}

class MedicalTest {
    private int testID;
    private String testName;
    private double testPrice;

    public MedicalTest(int testID, String testName, double testPrice) {
        this.testID = testID;
        this.testName = testName;
        this.testPrice = testPrice;
    }

    public double getTestPrice() {
        return testPrice;
    }

    @Override
    public String toString() {
        return String.format("%s @ $%.2f", testName, testPrice);
    }
}

class Billing implements Payable {
    private Doctor doctor;
    private Patient patient;

    private ArrayList<Medicine> medicines; 
    private ArrayList<MedicalTest> tests;

    public Billing(Doctor doctor, Patient patient) {
        this.doctor = doctor;
        this.patient = patient;
        this.medicines = new ArrayList<>();
        this.tests = new ArrayList<>();
    }

    // Helper methods to add items to the bill
    public void addMedicine(Medicine med) {
        medicines.add(med);
    }

    public void addTest(MedicalTest test) {
        tests.add(test);
    }

    // Required method to return Doctor object
    public Doctor getDoc() {
        return doctor;
    }

    @Override
    public double getPaymentAmount() {
        double total = doctor.getDocFee();

        for (Medicine m : medicines) {
            total += m.getMedicineTotalCost();
        }

        for (MedicalTest t : tests) {
            total += t.getTestPrice();
        }
        return total;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("---------------- BILL ----------------\n");
        sb.append(patient).append("\n");
        sb.append(doctor).append("\n");
        sb.append("Medicines: ").append(medicines).append("\n");
        sb.append("Tests: ").append(tests).append("\n");
        sb.append(String.format("TOTAL PAYABLE: $%.2f\n", getPaymentAmount()));
        return sb.toString();
    }
}

public class MedicalSystemDriver {
    public static void main(String[] args) {
        
        // --- PREPARATION: Create Data Objects ---
        Doctor doc1 = new Doctor("Smith", 1, 100.0);
        Doctor doc2 = new Doctor("Strange", 2, 200.0); // ID is 2

        Patient p1 = new Patient("John Doe", 101, "Flu");
        Patient p2 = new Patient("Alice", 102, "Infection");
        Patient p3 = new Patient("Bob", 103, "Allergy");

        Medicine m1 = new Medicine(1, "Panadol", 2, 10.0); // Cost 20
        Medicine m2 = new Medicine(2, "Antibiotic", 1, 50.0); // Cost 50
        Medicine m3 = new Medicine(3, "Syrup", 1, 30.0); // Cost 30

        MedicalTest t1 = new MedicalTest(1, "Blood Test", 40.0);
        MedicalTest t2 = new MedicalTest(2, "X-Ray", 100.0);


        ArrayList<Payable> billingList = new ArrayList<>();

     
        Billing b1 = new Billing(doc1, p1);
        b1.addMedicine(m1);
        b1.addMedicine(m2);
        b1.addTest(t1);
        billingList.add(b1);

    
        Billing b2 = new Billing(doc2, p2);
        b2.addMedicine(m1);
        b2.addMedicine(m2);
        b2.addMedicine(m3);
        b2.addTest(t1);
        b2.addTest(t2);
        billingList.add(b2);


        Billing b3 = new Billing(doc2, p3);
        b3.addMedicine(m1);
        b3.addMedicine(m2);
        b3.addMedicine(m3);
        b3.addTest(t1);
        b3.addTest(t2);
        billingList.add(b3);

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a billing amount to search for: ");
        double userAmount = scanner.nextDouble();

        System.out.println("\n--- Bills greater than or equal to $" + userAmount + " ---");
        
        
        for (Payable p : billingList) {
            if (p.getPaymentAmount() >= userAmount) {
                System.out.println(p.toString());
            }
        }

   
        System.out.println("--- Extracting Doctors with ID 2 ---");
        
        Doctor[] specialDoctors = new Doctor[2]; 
        int index = 0;

        for (Payable p : billingList) {
            if (p instanceof Billing) {
                Billing bill = (Billing) p; 
                
                if (bill.getDoc().getDocID() == 2) {
                    if (index < specialDoctors.length) {
                        specialDoctors[index] = bill.getDoc();
                        System.out.println("Added to array: " + specialDoctors[index]);
                        index++;
                    }
                }
            }
        }
        
        scanner.close();
    }
}