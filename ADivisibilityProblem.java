import java.util.*;

public class ADivisibilityProblem{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        for(int i=0; i<n; i++){
            int div = sc.nextInt();
            int d = sc.nextInt();

            int rem = div%d;
            if(rem!=0){
                rem = d-rem;
            }
            System.out.println(rem);
        }

    }
}