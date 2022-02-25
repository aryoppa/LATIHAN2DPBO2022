public class Product {

    private int price;
    private String idProduct;

    // constructor
    public Product(int price, String idProduct) 
    {
        setPrice(price);
        setIdProduct(idProduct);
    }

    public Product() 
    {

    }

    public void setPrice(int price) 
    {
        this.price = price;        
    }
    public int getPrice() 
    {
        return this.price;        
    }

    public void setIdProduct(String idProduct) 
    {
        this.idProduct = idProduct;
    }
    public String getIdProduct() 
    {
        return this.idProduct;
    }
}