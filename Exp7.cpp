// Book Arranging System(In this case, acc to aphabetic order of author's name)

#include <iostream>
#include <string>
using namespace std;

class bookRecord
{

public:
    string book_name, author_name;
    int book_id, no_of_pages, price, year_of_publishing;

    bookRecord(string Abook_name, string Aauthor_name, int Abook_id, int Ano_of_pages, int Aprice, int Ayear_of_publishing)
    {
        book_name = Abook_name;
        author_name = Aauthor_name;
        book_id = Abook_id;
        no_of_pages = Ano_of_pages;
        price = Aprice;
        year_of_publishing = Ayear_of_publishing;
    }

    void disp()
    {
        cout << "Book Name: " << book_name << endl;
        cout << "Author: " << author_name << endl;
        cout << "ID: " << book_id << endl;
        cout << "No of Pages: " << no_of_pages << endl;
        cout << "Price: " << price << endl;
        cout << "Year of Publish: " << year_of_publishing << endl;
    }
};

int main()
{
    bookRecord book1("Lord of the Rings", "Tolkien", 101, 350, 550, 1955);
    bookRecord book2("Harry Potter", "Rowling", 102, 600, 950, 2002);
    bookRecord book3("The Kite Runner", "Hosseini", 103, 300, 250, 2003);

    string authorlist[] = {book1.author_name, book2.author_name, book3.author_name};
    int n = sizeof(authorlist) / sizeof(authorlist[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (authorlist[i][0] > authorlist[j][0])
            {
                string temp = authorlist[j];
                authorlist[j] = authorlist[i];
                authorlist[i] = temp;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (authorlist[i] == book1.author_name)
        {
            book1.disp();
            cout << endl;
        }
        else if (authorlist[i] == book2.author_name)
        {
            book2.disp();
            cout << endl;
        }
        else if (authorlist[i] == book3.author_name)
        {
            book3.disp();
            cout << endl;
        }
    }

    return 0;
}