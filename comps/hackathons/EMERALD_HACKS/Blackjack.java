package comps.hackathons.EMERALD_HACKS;
import java.util.Scanner;
import java.util.*;
 
public class Blackjack {
   public static void main(String[] args) {
        String anotherCard, redo = "y", ctn = null;
        //initalizing the variables to be used
        int next;int c1;int c2;int dX;int dY;int pTotal = 0;int dTotal = 0;
        Scanner n = new Scanner(System.in);Random random = new Random();
        while ("y".equals(redo)) {
         dX = random.nextInt(10) + 1;
         dY = random.nextInt(10) + 1;
            c1 = random.nextInt(10) + 1;
            c2 = random.nextInt(10) + 1;
            pTotal = c1 + c2;
            dTotal = dX + dY;
            System.out.println( "Dealer has: " + "\033[1;31m" + dX + "\u001B[0m");
            System.out.println("Cards: " + "\033[1;32m" + c1 + ", " + c2 + "\u001B[0m");
            System.out.println("Total: " + "\033[1;36m" + pTotal + "\u001B[0m");
            System.out.println("Another Card? (y or n): ");
            anotherCard = n.nextLine();
            while ("y".equals(anotherCard)) {
                next = random.nextInt(10) + 1;
                pTotal += next;
                System.out.println("Card: " + "\033[1;32m" + next + "\u001B[0m");
                System.out.println("Total: " + "\u001B[32m" + pTotal + "\u001B[0m");
                if (pTotal > 21) {
                    System.out.println("\033[1;31m" + "Bust dealer wins" + "\u001B[0m");
                    System.out.println("wanna play again? y/n");
                    redo = n.nextLine();
                }
                if (pTotal < 21)
                    System.out.println("Another Card (y/n)?: ");
                anotherCard = n.nextLine();
                if ("n".equals(anotherCard))
                    System.out.println("Dealer had: " + dTotal);
                System.out.println("You had: " + "\033[1;32m"+ pTotal + "\u001B[0m");
                while ("n".equals(anotherCard)) {
                    if (dTotal < pTotal && pTotal < 21) {
                        System.out.println("\033[1;33m" + "Winner winner chicken dinner" + "\u001B[0m");
                        System.out.println("Play again? (y/n): ");
                        redo = n.nextLine();
                        if (redo.equalsIgnoreCase("y"))
                            redo = "y";
                        if (dTotal > pTotal && dTotal < 21)
                            System.out.println("\u001B[32m" + "Went over, lost" + "\u001B[0m");
                        if (dTotal == pTotal)
                           System.out.println("\u001B[35m" + "Tied so house wins lmao" + "\u001B[0m");
                           redo = n.nextLine();
                  }
                }
            }
        }
    }
    
}


