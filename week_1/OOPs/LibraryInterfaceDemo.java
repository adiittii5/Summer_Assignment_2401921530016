

interface LibraryUser{
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser{
    int age;
    String bookType;

    public KidUser(int age, String bookType){
        this.age=age;
        this.bookType=bookType;
    }
    public void registerAccount(){
        if(age<12){
            System.out.println("You have successfully registered under Kds Account");
        }else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    public void requestBook(){
        if(bookType=="Kids"){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser{
    int age;
    String bookType;

    public AdultUser(int age, String bookType){
        this.age=age;
        this.bookType=bookType;
    }
    public void registerAccount(){
        if(age<12){
            System.out.println("Sorry, Age must be greater than 12 to register under an Adult Account");
        }else{
            System.out.println("You have successfully registered under an Adult Account");
        }
    }
    public void requestBook(){
        if(bookType=="Adult"){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }else{
            System.out.println("Opps, you are allowed to take only adult books");
        }
    }
}


public class LibraryInterfaceDemo{
    public static void main(String []args){

        KidUser k1= new KidUser(10, "Kids");
        KidUser k2= new KidUser(18, "Fiction");
        k1.registerAccount();
        k2.registerAccount();
        k1.requestBook();
        k2.requestBook();

        AdultUser a1=new AdultUser(5, "Adult");
        AdultUser a2=new AdultUser(25 , "Kids");
        a1.registerAccount();
        a2.registerAccount();
        a1.requestBook();
        a2.requestBook();
    }


}
    

