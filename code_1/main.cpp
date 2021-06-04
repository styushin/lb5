#include <iostream>
#include <iomanip>
using namespace std;

int main (int i)
{
    
    int posl[10];
    cout<<"Ââåäèòå ïîñëåäîâàòåëüíîñòü ÷èñåë: "<<endl;
    for (i=0; i<10; i++)
    {
        cin>>posl[i];

    }
    cout<<"Ðåçóëüòàòû ðàáîòû ïðåäñòàâëåíû íèæå."<<endl;
    cout<<"8-CC: \t"<<"10-CC: \t"<<"16-CC: \t"<<endl;
    for (int i=0; i<10; i++)
    {
        cout<<setw(3)<<oct<<posl[i]<<"\t"<<setw(3)<<dec<<posl[i]<<"\t"<<setw(3)<<hex<<posl[i]<<"\t"<<endl;
    }
    return 0;
}
