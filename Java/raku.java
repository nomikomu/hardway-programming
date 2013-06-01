import java.util.Scanner;
class raku{
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    haku hakuObj = new haku();

    System.out.println("Enter namu: ");
    String namu = input.nextLine();

    hakuObj.smplMsg(namu);
  }
}
