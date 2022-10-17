//Assignment - 5
/*Imagine a publishing company which does marketing for book and audiocassette versions.
Create a class publication that stores the title (a string) and price (type float) of a publication. 
From this class derive two classes: book, which adds a page count (type int), and tape, which adds a 
playing time in minutes (type float). Write a program that instantiates the book and tape class, 
allows users to enter data and displays the data members.
Catch an exception and replace all the data member values with zero values.
*/

//Title-Publication
//Author-Arpit Bansal,2213502,N div
//Date-15/05/22

#include <iostream>
using namespace std;

class publication{
    string title;
    float price;
    public:
        void get_data();
        void put_data();
};

class Book : public publication{
    int page_count;
    public:
        void get_page();
        void put_page();
};

class Audio : public publication{
    float pt;
    public:
        void get_pt();
        void put_pt();
};

void publication::get_data(){
    cout<<"\nEnter the title of the publication:";
    cin>>title;
    cout<<"\nEnter the price of the publication:";
    cin>>price;
}

void publication ::put_data(){
    cout<<"\n\tTitle : "<<title;
    cout<<"\n\tPrice : "<<price;
}

void Book ::get_page(){
    cout <<"\nEnter the no of page in the book: ";
    cin >>page_count;
}
void Book ::put_page(){
    try{
        if(page_count<=0){
            throw page_count;
        }    
        cout<<"\n\tPages: "<<page_count;
    }
    catch(int page_count){
        cout<<"\n\t\tPAGE COUNT ERROR !!!!";
    }   
}

void Audio ::get_pt(){
    cout <<"\nEnter the length of audio cassate is min: ";
    cin >>pt;
}
void Audio ::put_pt(){
    try{
        if(pt<=0){
            throw pt;
            }
        cout<<"\n\tPlay Time: "<<pt;    
        }
    catch(float pt){
        cout<<"\n\t\tPLAY TIME ERROR !!!!";
    }   
}

int main(){
    int x;
    publication p;
    Book b;
    Audio a;

    cout <<"\n\n\t----->Program by Arpit Bansal<-----";
    cout <<"\nEnter 1 for publication";
    cout <<"\nEnter 2 for Book";
    cout <<"\nEnter 3 for Audio Cassette";
    cout <<"\nEnter you choice: ";
    cin>> x;
    
    
    switch (x){
    case 1:
        p.get_data();
        p.put_data();
        break;
    case 2:
        b.get_data();
        b.get_page();
        b.put_data();
        b.put_page();
        break;
    case 3:
        a.get_data();
        a.get_pt();
        a.put_data();
        a.put_pt();
        break;
    default:
        p.get_data();
        p.put_data();
        break;
    }

    return 0;
}