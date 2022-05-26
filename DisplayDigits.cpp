#include<iostream>
using namespace std;

class Digits
{
    private:
        int iNo;
    
    public:
        void Accept()
        {
            cout<<"Enter the number : "<<endl;
            cin>>this->iNo;
        }

        void DisplayDigits()
        {
            int iDigit = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                printf("%d\n",iDigit);
                iNo = iNo / 10;
            }
        }
};

int main()
{
    Digits obj;

    obj.Accept();
    obj.DisplayDigits();

    return 0;
}