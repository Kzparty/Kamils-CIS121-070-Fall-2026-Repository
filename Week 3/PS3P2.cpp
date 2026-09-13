//2. Given the current stock price and quantity of stock, display the current value of the stock in your portfolio
#include <iostream>
using namespace std;
int main()
{
    double stockPrice, currentValue;
    int quantity;

    cout << "Enter your stocks current stock price: $";
    cin >> stockPrice;
    cout << "Enter the quantity of stock: ";
    cin >> quantity;

    currentValue = stockPrice * quantity;

    cout << "The current value of the stock in your portfolio is: $" << currentValue << endl;

    return 0;
}