//Profit/loss
#include <iostream>
using namespace std;
int main() {
    float cp,sp,diff;
    cout<< "Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    
    diff=(sp-cp)/cp*100;
    
    if(cp>sp)
    {
        cout<<"You have made a loss of "<<diff<<"%";
    }
    else if(sp>cp)
    {
        cout<<"You have made a profit of "<<diff<<"%";
    }
    else
    {
        cout<<"Neither profit nor loss";
    }

    return 0;
}
