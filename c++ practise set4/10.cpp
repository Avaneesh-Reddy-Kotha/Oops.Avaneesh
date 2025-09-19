#include <iostream>
#include <string>
using namespace std;
class Fraction
{
public:
    int num;
    int dem;
    Fraction()
    {
        num = 0;
        dem = 1;
    }
    Fraction(int num)
    {
        this->num = num;
        dem = 1;
    }
    Fraction(int num, int dem)
    {
        this->num = num;
        this->dem = dem;
    }
    void simp_fract()
    {
        int gcd = 1;
        int sm;
        if (num < dem)
        {
            sm = num;
        }
        else
        {
            sm = dem;
        }
        for (int i = 1; i <= sm; i = i + 1)
        {
            if (num % i == 0 and dem % i == 0)
            {
                gcd = i;
            }
            
        }
            int simp_num = (num / gcd);
            int simp_dem = (dem / gcd);
            cout << "Simplest form of Fraction is : " << simp_num << "/" << simp_dem << endl;
    
}};    
    int main()
    {
        Fraction f1, f2(5), f3(10, 5);
        f1.simp_fract();
        f2.simp_fract();
        f3.simp_fract();
        return 0;
    }