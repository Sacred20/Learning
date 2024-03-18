#include <iostream>
#include <cmath> 
#include <limits>

using namespace std;

bool check(int input)
{
    if (cin.fail() || cin.peek() != '\n'|| input<=0)
    {
        cout << "Invalid input! Please enter a whole number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}  
    
    


int main()
{
    int c=50;
    int n;
	int amount=1;

    cout<<"Welcome, please enter a number."<<endl;

    cin>>n;
     while (!check(n))
    {
        cout << "Please try again: ";
    }

    int solid= n;

    for (int i = 0; i < c; ++i)
    {
        cout << endl;
    }

    cout<<"Start guessing the number:";
    
    int guess;
    cin>>guess;
    while (true)
    {
        if (guess > solid)
        {
            cout << "Number is lower. Please try again" << endl;    
            cin>>guess; 
            while (!check(guess))
            {
                cout << "Please try again: ";
            }
            amount++;
              
        }
        else if (guess < solid)
        {
            while (!check(guess))
            {
                cout << "Please try again: ";
            }
            cout << "Number is Higher. Please try again" << endl;    
            cin>>guess; 
            amount++;
            
        }
        else if (guess==solid ){
            cout<<"Congratualtions! You found the number!"<<endl;
            cout<<"The number of tries you took were/was "<<amount<<endl;
            break;
        }
        
    
    }
}
	
