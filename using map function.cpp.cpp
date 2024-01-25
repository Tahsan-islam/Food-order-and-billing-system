#include <iostream>
#include<string>
#include <map>

using namespace std;

int main()
{
    class LoginSystem
    {
    private:
        std::map<std::string, std::string> users;

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

    LoginSystem loginSystem;

    std::string username, password;
    std::cout << "\t\t\t\t\t\t\tLogin\n\n";
    std::cout << "\t\t\t\t\t\tUsername : ";
    std::cin >>username;
    std::cout << "\t\t\t\t\t\tPassword : ";
    std::cin >> password;

    if (loginSystem.authenticateUser(username, password))
    {
        std::cout <<"Login successful!\n\n\n";




        class returaTotalBill
        {


        private:
            std::map<std::string, std::iostream> users;
        public:

            int returnTotalBill()
            {
                int billAmount;
                // Function implementation for calculating the total food bill
                return billAmount;

            }
        };
        cout<<"Restaurant Food Order and Billing System"<<endl;
    }


    else
    {
        std::cout << "Login failed. Invalid Username or Password.\n";

    }
    return 0;
}
