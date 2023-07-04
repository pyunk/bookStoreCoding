#include <iostream>
#include <string>
using namespace std;

int main(){

    char enter;
    string bookTitle;
    float cost, totalPrice1, totalPrice2, discount;
    int codeNumber, quantity;

    cout << "Press y (for yes) to enter this site: " << endl;
    cin >> enter;
	cout << endl;
    switch (enter)
    {
    case 'y':
        cout << "welcome to the Book Store Kita" << endl;
        break;
    
    default:
    cout << "Thank you for stoping by!" << endl;
        break;
    }

    cout << endl;
    cout << "| Code Number | Book Title         | Price  |" << endl;
    cout << "| 789         | C++ Programming    | RM 139 |" << endl;
    cout << "| 568         | Java Programming   | RM  99 |" << endl;
    cout << "| 722         | Python Programming | RM  79 |" << endl;
    cout << endl;

    cout << "Enter the code number: ";
    cin >> codeNumber;
    cout << "Enter the quantity: ";
    cin >> quantity;

    if( codeNumber == 789 && quantity <= 4){
        cost = 139.00;
        totalPrice1 = cost * quantity;
        cout << "Total Price RM" << totalPrice1 << endl;
    }else if (codeNumber == 789 && quantity >= 5){
        cost = 139.00;
        totalPrice1 = cost * quantity;
        discount = totalPrice1 * 0.05;
        totalPrice2 = totalPrice1 - discount;
        cout << "Total Price RM" << totalPrice2 << endl;
    }else if (codeNumber == 568 && quantity <= 4){
        cost = 99.00;
        totalPrice1 = cost * quantity;
        cout << "Total Price RM" << totalPrice1 << endl;
    }else if (codeNumber == 568 && quantity >= 5 && quantity <= 10){
        cost = 99.00;
        totalPrice1 = cost * quantity;
        discount = totalPrice1 * 0.08;
        totalPrice2 = totalPrice1 - discount;
        cout << "Total Price RM" << totalPrice2 << endl;
    }else if (codeNumber == 568 && quantity >= 11){
        cost = 99.00;
        totalPrice1 = cost * quantity;
        discount = totalPrice1 * 0.11;
        totalPrice2 = totalPrice1 - discount;
        cout << "Total Price RM" << totalPrice2 << endl;
    }
    else if (codeNumber == 722 && quantity <= 4){
        cost = 79.00;
        totalPrice1 = cost * quantity;
        cout << "Total Price RM" << totalPrice1 << endl;
    }else if (codeNumber == 722 && quantity >= 5 && quantity <= 10){
        cost = 79.00;
        totalPrice1 = cost * quantity;
        discount = totalPrice1 * 0.03;
        totalPrice2 = totalPrice1 - discount;
        cout << "Total Price RM" << totalPrice2 << endl;
    }else if (codeNumber == 722 && quantity >= 11){
        cost = 79.00;
        totalPrice1 = cost * quantity;
        discount = totalPrice1 * 0.07;
        totalPrice2 = totalPrice1 - discount;
        cout << "Total Price RM" << totalPrice2 << endl;
    }

    return 0;
}