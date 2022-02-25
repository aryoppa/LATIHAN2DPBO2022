public class Memory extends Hardware{

    private int freq;
    private int memo;
    private String supp;

    public Memory(int freq, int memo, String supp) 
    {
        setFreq(freq);
        setMemo(memo);
        setSupp(supp);
    }

    public Memory() {

    }

    public void setFreq(int frequency) 
    {
        this.freq = frequency;
    }
    public int getFreq() 
    {
        return this.freq;
    }

    public void setMemo(int memorySize) 
    {
        this.memo = memorySize;
    }
    public int getMemo() 
    {
        return this.memo;
    }

    public void setSupp(String supportsCuda) 
    {
        this.supp = supportsCuda;
    }
    public String getSupp() 
    {
        return this.supp;
    }

}