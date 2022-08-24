#include <bits/stdc++.h>
using namespace std;
class Product
{
    public:
    string Product_ID;
    string Product_Category,Product_Name;
    void product_readdata()
    {
      ifstream pi("productIn.txt");
      pi.ignore();
      getline(pi,Product_ID);
      getline(pi,Product_Category);
      getline(pi,Product_Name);
    }
    void product_writedata()
    {
      ofstream po("productOut.txt");
      po<<Product_ID<<endl<<Product_Category<<endl<<Product_Name<<endl;
    }
};
class SoldProduct : public Product
{
    public:
    string Customer_ID,Customer_Category;
    void sold_readdata()
    {
        ifstream sp("customerIn.txt");
        sp.ignore();
        getline(sp,Customer_ID);
        getline(sp,Customer_Category);
    }
    void sold_writedata()
    {
        ofstream so("customerOut.txt");
        so<<Customer_ID<<endl<<Customer_Category<<endl;
    }
};
class BoughtProduct: public Product
{
    public:
    string Buyer_ID,Buyer_Name;
    int Buyer_price;
    void bought_readdata()
    {
    ifstream bp("buyerIn.txt");
    bp.ignore();
    getline(bp,Buyer_ID);
    getline(bp,Buyer_Name);
    bp>>Buyer_price;
    }
    void bought_writedata()
    {
        ofstream bo("buyerOut.txt");
        bo<<Buyer_ID<<endl<<Buyer_Name<<endl<<Buyer_price<<endl;
    }
};
int main()
{
    Product p;
    SoldProduct sp;
    BoughtProduct bp;
    p.product_readdata();
    p.product_writedata();
    sp.sold_readdata();
    sp.sold_writedata();
    bp.bought_readdata();
    bp.bought_writedata();
    return 0;
}
