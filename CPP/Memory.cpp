#include <iostream>
#include <string>

using namespace std;

class Memory : public Hardware
{
    private:
        int frequency;
		int memorySize;
		string supportsCuda;

    public:

        Memory(int freq, int memo, string supp)
        {
            setFreq(freq);
            setMemo(memo);
            setSupp(supp);
        }
        Memory()
        {

        }

        void setFreq(int freq)
        {
            this->frequency = freq;
        }
        int getFreq()
        {
            return frequency;
        }

        void setMemo(int memo)
        {
            this->memorySize = memo;
        }
        int getMemo()
        {
            return memorySize;
        }

        void setSupp(string supp)
        {
            this->supportsCuda = supp;
        }
        string getSupp()
        {
            return supportsCuda;
        }

};