#include"iostream"
#include"iomanip"
using namespace std;
int main()
{
    
    double k=0,sum=0,s=0,a=0;
    int i=0;
    //cin>>n;
    double ar[5];
    for(i=0;i<5;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<5;i++)
    {
        if(ar[i]>100)
        {
           k=((ar[i]*20)/100);
           s=ar[i]-k;
           a+=s;
        }
        else
        {
            sum+=ar[i];
        }
    }
   // cout<<s<<endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    //std::cout << d;
    cout<<sum+s<<endl;
}
