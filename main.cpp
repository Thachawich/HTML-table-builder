#include<iostream>
#include<fstream>   
#include<string> 

using namespace std;

int main()
{
    int age;
    string name, colour, food;

    fstream fout;

    fout.open("table.txt", ios::out);
    fout << "<tr><th>Name" << "\n\t" << "<th>age" << "\n\t" << "<th>colour" << "\n\t" << "<th>food";

    cout << "Enter details:";

    for (int i = 1; i <= 3; i++)
    {
        cout << "\nName " << i << " :";
        getline(cin, name);

        cout << "age " << i << " :";
        cin >> age;
        cin.ignore();

        cout << "Colour " << i << " :";
        getline(cin, colour);

        cout << "food " << i << " :";
        getline(cin, food);
          

        fout << "\n</tr><tr>\n\t<th>" << name << "\n\t" << "<th>" << age << "\n\t" << "<th>" << colour << "\n\t" << "<th>" << food;
    }
    fout.close(); 
    fstream fin;
    string data;

    cout << "\nfile created";

    
    fin.open("table.txt", ios::in);

    for (int i = 0; i <= 5; i++)
    {

        getline(fin, data);
        cout << data << "\n";


    }
    {
        ifstream x;
        string name;
        string head = "<!DOCTYPE html>\n<html>\n<head> <style> table, th, td { border: 1px solid black; } </style> </head><body>\n<table>\n";
        string tail = "</table>";
        string lend = "</th>\n";

        ofstream y;
        x.open("table.txt", std::ios::app);
        y.open("table.html");

        y << head;
        while (getline(x, name)) {
            y << name;
            y << lend;

        }
        y << tail;
    }

    system("table.html");
}
