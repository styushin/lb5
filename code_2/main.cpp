#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
    int b[16][16];
    int S;
    cout<<"Ââåäèòå ñèñòåìó ñ÷èñëåíèÿ: \n";
    cin>>S;
    if (S==10) {
        cout<<"Ðåçóëüòàòû ðàáîòû ïðåäñòàâëåíû íèæå. \n"<<endl;
        for (int i=1; i<=10; i++) {
            for (int j=1; j<=10; j++) {
                b[i][j]=i*j;
                cout<<setw(5)<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    if (S==8) {
        cout<<"Ðåçóëüòàòû ðàáîòû ïðåäñòàâëåíû íèæå. \n"<<endl;
        for (int i=1; i<=7; i++) {
            for (int j=1; j<=7; j++) {
                b[i][j]=i*j;
                cout<<setw(5)<<oct<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    if (S==16) {
        cout<<"Ðåçóëüòàòû ðàáîòû ïðåäñòàâëåíû íèæå. \n"<<endl;
        for (int i=1; i<=15; i++) {
            for (int j=1; j<=15; j++) {
                b[i][j]=i*j;
                cout<<setw(5)<<hex<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
