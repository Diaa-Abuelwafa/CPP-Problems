#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct book
{
    int id;
    string name;
    int quantity;
    int quantity_borrowed;

    book():quantity_borrowed(0)
    {
        // Intialization List Method
    }
};

struct user
{
    int id;
    string name;
    int num_borrowed;
    int id_book_borrowed[100];


    user():num_borrowed(0)
    {
        // Intialization List Method
    }
};

bool compare_id(book &b1, book &b2)
{
    return b1.id < b2.id;
}

bool compare_name(book &b1, book &b2)
{
    return b1.name < b2.name;
}

void remove_from_arr(int arr[], int len, int indx)
{
    for (int i = 0; i < len; ++i)
    {
        if (i == indx)
        {
            for (int j = i + 1; j < len; ++i)
            {
                arr[j - 1] = arr[j];
            }
        }
    }
}

void add_book(book books_arr[], int pos, int id, string name, int quantity)
{
    books_arr[pos].id = id;
    books_arr[pos].name = name;
    books_arr[pos].quantity = quantity;
}

void add_user(user users_arr[], int pos, int id, string name)
{
    users_arr[pos].id = id;
    users_arr[pos].name = name;
}

void print_library_by_id(book books_arr[], int len)
{
    sort(books_arr, books_arr + len, compare_id);

    for (int i = 0; i < len; ++i)
    {
        cout << "id = " << books_arr[i].id << " name = " << books_arr[i].name;
        cout << " total_quantity = " << books_arr[i].quantity;
        cout << " total_borrowed = " << books_arr[i].quantity_borrowed << "\n";
    }
}

void print_library_by_name(book books_arr[], int len)
{
    sort(books_arr, books_arr + len, compare_name);

    for (int i = 0; i < len; ++i)
    {
        cout << "id = " << books_arr[i].id << " name = " << books_arr[i].name;
        cout << " total_quantity = " << books_arr[i].quantity;
        cout << " total_borrowed = " << books_arr[i].quantity_borrowed << "\n";
    }
}

void user_borrow_book(book books_arr[], int len_books, user users_arr[], int len_users, string user_name, string book_name)
{
    int id = -1;

    for (int i = 0; i < len_books; ++i)
    {
        if (books_arr[i].name == book_name)
        {
            id = books_arr[i].id;
            books_arr[i].quantity--;
        }
    }

    if (id == -1)
    {
        cout << "This Book Not Found\n";
    }
    else
    {
        for (int i = 0; i < len_users; ++i)
        {
            if (users_arr[i].name == user_name)
            {
                users_arr[i].id_book_borrowed[users_arr[i].num_borrowed] = id;
                users_arr[i].num_borrowed++;
            }
        }
    }
}

void user_return_book(book books_arr[], int len_books, user users_arr[], int len_users, string user_name, string book_name)
{
    int id = -1;

    for (int i = 0; i < len_books; ++i)
    {
        if (books_arr[i].name == book_name)
        {
            id = books_arr[i].id;
            books_arr[i].quantity++;
        }
    }

    if (id == -1)
    {
        cout << "This Book Not To Our Library\n";
    }
    else
    {
        for (int i = 0; i < len_users; ++i)
        {
            if (users_arr[i].name == user_name)
            {
                int indx;

                for (int j = 0; j < users_arr[i].num_borrowed; ++j)
                {
                    if (users_arr[i].id_book_borrowed[j] == id)
                    {
                        indx = j;
                        remove_from_arr(users_arr[i].id_book_borrowed, users_arr[i].num_borrowed, indx);
                    }
                }

                users_arr[i].num_borrowed--;
            }
        }
    }
}

void print_users(user users_arr[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << "user " << users_arr[i].name << " id " << users_arr[i].id;
        cout << "borrowed books ids: ";

        int j = users_arr[i].num_borrowed;

        sort(users_arr[i].id_book_borrowed, users_arr[i].id_book_borrowed + users_arr[i].num_borrowed);

        for (int k = 0; k < j; ++k)
        {
            cout << users_arr[i].id_book_borrowed[k] << " ";
        }

        cout << "\n";
    }

    cout << "\n";
}

void search_books_by_prefix(book books_arr[], int len, string prefix)
{
    int counter = 0;

    int len_pre = prefix.size();

    for (int i = 0; i < len; ++i)
    {
        int count = 0;

        for (int j = 0; j < len_pre; ++j)
        {
            if (books_arr[i].name[j] == prefix[j])
            {
                count++;
            }
        }

        if (count == len_pre)
        {
            cout << books_arr[i].name << "\n";
            counter++;
        }

    }

    if (counter == 0)
    {
        cout << "We dont have this book\n";
    }
}

void print_who_borrowed_book_by_name(book books_arr[], int len_books, user users_arr[], int len_users, string book_name)
{
    int id = -1;

    for (int i = 0 ; i < len_books; ++i)
    {
        if (books_arr[i].name == book_name)
        {
            id = books_arr[i].id;
        }
    }

    if (id == -1)
    {
        cout << "This Book We Dont Have It\n";
    }
    else
    {
        int counter = 0;

        for (int i = 0; i < len_users; ++i)
        {
            int work = users_arr[i].num_borrowed;

            for (int j = 0; j < work; ++j)
            {
                if (users_arr[i].id_book_borrowed[j] == id)
                {
                    cout << users_arr[i].name << "\n";
                    counter++;
                }
            }
        }

        if (counter == 0)
        {
            cout << "No Person Borrowed This Book\n";
        }
    }
}

int main()
{
    cout << "Hello Sir, U are welcome in our Library\n";
    cout << "****************************************\n";

    book books_arr[100];
    int added_books = 0;

    user users_arr[100];
    int added_users = 0;

    while(true)
    {
        cout << "1) add book\n";
        cout << "2) search books by prefix\n";
        cout << "3) print who borrowed book: \n";
        cout << "4) print library by id\n";
        cout << "5) print library by name\n";
        cout << "6) add user\n";
        cout << "7) user borrow book\n";
        cout << "8) user return book\n";
        cout << "9) print users\n";
        cout << "10) Exit\n";

        cout << "Choose Number from 1 to 10\n";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            int id_book;
            string name_book;
            int quantity_book;
            cin >> id_book >> name_book >> quantity_book;

            add_book(books_arr, added_books, id_book, name_book, quantity_book);

            added_books++;
        }
        else if (choice == 2)
        {
            string prefix;
            cin >> prefix;

            search_books_by_prefix(books_arr, added_books, prefix);
        }
        else if (choice == 3)
        {
            string book_name;
            cin >> book_name;

            print_who_borrowed_book_by_name(books_arr, added_books, users_arr, added_users, book_name);
        }
        else if (choice == 4)
        {
            print_library_by_id(books_arr, added_books);
        }
        else if (choice == 5)
        {
            print_library_by_name(books_arr, added_books);
        }
        else if (choice == 6)
        {
            int id;
            string name;
            cin >> name >> id;

            add_user(users_arr, added_users, id, name);

            added_users++;
        }
        else if (choice == 7)
        {
            string user_name;
            string book_name;
            cin >> user_name >> book_name;

            user_borrow_book(books_arr, added_books, users_arr, added_users, user_name, book_name);
        }
        else if (choice == 8)
        {
            string user_name;
            string book_name;
            cin >> user_name >> book_name;

            user_return_book(books_arr, added_books, users_arr, added_users, user_name, book_name);
        }
        else if (choice == 9)
        {
            print_users(users_arr, added_users);
        }
        else if (choice == 10)
        {
            cout << "Thank U\n";
            break;
        }
        else
        {
            cout << "Please Choose From 1 to 10\n";
            continue;
        }

    }

    return 0;
}
