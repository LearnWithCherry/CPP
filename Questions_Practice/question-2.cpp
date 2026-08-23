// monthly utility bill
#include <iostream>
#include<iomanip>
using namespace std;
class utitltyBill{
    public:
        double current_balance;
        double monthly_charge;
        double payment_received;

        void calculate(){
            double late_fee = 0;

            if(payment_received < monthly_charge){
                late_fee = 0.05 * monthly_charge;
                cout << "late_fee: Rs. " << fixed << setprecision(2) << late_fee << endl;
            }
            current_balance = current_balance + monthly_charge - payment_received + late_fee ;
        }

};
int main() {
    utitltyBill bill;
    utitltyBill * billPtr = &bill;

    cin >> billPtr -> current_balance;
    cin >> billPtr -> monthly_charge;
    cin >> billPtr -> payment_received;
    
    billPtr -> calculate();
    cout << fixed << setprecision(2);
    cout << "Adjusted balance: Rs. "<< billPtr -> current_balance; 
    return 0;
}