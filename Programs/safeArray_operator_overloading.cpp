#include <iostream>
using namespace std;
const int size = 10;
class SafeArray
{
    
    int arr[size];
public:
    SafeArray()
    {
        

        for (int i = 0; i < size; i++)
        {
            arr[i] = i;
        }
    }

    int operator[](int i)
    {
        return arr[i];
    }
};
int main()
{

    SafeArray s1;
    cout << s1[8];
}