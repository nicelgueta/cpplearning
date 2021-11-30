#include <string>


// friend statement: allows free functions to access private member vars of classes
// if defined as such in the class
struct Fruit
{
    private:
        std::string name;
    public:
        std::string getName() const {return name; }
        Fruit(std::string name);
        ~Fruit();
};

class Basket
{
    private:
        std::string owner;
        Fruit items [10]; // items in basket (max 10)
    public:
        std::string getOwner() const {return owner; }
        Basket(std::string name);
        ~Basket();
        void operator+(Fruit other) {}
};