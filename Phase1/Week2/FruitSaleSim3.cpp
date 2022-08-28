/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#include <iostream>
using namespace std;

class FruitSeller{
    private:
        const int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        FruitSeller(int price, int num, int money)
        : APPLE_PRICE(price), numOfApples(num), myMoney(money){

        }
        int saleApples(int money){
            int num = money/APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return num;
        }
        void showSalesResult() const{
            cout << "# of the left: " << numOfApples << endl;
            cout << "Avenue: " << myMoney << endl;
        }
};
class FruitBuyer{
    private:
        int myMoney, numOfApples;
    public:
        FruitBuyer(int money)
        :myMoney(money), numOfApples(0){

        }
        void buyApples(FruitSeller &fruitSeller, int money){
            numOfApples += fruitSeller.saleApples(money);
            myMoney -= money;
        }
        void showBuyResult() const{
            cout << "# of apples: " << numOfApples << endl;
            cout << "Avenue: " << myMoney << endl;

        }
};

int main(){

    return 0;

}