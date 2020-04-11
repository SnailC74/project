//
//  This is going to explain that the deadlock using threads
//

public class StudentAccount {
  private String name;
  private doublic balance;
  
  public StudentAccount(string name) {
    this.name = name;
  }
  
  public void withdraw(double balance) {
    this.balance -= balance;
  }
  
  public void deposit(double balance) {
    this.balance += balance;
  }
  
  public double getBalance() {
    return this.balance;
  }
  
  public String toString() {
        return name;
  }
}

public class Transfer extends threads {
  private String id;
  private StudentAccount from;
  private studentAccount to;
  private double amount;
  
  public Transfer(String id, StudentAccount from, StudentAccount to, double amount) {
    this.id = id;
    this .from = from;
    this.to = to;
    this.amount = amount;
  }
  
  public void move() {
    synchronized (from) {
      from.withdraw(amount);
            try {
                Thread.sleep(500);
                } catch (InterruptedException e) { }
                synchronized (to) {
                  to.deposit(amount);
                }
    }
    System.out.println(amount + "is transfered from " + from + " to " + to);
  }
}

public class Main {
  public static void main(String[] args) {
    StudentAccount sa1 = new StudentAccount("StudentAccount1");
    StudentAccount sa2 = new StudentAccount("StudentAccount2");
    
    sa1.deposit(500.00);
    sa2.deposit(500.00);
    
    Transfer t1 = new Transfer("T1", sa1, sa2, 100.00);
    Transfer t2 = new Transfer("T2", sa2, sa1, 200.00);
    
    t1.start();
    t2.start();
  }
}
    
