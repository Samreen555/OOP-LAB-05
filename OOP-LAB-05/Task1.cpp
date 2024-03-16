////#include<iostream>
////#include<vector>
////
////using namespace std;
////
//////"Develop a class structure in C++ for managing books. The structure should include a 'Book' class with attributes such as title, author, and publication year, along with methods for adding, removing, and listing books.  
////
////class Book
////{
////private:
////	string title;
////	string author;
////	int publicationYear;
////public:
////	Book(string title, string author, int publicationYear)
////	{
////		this->title = title;
////		this->author = author;
////		this->publicationYear = publicationYear;
////	}
////	string getTitle()
////	{
////		return title;
////	}
////	string getAuthor()
////	{
////		return author;
////	}
////	int getPublicationYear()
////	{
////		return publicationYear;
////	}
////};
//////Implement a 'Library' 
////
////class Library {
////	//class responsible for managing collections of books using appropriate data structures such as vectors
////	vector<Book> books;
////public:
////	void addBook(string title, string author, int publicationYear)
////	{
////		books.push_back(Book(title, author, publicationYear));
////		cout << "Book added" << endl;
////
////		cout << "Title: " << books[0].getTitle() << endl;
////		cout << "Author: " << books[0].getAuthor() << endl;
////		cout << "Publication Year: " << books[0].getPublicationYear() << endl;
////
////		cout << endl;
////
////	}
////	// function to remove books from the collection
////	void removeBook(string title, string author, int publicationYear)
////	{
////		for (int i = 0; i < books.size(); i++)
////		{
////			if (books[i].getTitle() == title && books[i].getAuthor() == author && books[i].getPublicationYear() == publicationYear)
////			{
////				books.erase(books.begin() + i);
////				cout << "Book removed" << endl;
////				break;
////			}
////		}
////	}
////	// function to list all books in the collection
////	void listBooks()
////	{
////		for (int i = 0; i < books.size(); i++)
////		{
////			cout << "Title: " << books[i].getTitle() << endl;
////			cout << "Author: " << books[i].getAuthor() << endl;
////			cout << "Publication Year: " << books[i].getPublicationYear() << endl;
////			cout << endl;
////		}
////	}
////
////
////};
////// Create a main function in C++ to test the functionality of the book management system. Use the provided 'Book' and 'Library' classes, along with appropriate method calls, to add, remove, and list books within the library. 
////
////int main()
////{
////	Library library;
////	//make a list of all books and print them
////	library.addBook("The", "zain", 1907);
////	library.addBook("The Hob", "zain", 1938);
////	library.addBook("the race", "zain", 1980);
////	
////	library.listBooks();
////	cout << "book removed://\n ";
////	library.removeBook("The Hobbit", "zain", 1937);
////	system("pause>0");
////	return 0;
////
////}
//#include <iostream>
//#include <vector>
//#include <memory> // for smart pointers
//
//using namespace std;
//
//class Book
//{
//private:
//    string title;
//    string author;
//    int publicationYear;
//
//public:
//    Book(const string& title, const string& author, int publicationYear)
//        : title(title), author(author), publicationYear(publicationYear) {}
//
//    const string& getTitle() const { return title; }
//    const string& getAuthor() const { return author; }
//    int getPublicationYear() const { return publicationYear; }
//};
//
//class Library
//{
//private:
//    vector<unique_ptr<Book>> books; // Use smart pointers
//
//public:
//    void addBook(const string& title, const string& author, int publicationYear)
//    {
//        books.push_back(make_unique<Book>(title, author, publicationYear)); // Use make_unique for dynamic allocation
//        cout << "Book added" << endl;
//    }
//
//    void removeBook(const string& title, const string& author, int publicationYear)
//    {
//        for (auto it = books.begin(); it != books.end(); ++it)
//        {
//            if ((*it)->getTitle() == title && (*it)->getAuthor() == author && (*it)->getPublicationYear() == publicationYear)
//            {
//                it = books.erase(it);
//                cout << "Book removed" << endl;
//                break;
//            }
//        }
//    }
//
//    void listBooks() const
//    {
//        for (const auto& book : books)
//        {
//            cout << "Title: " << book->getTitle() << endl;
//            cout << "Author: " << book->getAuthor() << endl;
//            cout << "Publication Year: " << book->getPublicationYear() << endl;
//            cout << endl;
//        }
//    }
//};
//
//int main()
//{
//    Library library;
//    //make a list of all books and print them
//    library.addBook("The", "zain", 1907);
//    library.addBook("The Hob", "zain", 1938);
//    library.addBook("the race", "zain", 1980);
//
//    library.listBooks();
//    cout << "book removed://\n ";
//    library.removeBook("The Hobbit", "zain", 1937);
//    system("pause>0");
//    return 0;
//}
