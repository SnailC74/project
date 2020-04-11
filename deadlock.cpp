//
//  This is going to explain that the deadlock using threads
//

public class StudentAccount {
  private:
  String name;
  doublic balance;
  
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
