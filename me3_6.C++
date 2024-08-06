#include<iostream>
using namespace std;
class book{
    private:
    char book_name[30];
    int book_price;
    char book_author[30];
    int book_no;
    public:
    void getdata()
    {
        cout<<"Enter the name of the book ";
        gets(book_name);
        cout<<"Enter the author name ";
        gets(book_author);
        cout<<"Enter the price of book ";
        cin>>book_price; 
        cout<<"Enter the number of book ";
        cin>>book_no;
    }
    void putdata(){

        cout<<"the book name is"<<book_name<<" \n";
        cout<<"The author name is"<<book_author<<" \n";
        cout<<"The price of the book is"<<book_price<<" \n";
        cout<<"The book number is"<<book_no<<" \n";
    }

};
int main(){
    book b;
    b.getdata();
    b.putdata();
    return 0;
}