#include <iostream>
using namespace std;
class Payment
{
public:
    virtual void processpayment(double amount) = 0;
    virtual ~Payment() {}
};

class CreditCard : public Payment
{
public:
    void processpayment(double amount) override
    {
        cout << "Processing credit card payment: " << amount << endl;
    };
};

class MobileBanking : public Payment
{
public:
    void processpayment(double amount) override
    {
        cout << "Processing Mobile Banking payment: " << amount << endl;
    };
};

class Cash : public Payment
{
public:
    void processpayment(double amount) override
    {
        cout << "Processing Cash payment: " << amount << endl;
    };
};

int main()
{
    Payment *p;
    CreditCard cc;
    MobileBanking m;
    Cash c;
    p = &cc;
    p->processpayment(540.00);

    p = &m;
    p->processpayment(200.00);

    p = &c;
    p->processpayment(840.00);
    return 0;
}