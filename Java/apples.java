import java.util.Scanner;

class apples{
  //method
  public static void main(String args[]){
    //get input
    Scanner sax = new Scanner(System.in);
    Scanner bax = new Scanner(System.in);

    //small calc
    /*
      double fnum, snum, anwser;
      System.out.println("num one: ");
      fnum = bax.nextDouble();
      System.out.println("num two: ");
      snum = bax.nextDouble();
      anwser = fnum + snum;
      System.out.println("out: ");
      System.out.print(anwser);
    */

    //varible
    /*
      double tuna;
      tuna = 3.14;
    */
    
    //print basic stuff
    /*
      System.out.println("I want ");
      System.out.print(tuna);
      System.out.println(" movies");
      System.out.println("apples");
    */

    int girls, boys, people;
    girls = 7;
    boys = 3;
    people = girls % boys; //modulus - remainder
    System.out.println(people);

    //print sax in nextLine
    //System.out.println(sax.nextLine());
  }
}
