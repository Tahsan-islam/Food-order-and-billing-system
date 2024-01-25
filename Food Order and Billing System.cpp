#include <iostream>
#include <fstream>
#include <map>
using namespace std;

class LoginSystem
{
private:
    std::map<std::string, std::string> users; // Store username-password pairs

public:
    LoginSystem()
    {

        users["cse"] = "ugv";
    }

    bool authenticateUser(const std::string& username, const std::string& password)
    {
        auto it = users.find(username);
        if (it != users.end() && it->second == password)
        {
            return true;
        }
        return false;
    }
};

void saveOrderDetails(const string& name, const string& add, int phone, int totalBill)
{
    ofstream orderFile("order_details.txt");
    orderFile << "Customer's Name: " << name << "\n";
    orderFile << "Customer's Address: " << add << "\n";
    orderFile << "Customer's Phone Number: " << phone << "\n";
    orderFile << "Total Bill Amount: " << totalBill << " tk\n";
    orderFile.close();
}

int main()
{
        system("cls");
    char a = 177;
    char b = 219;
    system("color 0B");
    cout << "\n\n\n\t\t\t\tPlease wait while loading\n\n";
    cout << "\t\t\t\t";
    for (int i = 0;i <= 47;i++)
        cout << a;
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0;i <= 47;i++)
    {
        cout << b;
        for (int j = 0;j <= 1e8;j++);
    }

    char item;
    char riceItem;
    char meatItem;
    char drinkItem;
    int returTotalBill();
    LoginSystem loginSystem;

    std::string username, password;
    std::cout << "\n\n\t\t\t\t\t\t\tLogin\n\n";
    std::cout << "\t\t\t\t\t\tUsername : ";
    std::cin >> username;
    std::cout << "\t\t\t\t\t\tPassword : ";
    std::cin >> password;

    if (loginSystem.authenticateUser(username, password))
    {
        std::cout << "Login successful!\n";

        char name[30];
        char add[30];
        int phone;

        // Collect customer information
        cout << "Customer's Name: ";
        cin.ignore();
        cin.getline(name, 30);
        cout<<"Hello "<<name<<"\n\n";
        cout << "Customer's Address: ";
        cin.getline(add, 30);
        cout << "Customer's Phone Number: ";
        cin >> phone;
        int totalBill = returTotalBill();
        cout << "\nYour Food Bill Amount is " << totalBill << " tk\n";

        cout << "Order Conform [1=Yes/2=No]: ";
        int conform;
        cin >> conform;

        switch (conform)
        {
        case 1:
            saveOrderDetails(name, add, phone, totalBill);
            cout << "\nSuccessful your order." << endl;
            cout << "\n-------Thank You Sir!-------" << endl;
            break;

        case 2:
            cout << "Cancel your Order" << endl;
            cout << "\n------Thank you, sir!------" << endl;
            break;
        }
    }
    else
    {
        std::cout << "Login failed. Invalid Username or Password.\n";
    }
}

int returTotalBill()
{


    char c;
    char item;
    char riceItem;
    char meatItem;
    int billAmount=0;
    char selectAgain;
    char drinkItem;
    char name[15];
    char add[30];
    int phone;


    {
        {

beginning:
            system("CLS");

            cout<<"Login successful! ";
            cin.getline(name, 30);
            cout<<"\n\n "<<name<<"\n\n";
            cout<<"\t\t\t\t..................................................\n";
            cout<<"\t\t\t\t|         [THE ROSE PALACE RESTAURANT]           |\n";
            cout<<"\t\t\t\t|          [WELCOME TO MY RESTAURANT]            |\n";
            cout<<"\t\t\t\t..................................................\n\n";
        }

        cout<<"\nwe have received your information"<<endl;
        cout<<"\nLOVE AND RESPECT FOR MY CUSTOMER"<<endl;


        cout<<" __________________________________________________________________________"<<endl;
        cout<<"|                                                                          |"<<endl;
        cout<<"|                                                                          |"<<endl;
        cout<<"|-----------------Please Follow Below Instructions-------------------------|"<<endl;
        cout<<"|------------------------PLEASE PRESS [n/N]!-------------------------------|"<<endl;
        cout<<"|                                                                          |"<<endl;
        cout<<"|__________________________________________________________________________|\n\n"<<endl;
    };

start1:
    cin>>c;

    if(c=='n'|| c=='N')
    {

        cout<<"!````````````````````````````````````````````````````````````````````````````````!"<<endl;
        cout<<"!                                                                                !"<<endl;
        cout<<"!~~~~~~~~~~~~~~~~~step 1: please press [s] and go to menu card~~~~~~~~~~~~~~~~~~~!"<<endl;
        cout<<"!~~~~~~~~~~~~~~~~~step 2: you will get your final Bill after your order~~~~~~~~~~!"<<endl;
        cout<<"!                                                                                !"<<endl;
        cout<<"!                                                                                !"<<endl;
        cout<<" ````````````````````````````````````````````````````````````````````````````````"<<endl;
    }

start:
    cin>>c;

    if(c=='s' || c=='S')
    {
items:
        cout<<" [THE ROSE PALACE RESTAURANT]"<<endl;
        cout<<"\n\n-------MENU CARD-------"<<endl;
        cout<<"Please select your choice!"<<endl;
        cout<<"\n----------------"<<endl;
        cout<<"|  (a) Rice?   |   \n|  (b) Meat?   |   \n|  (c) Drink?  |"<<endl;
        cout<<"----------------"<<endl;
        cin>>item;
        if(item=='a' || item=='A')
        {
riceitemlist:
            cout<<"Please Select 1, 2, 3 as per your Choice"<<endl;
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"|                                                       |"<<endl;
            cout<<"|      (1) Kacchi Biriyani : Price : 300 tk             |"<<endl;
            cout<<"|      (2) Bhuna Khichuri : Price : 150 tk              |"<<endl;
            cout<<"|      (3) Morog Polao : Price : 200 tk                 |"<<endl;
            cout<<"|                                                       |"<<endl;
            cout<<"---------------------------------------------------------"<<endl;

            cin>>riceItem;
            if(riceItem=='1')
            {
                billAmount=billAmount +300;
                cout<<"kacchi Biriyani: price : 300tk"<<endl;

            }
            else if(riceItem =='2')
            {
                billAmount=billAmount +150;
                cout<<"Bhuna Khichuri : price : 150tk"<<endl;
            }
            else if(riceItem=='3')
            {
                billAmount=billAmount +200;
                cout<<"Morog Polao"<<endl;
            }
            else
            {
                cout<<"you have entered wrong value, please try again! "<<endl;
                goto items;
            }
            cout<<"Do you want to add more item, y or n?"<<endl;
            cin>>selectAgain;

            if(selectAgain=='y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }


        }
        else if(item=='b'||item=='B')
        {
meatitemlist:
            cout<<"Please Select 1, 2, 3 as per your Choice"<<endl;
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"|                                                       |"<<endl;
            cout<<"|       (1) Beef Kala Bhuna : Price : 350 tk            |"<<endl;
            cout<<"|       (2) Mutton Curry : Price : 200 tk               |"<<endl;
            cout<<"|       (3) Chicken Roast : Price : 100 tk              |"<<endl;
            cout<<"|                                                       |"<<endl;
            cout<<"---------------------------------------------------------"<<endl;


            cin>>meatItem;
            if(meatItem=='1')
            {
                billAmount=billAmount +350;
                cout<<"Beef Kala Bhuna : Price : 350 tk"<<endl;
            }
            else if(meatItem =='2')
            {
                billAmount=billAmount +200;
                cout<<"Mutton Curry : Price : 200 tk"<<endl;
            }
            else if(meatItem=='3')
            {
                billAmount=billAmount +100;
                cout<<"chicken Roast : Price : 100 tk"<<endl;
            }
            else
            {
                cout<<"you have entered wrong value, please try again! "<<endl;
                goto items;
            }
            cout<<"Do you want to add more item, y or n?"<<endl;
            cin>>selectAgain;

            if(selectAgain=='y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }

        }

        else if(item=='c'||item=='C')
        {
drinkitemlist:
            cout<<"Please Select 1, 2 as per your Choice"<<endl;
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"|                                                       |"<<endl;
            cout<<"|         (1) Borhani : Price : 80 tk                   |"<<endl;
            cout<<"|         (2) Lassi : Price : 100 tk                    |"<<endl;
            cout<<"|                                                       |"<<endl;
            cout<<"---------------------------------------------------------"<<endl;


            cin>>drinkItem;
            if(drinkItem=='1')

            {
                billAmount=billAmount +80;
                cout<<"Borhani : Price : 80 tk"<<endl;
            }
            else if(drinkItem =='2')
            {
                billAmount=billAmount +100;
                cout<<"Lassi : Price : 100 tk"<<endl;
            }

            else
            {
                cout<<"you have entered wrong value, please try again! "<<endl;
                goto items;
            }
            cout<<"Do you want to add more item, y or n?"<<endl;
            cin>>selectAgain;

            if(selectAgain=='y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }

        }


        else
        {
            cout<<"you have entered wrong value, Please try again press (a), (b), or (c)!"<<endl;
            goto items;
        }

    }
    else
    {
        cout<<"you have entered wrong value, please press s!"<<endl;
        goto start;
    }


    return billAmount;
}
