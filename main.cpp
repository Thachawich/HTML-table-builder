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
    fout << "Name" << "\n" << "age" << "\n" << "colour" << "\n" << "food" << "\n";

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
          

        fout << name << "\n" << age << "\n" << colour << "\n" << food << "\n";
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
        string head = "<!DOCTYPE html>\n<html>\n<head> <style> table, th, td { border: 1px solid black; } </style> </head><body>\n<table>";
        string tail = "</table>";
        string bodystart = "</th>\n";
        string bodyclose = "<tr>\n";
        string lend = "<th>";

        ofstream y;
        x.open("table.txt", std::ios::app);
        y.open("table.html");

        y << head;
        while (getline(x, name)) {
            y << "<tr>\n";
            for (int i = 0;i < 4;i++) {
                y << "<th>";
                y << name;
                y << "</th>\n";
            }
            y << "</tr>\n";
        }
    }
