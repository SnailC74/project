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
    StudentAccount

