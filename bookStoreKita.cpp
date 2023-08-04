#include <iostream>
using namespace std;

int main(){

  int quantity, books = 3;
  int codeNumber[books] = {789, 568, 722};
  string bookTitle[books] = {"C++ Programming", "Java Programming", "Python Programming"};
  float cost[books] = {139.00, 99.00, 79.00};
  float totalPrice1, totalPrice2, discount, totalCost = 0;
  
  cout << "| Code Number | Book Title         | Price  |" << endl;
  cout << "| 789         | C++ Programming    | RM 139 |" << endl;
  cout << "| 568         | Java Programming   | RM  99 |" << endl;
  cout << "| 722         | Python Programming | RM  79 |" << endl;
  cout << endl;

  while (true){
    int option;
    cout << "Enter the code number: ";
    cin >> codeNumber[books];
    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << "Enter y (for yes): " ;
    cin >> option;

    if (codeNumber[books] == 789 && quantity <= 4) {
        cost[books] = 139.00;
        totalPrice1 = cost[books] * quantity;
        totalCost += totalPrice1;
        cout << "Total Price for " << quantity << " book title C++ Programming: RM" << cost << endl;
    }
    else if (codeNumber[books] == 789 && quantity >= 5) {
        cost[books] = 139.00;
        totalPrice1 = cost[books] * quantity * 0.95;
        totalCost += totalPrice1;
        totalPrice2 = cost[books] * 0.95;
        cout << "Total Price for " << quantity << " book title C++ Programming: RM" << cost << endl;
        cout << "Price per book after discount: RM " << totalPrice2 << endl;
    }
    else if (codeNumber[books] == 568 && quantity <= 4) {
        cost[books] = 99.00;
        totalPrice1 = cost[books] * quantity;
        totalCost += totalPrice1;
        cout << "Total Price for " << quantity << " book title Java Programming: RM" << cost << endl;
    }
    else if (codeNumber[books] == 568 && quantity >= 5 && quantity <= 10) {
        cost[books] = 99.00;
        totalPrice1 = cost[books] * quantity * 0.92;
        totalCost += totalPrice1;
        totalPrice2 = cost[books] * 0.92;
        cout << "Total Price for " << quantity << " book title Java Programming: RM" << cost << endl;
        cout << "Price per book after discount: RM " << totalPrice2 << endl;

    }
    else if (codeNumber[books] == 568 && quantity >= 11) {
        cost[books] = 99.00;
        totalPrice1 = cost[books] * quantity * 0.89;
        totalCost += totalPrice1;
        totalPrice2 = cost[books] * 0.89;
        cout << "Total Price for " << quantity << " book title Java Programming: RM" << cost << endl;
        cout << "Price per book after discount: RM " << totalPrice2 << endl;

    }
    else if (codeNumber[books] == 722 && quantity <= 4) {
        cost[books] = 79.00;
        totalPrice1 = cost[books] * quantity;
        totalCost += totalPrice1;
        cout << "Total Price for " << quantity << " book title Python Programming: RM" << cost << endl;
    }
    else if (codeNumber[books] == 722 && quantity >= 5 && quantity <= 10) {
        cost[books] = 79.00;
        totalPrice1 = cost[books] * quantity * 0.97;
        totalCost += totalPrice1;
        totalPrice2 = cost[books] * 0.97;
        cout << "Total Price for " << quantity << " book title Python Programming: RM" << cost << endl;
        cout << "Price per book after discount: RM " << totalPrice2 << endl;

    }
    else if (codeNumber[books] == 722 && quantity >= 11) {
        cost[books] = 79.00;
        totalPrice1 = cost[books] * quantity * 0.93;
        totalCost += totalPrice1;
        totalPrice2 = cost[books] * 0.93;
        cout << "Total Price for " << quantity << " book title Python Programming: RM" << cost << endl;
        cout << "Price per book after discount: RM " << totalPrice2 << endl;
    }

    cout << "Total Price for all textbooks: RM" << totalCost << endl;

  }


return 0;
}
