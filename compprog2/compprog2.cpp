
#include <iostream>
using namespace std;

int main()
{
    string name;
    float age;
    char food;

    //menus

    float buffA = 250;
    float steakB = 300;
    float yagC = 170;

    float chickA = 120;
    float pizzB = 125;

    //    
    char loychoice;
    float loyalty;

    float payment = 0;
    float total; 

    char newuser;


    do {

        //accepting name and age
        cout << "Hello and Welcome dear customer!\n\n"
            << "Please enter your name : ";
        cin >> name;

        cout << "\nPlease enter your age: ";
        cin >> age;

        // checking if the age is valid
        if (age < 0) {
            cout << "\nPlease enter a valid age!\n\nPlease enter your age: ";
            cin >> age;
        }

        system("cls");

        cout << "Hello, " << name << " You are " << age << " years old!\n\n";


        //providingf menus for <16 and >16

        if (age > 16) {
            cout << "\t[MENU]\n"
                << "A.\tSpicy Buffalo Chicken\t\t\tPhp 250\n"
                << "B.\tMedium Rare Steak with Carbonara\tPhp 300\n"
                << "C.\tYagnyeom x2 Garlic with Rice\t\tPhp 170\n\n"
                << "Chosen menu: ";
            cin >> food;

            switch (toupper(food)) {
            case 'A':
                cout << "\n\nYou have chosen A! Also known as Spicy Buffalo Chicken";
                payment += buffA;
                cout << "\n\nYour payment is now: Php " << payment;
                break;

            case 'B':
                cout << "\n\nYou have chosen B! Also known as Medium Rare Steak with Carbonara";
                payment += steakB;
                cout << "\n\nYour payment is now: Php " << payment;
                break;

            case 'C':
                cout << "\n\nYou have chosen B! Also known as Yagnyeom x2 Garlic with Rice";
                payment += yagC;
                cout << "\n\nYour payment is now: Php " << payment;
                break;

            default:
                cout << "That wasnt part of any of the choices please try again!";
                break;

            }



        }

        else if (age < 16) {
            cout << "\t[MENU]\n"
                << "A.\tFried Chicken with fries\tPhp 120\n"
                << "B.\tHawaiian Pizza slice\t\tPhp 125\n"
                << "Chosen menu: ";
            cin >> food;
            switch (toupper(food)) {
            case 'A':
                cout << "\n\nYou have chosen A! Also known as Fried Chicken with fries";
                payment += chickA;
                cout << "\n\nYour payment is now: Php " << payment;
                break;

            case 'B':
                cout << "\n\nYou have chosen B! Also known as Hawaiian Pizza slice";
                payment += pizzB;
                cout << "\n\nYour payment is now: Php " << payment;
                break;

            default:
                cout << "That wasnt part of any of the choices please try again!";
                break;

            }
        }



        //asking user if they have have loyalty if they have provide dis of 5 %
        cout << "\n\nDo you have loyalty? (Y/N): ";
        cin >> loychoice;

        switch (toupper(loychoice))
        {
        case 'Y':
            cout << "\nYou have loyalty! Slay! We will be discounting you 5 percent congrats teh!\n\n";
            loyalty = payment * .05;
            total = payment - loyalty;

            cout << "Your total payment is " << total;
            break;

        case 'N':
            cout << "\nYou have no loyalty! wompwomp!\n\n";
            total = payment;
            cout << "Your total payment is still " << total << endl << endl;
            break;

        default:
            cout << "Please enter a valid choice!\n";
        }

        cout << "\n\nIs another user gonna order? (Y/N): ";
        cin >> newuser;
        system("cls");

    } while (newuser == 'Y' || newuser == 'y');

    cout << "Thank you for using our service ! Goodbye !\n\n";
 
        return 0;

}
