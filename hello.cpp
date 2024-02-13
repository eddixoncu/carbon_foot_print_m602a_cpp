#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << "\n ";
    }*/
    int number1, number2, number3 ;
    cout << "Enter number1 " ;
    cin >> number1;
    cout << endl;

    cout << "Enter number2 " ;
    cin >> number2;
    cout << endl;

    cout << "Enter number3 " ;
    cin >> number3;
    cout << endl;
    
    int product =  number1*number2*number3 ;
    cout << "Product is " << product;
     cout << endl;

    int average = (number1+number2+number3 )/3;
    cout << "AVG  is " << average<<endl;

    cout << "Enter number 1 again \n";
    cin >> number1 ;

    cout << "Enter number 2 again \n";
    cin >> number2 ;

    cout <<"The sum is " << number1 + number2 ;
    
}