#include<iostream>
using namespace std;

template<class T>
class MarvellousArray
{
    private:
        T *Arr;
        int iSize;
    public:
        MarvellousArray(int Size)
        {
            cout<<"Inside parametrised constructor"<<"\n";
            Arr=new T[Size];
            iSize=Size;
        }
        void InputArray()
        {
            cout<<"Enter the elements of the array : "<<"\n";
            for(int i=0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
        }
        void DisplayArray()
        {
            cout<<"Elements of the array are : "<<"\n";
            for(int i=0;i<iSize;i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        void CheckEven()
        {
            cout<<"Even elements from the array are : "<<"\n";
            for(int i=0;i<iSize;i++)
            {
                if((Arr[i]%2) == 0)
                {
                    cout<<Arr[i]<<"\n";
                }
            }
        }


};

int main()
{
    int iSize=0;
    cout<<"Enter size of the array : "<<"\n";
    cin>>iSize;

    MarvellousArray <int>mobj(iSize);
    mobj.InputArray();
    mobj.DisplayArray();
    mobj.CheckEven();

    MarvellousArray <float>mobj1(iSize);
    mobj1.InputArray();
    mobj1.DisplayArray();
    mobj1.CheckEven();

    return 0;
}