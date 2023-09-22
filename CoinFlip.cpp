#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main()
{
    char yesorno;
    cout<<"\t======================================\n\n\t\tWelcome to Coin Flip!\n\t\t~~Heads&Tails~~\n\t\t(USE AT YOUR OWN RISK)\n\n\t\tDo you want to flip? (Y/N) :";
    cin>>yesorno;
    if (yesorno == 'y'){
        cout<<"\t\t\tOK!\n\t======================================\n";
        cout.flush();
        sleep(1);
        int index;
        string result;
        while (yesorno != 'n'){
            cout<<"Flipping...\t";
            cout.flush();
            sleep(2);
            index = rand() % 100;
            if (index <= 49){
                result = "Heads!";}
            else if (index <= 98){
                result = "Tails!";}
            else{
                result = "What??!! The coin landed on it's side!";}
            cout<<"The result is "<<result<<"\nDo you want to flip again? (Y/N):";
            cin>>yesorno;
        }
    
    }
    else if (yesorno == 'n'){
        cout<<"\nyaudah...";
    }
    else cout<<"please enter Y or N.";
    

    return 0;
}
