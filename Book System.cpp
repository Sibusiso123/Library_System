#include <iostream>
#include <string>

using namespace std;

class book {
private:
    string* author;
    string* book_name;
    string* publisher;
    float* price;
    int* stock;
public:
    book() {
        //author = new char[20];
        //book_name = new char[20];
        //publisher = new char[20];
        author = new string;
        book_name = new string;
        publisher = new string;
        price = new float;
        stock = new int;
    }
    void addbook() {
        cin.ignore();
        cout << "Please Enter the name of the Author :";
        getline(cin,*author);
        cout << "Please Enter the title name :";
        getline(cin,*book_name);
        cout << "Please Enter the name of the Publisher :";
        getline(cin,*publisher);
        cout << "Please Enter the price :";
        cin >> *price;
        cout << "Please Enter the stock position of the Book :";
        cin >> *stock;
    }

};
void menu() {
    cout << "\n\n\t\t\t\t\t Welcome to Heisenburg's Library . \n\n";
    cout << "1. Add book to the library. \n";
    cout << "2. Buy a Book. \n";
    cout << "3. Search for a Book. \n";
    cout << "4. Edit Details of Book. \n";
    cout << "5. Exit \n";
}

int main()
{
    int choice;
    book obj1;
    menu();
    cin >> choice;
    if (choice == 1) {
        obj1.addbook();
    }
}
