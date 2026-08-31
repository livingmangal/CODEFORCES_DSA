import java.util.Scanner;
public class AHulk{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        String h = "I hate ";
        String l = "I love ";
        StringBuilder o = new StringBuilder();

        o.append(h);
        for(int i=1; i<n; i++){

            o.append("that ");
            if(i%2==0){
                o.append(h);
            }else{
                
                o.append(l);
            }
            

        }
        o.append("it");
        System.out.println(o);

    }

}