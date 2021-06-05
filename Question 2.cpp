#include<iostream>
#include<iomanip>
using namespace std;
const int NUM = 3;

class BillGenerator{
	private:
		int itemPrice[NUM];
		int itemQuantity[NUM];
		int itemAmount[NUM];
		int total_amount;
		string items[NUM];
	public:
		BillGenerator(){
			this->total_amount = 0;
		}
		void getItemInfo(string items[NUM],int price[NUM],int qty[NUM]){
			for(int i = 0 ; i < NUM ; i++){
				this->items[i] = items[i];
				this->itemPrice[i] = price[i];
				this->itemQuantity[i] = qty[i];
			}
		}
		void calcBill(){
			for(int i = 0 ; i < NUM ; i++){
				this->itemAmount[i] = (this->itemPrice[i] * this->itemQuantity[i]);
				this->total_amount += this->itemAmount[i];
			}
			if(this->total_amount > 3000){
				this->total_amount *= 0.95;
			}
		}
		void showBillInfo(){
			calcBill();
			cout << endl << endl << "item"<<setw(20)<<"price"<<setw(10)<<"quantity"<<setw(10)<<"Amount";
			for(int i=0;i<NUM;i++){
				cout << endl << this->items[i] << setw(20)
					 << this->itemPrice[i] << setw(10)
					 << this->itemQuantity[i] << setw(10)
					 << this->itemAmount[i] << endl;
			}
			cout << "TOTAL BILL: " << this->total_amount;
		}
		
};
int main(){
	BillGenerator bill;
	string items[NUM];
	int price[NUM];
	int qty[NUM];
	
	for(int i = 0 ; i < NUM ; i++){
		cout << endl << "Enter Item's name: ";
		cin >> items[i];
		cout << endl << "Enter Item's Price: ";
		cin >> price[i];
		cout << endl << "Enter Item's Quantity: ";
		cin >> qty[i];
	}
	bill.getItemInfo(items,price,qty);
	bill.showBillInfo();
}
