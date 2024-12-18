#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    srand(time(0));
    int secretNum=rand()%101;
    int guess,i;
    i=0;
    do
    {
        cout<<"Enter your Guess"<<endl;
        cin>>guess;
        i++;
        if (secretNum<guess)
            cout<<"too high"<<endl;
        else if(secretNum>guess)
            cout<<"too low"<<endl;
    
        else
           { cout<<"your guess is correct, secret number is "<<secretNum<<endl;
            cout<<"your tries are "<<i<<endl;
            break;
            }

        if(i>=5)
            {cout<<"you loose, your try limit is over"<<endl<<"the number was "<<secretNum<<endl;
            break;
            
            }
    } while (secretNum!=guess);

    return 0;
}