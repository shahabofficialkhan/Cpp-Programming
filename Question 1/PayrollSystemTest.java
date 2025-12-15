
class Date {
    private int month; // 1-12
    private int day;   // 1-31
    private int year;  // any year

    public Date(int month, int day, int year) {
        if (month <= 0 || month > 12) {
            throw new IllegalArgumentException("month (" + month + ") must be 1-12");
        }
        if (day <= 0 || day > 31) {
            throw new IllegalArgumentException("day (" + day + ") out of range");
        }
        this.month = month;
        this.day = day;
        this.year = year;
    }

    public int getMonth() {
        return month;
    }

    @Override
    public String toString() {
        return String.format("%d/%d/%d", month, day, year);
    }
}


abstract class Employee {
    private final String firstName;
    private final String lastName;
    private final String socialSecurityNumber;
    private final Date birthDate;

    public Employee(String firstName, String lastName, String socialSecurityNumber, Date birthDate) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.socialSecurityNumber = socialSecurityNumber;
        this.birthDate = birthDate;
    }

    public String getFirstName() { return firstName; }
    public String getLastName() { return lastName; }
    public String getSocialSecurityNumber() { return socialSecurityNumber; }
    public Date getBirthDate() { return birthDate; }

    @Override
    public String toString() {
        return String.format("%s %s%nsocial security number: %s%nbirth date: %s", 
            getFirstName(), getLastName(), getSocialSecurityNumber(), getBirthDate());
    }

    // Abstract method must be overridden by subclasses
    public abstract double earnings();
}

// -------------------------------------------------------
// 3. SUBCLASS: SalariedEmployee
// -------------------------------------------------------
class SalariedEmployee extends Employee {
    private double weeklySalary;

    public SalariedEmployee(String first, String last, String ssn, Date dob, double weeklySalary) {
        super(first, last, ssn, dob);
        setWeeklySalary(weeklySalary);
    }

    public void setWeeklySalary(double weeklySalary) {
        if (weeklySalary < 0.0) throw new IllegalArgumentException("Weekly salary must be >= 0.0");
        this.weeklySalary = weeklySalary;
    }

    @Override
    public double earnings() { return weeklySalary; }

    @Override
    public String toString() {
        return String.format("salaried employee: %s%nweekly salary: $%,.2f", 
            super.toString(), weeklySalary);
    }
}


class HourlyEmployee extends Employee {
    private double wage;
    private double hours;

    public HourlyEmployee(String first, String last, String ssn, Date dob, double wage, double hours) {
        super(first, last, ssn, dob);
        this.wage = wage;
        this.hours = hours;
    }

    public void setWage(double wage) { this.wage = wage; }
    public void setHours(double hours) { this.hours = hours; }

    @Override
    public double earnings() {
        if (hours <= 40) return wage * hours;
        else return 40 * wage + (hours - 40) * wage * 1.5;
    }

    @Override
    public String toString() {
        return String.format("hourly employee: %s%nhourly wage: $%,.2f; hours worked: %,.2f", 
            super.toString(), wage, hours);
    }
}

class CommissionEmployee extends Employee {
    private double grossSales;
    private double commissionRate;

    public CommissionEmployee(String first, String last, String ssn, Date dob, 
                              double grossSales, double commissionRate) {
        super(first, last, ssn, dob);
        this.grossSales = grossSales;
        this.commissionRate = commissionRate;
    }

    public double getGrossSales() { return grossSales; }
    public double getCommissionRate() { return commissionRate; }

    @Override
    public double earnings() { return getCommissionRate() * getGrossSales(); }

    @Override
    public String toString() {
        return String.format("commission employee: %s%ngross sales: $%,.2f; commission rate: %.2f", 
            super.toString(), grossSales, commissionRate);
    }
}


class BasePlusCommissionEmployee extends CommissionEmployee {
    private double baseSalary;

    public BasePlusCommissionEmployee(String first, String last, String ssn, Date dob, 
                                      double grossSales, double commissionRate, double baseSalary) {
        super(first, last, ssn, dob, grossSales, commissionRate);
        setBaseSalary(baseSalary);
    }

    public void setBaseSalary(double baseSalary) {
        if (baseSalary < 0.0) throw new IllegalArgumentException("Base salary must be >= 0.0");
        this.baseSalary = baseSalary;
    }

    public double getBaseSalary() { return baseSalary; }

    @Override
    public double earnings() { return getBaseSalary() + super.earnings(); }

    @Override
    public String toString() {
        return String.format("base-salaried %s; base salary: $%,.2f", 
            super.toString(), getBaseSalary());
    }
}


class PieceWorker extends Employee {
    private double wage;  // wage per piece
    private int pieces;   // number of pieces produced

    public PieceWorker(String firstName, String lastName, String socialSecurityNumber, Date birthDate, 
                       double wage, int pieces) {
        super(firstName, lastName, socialSecurityNumber, birthDate);
        if (wage < 0.0) throw new IllegalArgumentException("Wage must be >= 0.0");
        if (pieces < 0) throw new IllegalArgumentException("Pieces must be >= 0");
        this.wage = wage;
        this.pieces = pieces;
    }

    public double getWage() { return wage; }
    public int getPieces() { return pieces; }

    @Override
    public double earnings() {
        return getWage() * getPieces();
    }

    @Override
    public String toString() {
        return String.format("piece worker: %s%n%s: $%,.2f; %s: %d",
            super.toString(), "wage per piece", getWage(), "pieces produced", getPieces());
    }
}


public class PayrollSystemTest {
    public static void main(String[] args) {
        
        // Assume current processing month is October (10)
        int currentMonth = 10;
        System.out.println("Processing Payroll for Month: " + currentMonth);
        System.out.println("----------------------------------------------");

        Employee[] employees = new Employee[5];

        // 1. Salaried Employee
        employees[0] = new SalariedEmployee("John", "Smith", "111-11-1111", 
            new Date(1, 15, 1990), 800.00);
            
        // 2. Hourly Employee (Birthday matches current month 10)
        employees[1] = new HourlyEmployee("Karen", "Price", "222-22-2222", 
            new Date(10, 12, 1995), 16.75, 40); 
            
        // 3. Commission Employee
        employees[2] = new CommissionEmployee("Sue", "Jones", "333-33-3333", 
            new Date(3, 5, 1988), 10000, .06);
            
        // 4. BasePlusCommission Employee
        employees[3] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 
            new Date(5, 5, 1992), 5000, .04, 300);
            
        // 5. PieceWorker (Birthday matches current month 10)
        employees[4] = new PieceWorker("Mike", "Worker", "555-55-5555", 
            new Date(10, 20, 1998), 2.5, 200); 

        // Loop through employees polymorphically
        for (Employee currentEmployee : employees) {
            
            System.out.println(currentEmployee); // Invoke toString

            // Requirement: Increase Base Salary by 10% for BasePlusCommissionEmployee
            if (currentEmployee instanceof BasePlusCommissionEmployee) {
                BasePlusCommissionEmployee employee = (BasePlusCommissionEmployee) currentEmployee;
                double oldBase = employee.getBaseSalary();
                double newBase = oldBase * 1.10;
                employee.setBaseSalary(newBase);
                System.out.printf(" >> Base Salary increased by 10%% to: $%,.2f%n", newBase);
            }

            // Calculate Earnings
            double earnings = currentEmployee.earnings();

            // Requirement: Add $100 bonus if (Birthday Month == Current Month) OR (Employee is BasePlusCommission)
            if (currentEmployee.getBirthDate().getMonth() == currentMonth || 
                currentEmployee instanceof BasePlusCommissionEmployee) {
                
                earnings += 100.00;
                System.out.println(" >> Bonus Applied ($100.00): [Birthday Month or BasePlus Employee]");
            }

            System.out.printf("Total Earnings: $%,.2f%n%n", earnings);
            System.out.println("----------------------------------------------");
        }
    }
}