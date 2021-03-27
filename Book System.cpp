#include <iostream>
#include <string>
#include <vector>

using namespace std;

class book {
private:
    string author;
    string book_name;
    string publisher;
    float price;
    int stock;
public:
    void addbook() {
        cin.ignore();
        cout << "Please Enter the name of the Author :";
        getline(cin,author);
        cout << "Please Enter the title name :";
        getline(cin,book_name);
        cout << "Please Enter the name of the Publisher :";
        getline(cin,publisher);
        cout << "Please Enter the price :";
        cin >> price;
        cout << "Please Enter the stock position of the Book :";
        cin >> stock;
    }
    bool searchbook(string a, string b) {
        if (book_name == a && author == b) {
            return true;
        }
        else {
            return false;
        }
    }
    void buybook() {
        int copies;
        cout << "Enter number of copies you wish to buy:";
        cin >> copies;
        if (copies <= stock) {
            stock = stock - copies;
            cout << "Book(s) Sucessfully bought . \n";
            cout << "The amount paid in Rands is : " << price * copies << endl;
        }
        else {
            cout << "Required number of copies not available . \n";
        }
    }
    void editbook() {
        cout << "Please Enter the name of the Author :";
        getline(cin, author);
        cout << "Please Enter the title name :";
        getline(cin, book_name);
        cout << "Please Enter the name of the Publisher :";
        getline(cin, publisher);
        cout << "Please Enter the price :";
        cin >> price;
        cout << "Please Enter the stock position of the Book :";
        cin >> stock;
    }
    void showbook() {
        cout << "Author: " << author << "\t" << "Title: " << book_name << "\t" << "Publisher: "  << publisher << "\t" << "price: " << price << "\t" <<"Stock position: "<< stock << endl;

    }


};
void menu() {
    cout << "\n\n\t\t\t\t\t Welcome to Heisenburg's Library . \n\n";
    cout << "1. Add book to the library \n";
    cout << "2. Buy a Book \n";
    cout << "3. Search for a Book \n";
    cout << "4. Edit Details of Book \n";
    cout << "5. Exit \n";
    cout << "Enter Your Choice : \n";
}

int main() {
    vector < book* > obj1;
    string writer, bookname;
    int i = 0, q = 0;
    while (true) {
        menu();
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj1.push_back(new book);
            obj1[i]->addbook();
            i++;
            cout << "Book Sucessfully Added ." << endl;
            break;
        case 2:
            cout << "Enter the name of the book:";
            cin.ignore();
            getline(cin, bookname);
            cout << "Enter the name of the Author:";
            getline(cin, writer);
            for (int k = 0;k < i;i++) {
                if (obj1[k]->searchbook(bookname, writer) == true) {
                    obj1[k]->buybook();
                    q = 1;
                    break;
                }
            }
            if (q == 0) {
                cout << " This Book is not available .";
            }
                break;
        case 3:
            cout << "Enter the name of the book:";
            cin.ignore();
            getline(cin, bookname);
            cout << "Enter the name of the Author:";
            getline(cin, writer);
            for (int k = 0;k < i;i++) {
                if (obj1[k]->searchbook(bookname, writer) == true) {
                    cout << "Book Found Sucessfully found . \n";
                    obj1[k]->showbook();
                    q = 1;
                    break;
                }
            }
            if (q == 0) {
                cout << " This Book is not available .";
            }
            break;
        case 4:
            cout << "Enter the name of the book:";
            cin.ignore();
            getline(cin, bookname);
            cout << "Enter the name of the Author:";
            getline(cin, writer);
            for (int k = 0;k < i;i++) {
                if (obj1[k]->searchbook(bookname, writer) == true) {
                    cout << "Book Found Sucessfully found . \n";
                    obj1[k]->editbook();
                    cout << "Book Details Sucessfully Edited . \n";
                    q = 1;
                    break;
                }
            }
            if (q==0){
                cout << "This Book is not available \n";
            }
            break;
        case 5:
            exit(0);
        default:
            cout << "The Choice you Entered is Invalid, Try Again \n" ;
            }

        }

    }
        
        
    