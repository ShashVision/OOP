
#include <iostream>
using namespace std;

class Book {
public:
    string book_name, auther_name;
    float price;
};

int main() {
    Book b, *p = &b;
    cin >> p->book_name >> p->auther_name >> p->price;
    cout << p->book_name << " "
         << p->auther_name << " " << p->price;
}
