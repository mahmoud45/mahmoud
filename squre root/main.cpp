#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float x;
    int a=0;
    int b=0;
    cout<<"enter number"<<endl;
    cin>>x;
    if(x==1){
        cout<<"The square root of "<<x<<" is "<<x<<endl;
        return 0;
    }
    for(int i=x;i>0;i--){
        for(int j=1;j<i;j++){
            if(j*j==i){
                a=j;
                b=i;
                break;
            }
        }
        if(b>0)
            break;
    }
    float d=x-(a*a);
    float p=d/(2*a);
    float c=a+p;
    float sqroot=c-((p*p)/(2*c));
    cout<<"The square root of "<<x<<" is "<<setprecision(6)<<sqroot<<endl;


    return 0;
}


