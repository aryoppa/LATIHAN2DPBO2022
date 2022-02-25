import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int price = 0;
        String Id_product = "";
        String brand = "";
        String model = "";
        int freq = 0;
        int memo = 0;
        String supp = "";

        int n = 0;
        System.out.print("Masukkan banyaknya item: ");
        try{
            n = sc.nextInt();
        }catch(Exception e){};

        Memory order[] = new Memory[n];

        for(int i=0; i<n; i++)
        {
            order[i] = new Memory();

            System.out.println("====================");
            System.out.println("Data pesanan ke-" + (i+1));
            System.out.print("Harga          : ");
            try{
                price = sc.nextInt();
            }catch(Exception e){};
            order[i].setPrice(price);

            System.out.print("Id-Product     : ");
            try{
                Id_product = sc.next();
            }catch(Exception e){};
            order[i].setIdProduct(Id_product);

            System.out.print("Merek          : ");
            try{
                brand = sc.next();
            }catch(Exception e){};
            order[i].setBrand(brand);

            System.out.print("Model          : ");
            try{
                model = sc.next();
            }catch(Exception e){};
            order[i].setModel(model);

            System.out.print("Frekuensi (MHz): ");
            try{
                freq = sc.nextInt();
            }catch(Exception e){};
            order[i].setFreq(freq);

            System.out.print("Memori (GB)    : ");
            try{
                memo = sc.nextInt();
            }catch(Exception e){};
            order[i].setMemo(memo);

            System.out.print("Cuda Support (Y/N): ");
            try{
                supp = sc.next();
            }catch(Exception e){};
            order[i].setSupp(supp);
        }
        
        System.out.println("====================");
        for(int i = 0; i<n; i++)
        {
            System.out.print(i+1 + ". ");
            System.out.println("ID Product: " + order[i].getIdProduct());
            System.out.println("   Harga     : " + order[i].getPrice());
            System.out.println("   Merek     : " + order[i].getBrand());
            System.out.println("   Model     : " + order[i].getModel());
            System.out.println("   Frekuensi : " + order[i].getFreq());
            System.out.println("   Memori    : " + order[i].getMemo());
            System.out.print("   ");             

            if(order[i].getSupp().equals("Y"))
            {
                System.out.print("VGA ini Cuda Support.\n");
            }
            else{
                System.out.print("VGA ini tidak Cuda Support.\n");
            }
            
            System.out.println("====================");
        }
        System.out.println("====================");
        
    }






}