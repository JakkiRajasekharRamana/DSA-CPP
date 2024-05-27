#include <bits/stdc++.h>
using namespace std;

class Book{
private:
    string title,author,publisher,bookid,edition,ISBN;
    
public:

    Book(){

    }

    Book(string t,string a,string p,string b,string e,string I){
        title=t;
        author=a;
        publisher=p;
        bookid=b;
        edition=e;
        ISBN=I;
    }

    void reading(){
        cout<<"ENter Title:";
        cin>>title;
        cout<<"ENter author:";
        cin>>author;
        cout<<"ENter publisher:";
        cin>>publisher;
        cout<<"ENter bookid:";
        cin>>bookid;
        cout<<"ENter edition:";
        cin>>edition;
        cout<<"ENter ISBN No:";
        cin>>ISBN;
    }

    void display(){
        cout<<"Details Of the book are:\n";
        cout<<"TITLE:"<<title<<"\nAUTHOR:"<<author<<"\nPUBLISHER:"<<publisher<<"\nEDITION:"<<edition<<"\nISBN"<<ISBN;

    }

};

int main(){

    Book b;

    b.reading();

    b.display();
}