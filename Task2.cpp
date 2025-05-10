#include <iostream>
using namespace std;

class Item
{
public:
    char name[20]; // intialisation of name Itemtype and BasePrice
    char Item_type[20];
    float base_Price_per_unit;

    Item()
    {
        cout << "Default constructor called" << endl;
        name[0] = '\0';
        Item_type[0] = '\0';
        base_Price_per_unit = 0;
    }

    float getPrice() // getter function called
    {
        return base_Price_per_unit;
    }
};

class Egg : public Item // Egg class publically inherited to Item class
{
public:
    int units;
    bool sale;
    bool card;

    Egg(float price = 1, int unit = 1, bool sales = false, bool cards = false)
    {
        name[0] = 'E';
        name[1] = 'g';
        name[2] = 'g';
        name[3] = '\0';
        Item_type[0] = 'F';
        Item_type[1] = 'o';
        Item_type[2] = 'o';
        Item_type[3] = 'd';
        Item_type[4] = '\0';
        base_Price_per_unit = price;
        units = unit;
        sale = sales;
        card = cards;
    }

    float price() // fuction price for indication whether the item is on sale or not.
    {
        float p = base_Price_per_unit;
        if (sale)
        {
            p = p * 0.75;
        }
        return p * units;
    }

    bool gift() // function for  indication to know whether the item comes with complementary gift card or not.
    {
        return card;
    }

    void print_details_Eggs() // function for printing the egg class details
    {
        cout << "The Name is :" << name << endl;
        cout << "The Base Price is : " << base_Price_per_unit << endl;
        cout << "The units are : " << units << endl;
        cout << "The sale update : ";
        if (sale)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The gift card update : ";
        if (card)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The price is : " << price() << " Rs." << endl;
    }
};

class Bread : public Item // Bread class publically inherited to Item class
{
public:
    int units;
    bool sale;
    bool card;

    Bread(float price = 1, int unit = 1, bool sales = false, bool cards = false)
    {
        name[0] = 'B';
        name[1] = 'r';
        name[2] = 'e';
        name[3] = 'a';
        name[4] = 'd';
        name[5] = '\0';
        Item_type[0] = 'F';
        Item_type[1] = 'o';
        Item_type[2] = 'o';
        Item_type[3] = 'd';
        Item_type[4] = '\0';
        base_Price_per_unit = price;
        units = unit;
        sale = sales;
        card = cards;
    }

    float price() // function for printing the bread class details
    {
        float p = base_Price_per_unit;
        if (sale)
        {
            p = p * 0.75;
        }
        return p * units;
    }

    bool gift() // function for  indication to know whether the item comes with complementary gift card or not.
    {
        return card;
    }

    void print_details_Bread() // function for printing the bread class details
    {
        cout << "The Name is :" << name << endl;
        cout << "The Base Price is : " << base_Price_per_unit << endl;
        cout << "The units are : " << units << endl;
        cout << "The sale update : ";
        if (sale)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The gift card update : ";
        if (card)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The price is : " << price() << " Rs." << endl;
    }
};

class Pens : public Item // pen class publically inherited to Item class
{
public:
    int units;
    bool sale;
    bool card;

    Pens(float price = 1, int unit = 1, bool sales = false, bool cards = false)
    {
        name[0] = 'P';
        name[1] = 'e';
        name[2] = 'n';
        name[3] = 's';
        name[4] = '\0';
        Item_type[0] = 'S';
        Item_type[1] = 'u';
        Item_type[2] = 'p';
        Item_type[3] = 'p';
        Item_type[4] = 'l';
        Item_type[5] = 'i';
        Item_type[6] = 'e';
        Item_type[7] = 's';
        Item_type[8] = '\0';
        base_Price_per_unit = price;
        units = unit;
        sale = sales;
        card = cards;
    }

    float price() // function for printing the pen class details
    {
        float p = base_Price_per_unit;
        if (sale)
        {
            p = p * 0.75;
        }
        return p * units;
    }

    bool gift() // function for  indication to know whether the item comes with complementary gift card or not.
    {
        return card;
    }

    void print_details_pen() // function for printing the pen class details
    {
        cout << "The Name is :" << name << endl;
        cout << "The Base Price is : " << base_Price_per_unit << endl;
        cout << "The units are : " << units << endl;
        cout << "The sale update : ";
        if (sale)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The gift card update : ";
        if (card)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The price is : " << price() << " Rs." << endl;
    }
};

class Socks : public Item // Bread class publically inherited to Item class
{
public:
    int units;
    bool sale;
    bool card;

    Socks(float price = 1, int unit = 1, bool sales = false, bool cards = false)
    {
        name[0] = 'S';
        name[1] = 'o';
        name[2] = 'c';
        name[3] = 'k';
        name[4] = 's';
        name[5] = '\0';
        Item_type[0] = 'C';
        Item_type[1] = 'l';
        Item_type[2] = 'o';
        Item_type[3] = 't';
        Item_type[4] = 'h';
        Item_type[5] = 'e';
        Item_type[6] = 's';
        Item_type[7] = '\0';
        base_Price_per_unit = price;
        units = unit;
        sale = sales;
        card = cards;
    }

    float price() // function for printing the pen class details
    {
        float p = base_Price_per_unit;
        if (sale)
        {
            p = p * 0.75;
        }
        return p * units;
    }

    bool gift() // function for  indication to know whether the item comes with complementary gift card or not.
    {
        return card;
    }

    void print_details_socks() // function for printing the pen class details
    {
        cout << "The Name is :" << name << endl;
        cout << "The Base Price is : " << base_Price_per_unit << endl;
        cout << "The units are : " << units << endl;
        cout << "The sale update : ";
        if (sale)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The gift card update : ";
        if (card)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        cout << "The price is : " << price() << " Rs." << endl;
    }
};

class Cart
{
public:
    Item *items[10]; // Array to store pointer to items using DMA
    int count;

    Cart()
    {
        count = 0; // Initializing count of items to 0
    }

    void add_items(Item *item)
    {
        items[count] = item; // Adding the item to the array
        count++;             // Incrementing the count of items
    }

    void show_cart()
    {
        if (count == 0) // Check if the cart is empty
        {
            cout << "No item in the cart" << endl;
        }
        else
        {
            cout << "Cart Contains\n";
            for (int i = 0; i < count; i++)
            {
                // checking using if and else if conditions
                if (items[i]->name[0] == 'E')
                {
                    ((Egg *)items[i])->print_details_Eggs();
                }
                else if (items[i]->name[0] == 'B')
                {
                    ((Bread *)items[i])->print_details_Bread();
                }
                else if (items[i]->name[0] == 'P')
                {
                    ((Pens *)items[i])->print_details_pen();
                }
                else if (items[i]->name[0] == 'S')
                {
                    ((Socks *)items[i])->print_details_socks();
                }
            }
        }
    }

    float total()
    {
        cout << "counting totals" << endl;
        float total = 0; // Initializing total items to 0
        for (int i = 0; i < count; i++)
        {
            // checking using if and else if conditions
            if (items[i]->name[0] == 'E')
            {
                total += ((Egg *)items[i])->price();
            }
            else if (items[i]->name[0] == 'B')
            {
                total += ((Bread *)items[i])->price();
            }
            else if (items[i]->name[0] == 'P')
            {
                total += ((Pens *)items[i])->price();
            }
            else if (items[i]->name[0] == 'S')
            {
                total += ((Socks *)items[i])->price();
            }
        }
        return total; // desplaying the total price
    }
};

int main()
{
    Egg e1(15, 4, true, true);    // object of class egg
    Bread b1(10, 2, true, false); // object of class bread
    Pens p1(5, 3, false, false);  // object of class pen
    Socks s1(20, 1, false, true); // object of class socks

    Cart c;
    c.add_items(&e1);
    c.add_items(&b1);
    c.add_items(&p1);
    c.add_items(&s1);

    c.show_cart();

    cout << "Total Price: " << c.total() << " Rs." << endl;

    return 0;
}
