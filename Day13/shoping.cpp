#include<iostream>
#include<vector>
using namespace std;
class Item
{
    //attributes of items contained in a shopping cart
    int ItemId;
    string Name;
    int Quantity;
    float Price;

    public:
    //setters
    void setItemId(int id)
    {
        ItemId=id;
    }
    void setName(string name)
    {
        Name=name;
    }
    void setQuantity(int quantity)
    {
        Quantity=quantity;
    }
    void setPrice(float price)
    {
        Price=price;
    }

    //getters
    void getItemId()
    {
        cout<<ItemId;
    }
    void getName()
    {
        cout<<Name;
    }
    void getQuantity()
    {
        cout<<Quantity;
    }
    void getPrice()
    {
        cout<<Price;
    }
    //constructor
    Item (int id,string name,int quantity,float price)
    {
        setItemId(id);
        setName(name);
        setQuantity(quantity);
        setPrice(price);
    
    }
      void displayItem() {
        // Print the item details
        cout << "Item ID:";
        getItemId();
        cout<< " | Name: " ;
        getName();
        cout<< " | Price: $" ;
        getPrice();
        cout<< " | Quantity: ";
        getQuantity() ;
        cout<< endl;
    }

};
int main()
{
    vector<Item> shoppingCart; //vetor to store shopping cart items
    int op;
    
    do
    {
        cout << "your Shopping cart\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Exit\n";
        cin>>op;
        switch (op)
        {
            case 1:
                {
                int id;
                cout<<"Enter item ID"<<endl;
                cin>> id;
                string name;
                cout<<"Enter Item Name"<<endl;
                cin >> name;
                int quantity;
                cout<<"Enter Item quantity"<<endl;
                cin>>quantity;
                float price;
                cout<<"Enter Item price"<<endl;
                cin>>price;
                //creatig object of item class
                Item newItem(id,name,quantity,price);
                //adding newitem in shopping cart
                shoppingCart.push_back(newItem); 
                cout<<"Item added successfully.\n";
                break;}
            case 2:
                  {  if (shoppingCart.empty()) 
                    {
                        cout << "No items in the Cart!\n";
                    } 
                    else 
                    {
                        cout << "\nShopping Cart:\n";
                        for (size_t i = 0; i < shoppingCart.size(); i++) {
                            shoppingCart[i].displayItem(); // Display each item's details
                        }
                    }
                  }
                break;
            case 3:
                {cout << "Exiting Cart. Goodbye!\n";
                break;}
            default:
                {cout << "Invalid choice. Please try again.\n";
                break;}
        }
   
    } while (op!=3);
    return 0;
}