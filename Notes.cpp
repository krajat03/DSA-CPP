#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount ";
    cin >> amount;
    cout << endl;

    int num = 1;
    int note = 0;

    switch (num)
    {
    case 1:
        note = amount / 500;
        amount = amount - (note * 500);
        cout << note << " notes are required of 500 Rs" << endl;
       

    case 2:
        note = amount / 200;
        amount = amount - (note * 200);
        cout << note << " notes are required of 200 Rs" << endl;
     

    case 3:
        note = amount / 100;
        amount = amount - (note * 100);
        cout << note << " notes are required of 100 Rs" << endl;
        

    case 4:
        note = amount /50;
        amount = amount - (note * 50);
        cout << note << " notes are required of 50 Rs" << endl;
       

    case 5:
        note = amount /20;
        amount = amount - (note * 20);
        cout << note << " notes are required of 20 Rs" << endl;
       

    case 6:
        note = amount /10;
        amount = amount - (note * 10);
        cout << note << " notes are required of 10 Rs" << endl;
        
    case 7:
        note = amount /1;
        amount = amount - (note * 1);
        cout << note << " notes are required of 1 Rs" << endl;
        break;
        


    }
    return 0;
}