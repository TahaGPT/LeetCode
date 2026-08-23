// Securiti Interview Question

#include <bits/stdc++.h>
using namespace std;

void check(string& str)
{
    vector<string> temp;
    string cop = str;
    string t = "";
    bool flag = false;
    for(char c : cop)
    {
        t += c;
        if(c == ';')
        {
            if(flag)
                temp.emplace_back(t);
            else{
                flag = true;
                str = t;
            }
            t = "";
        }
    }
    sort(temp.begin(), temp.end());
    for(string s : temp)
    {
        str += s;
    }    
}

void func(vector<string>& arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());



    for(int i = 0 ; i < n; i++)
    {
        check(arr[i]);
    }

}

int main()
{
vector<string> data = {

    "Name:Ali;Fruit:Banana;Age:18;School:Oxford;City:Lahore;Hobby:Cricket;Country:Pakistan;Grade:A;",
    
    "Name:Hamza;City:Faisalabad;Skill:Coding;Age:21;Fruit:Orange;Grade:B;University:Stanford;Pet:Dog;Language:C++;",
    
    "Name:Sara;School:MIT;Fruit:Grapes;FavoriteSubject:Math;City:Rawalpindi;Age:19;Hobby:Painting;",
    
    "Name:Ayesha;Fruit:Mango;University:Cambridge;Grade:A+;City:Karachi;Age:20;Skill:Design;Laptop:MacBook;",
    
    "Name:Usman;Car:Toyota;Fruit:Apple;Pet:Cat;Sport:Football;City:Islamabad;Age:22;University:Harvard;Grade:B+;",
    
    "Name:Zainab;Hobby:Reading;Fruit:Strawberry;Phone:iPhone;Age:18;School:Oxford;City:Lahore;Language:Python;Grade:A;",
    
    "Name:Bilal;Skill:AI;Project:Chatbot;Age:23;Fruit:Pineapple;Institute:NUST;Grade:A;City:Multan;",
    
    "Name:Hira;FavoriteColor:Blue;Fruit:Peach;Hobby:Dancing;School:Beaconhouse;City:Quetta;Age:17;",
    
    "Name:Omar;Skill:DevOps;Fruit:Watermelon;Car:Honda;University:LUMS;Pet:Bird;Age:24;City:Peshawar;Grade:B;",
    
    "Name:Fatima;Fruit:Cherry;Age:21;Hobby:Writing;Institute:GIKI;Grade:A;Language:Java;City:Sialkot;",
    
    "Name:Ahmed;Skill:Backend;Framework:NodeJS;Fruit:Guava;City:Hyderabad;Age:20;University:FAST;Laptop:Dell;Grade:A+;",
    
    "Name:Noor;Game:Valorant;Hobby:Gaming;Rank:Diamond;Fruit:Kiwi;Age:18;School:CitySchool;City:Gujranwala;",
    
    "Name:Saad;Skill:CyberSecurity;Cert:CEH;Fruit:Mango;Age:25;Institute:ITU;Grade:B;City:Bahawalpur;",
    
    "Name:Laiba;Hobby:Photography;Fruit:Apple;Camera:Canon;Age:19;School:Roots;City:RahimYarKhan;Grade:A;",
    
    "Name:Kashif;Skill:EmbeddedSystems;Project:IoTDevice;Fruit:Banana;Age:26;Institute:UET;Language:C;City:Sukkur;Grade:B+;",
    
    "Name:Maryam;Platform:WordPress;Fruit:Orange;Hobby:Blogging;Age:22;University:COMSATS;City:Abbottabad;Grade:A;",
    
    "Name:Usama;Cert:Cisco;Fruit:Pomegranate;Skill:Networking;Age:23;University:NUML;City:Gwadar;Laptop:Lenovo;Grade:B;",
    
    "Name:Alina;Tool:Photoshop;Fruit:Strawberry;Hobby:Sketching;School:APS;Age:18;City:Mardan;",
    
    "Name:Taha;Skill:SoftwareEngineering;Fruit:Mango;Language:C++;Age:20;University:FAST;Pet:Parrot;City:Lahore;Grade:A;",
    
    "Name:Rehan;Tool:Python;Fruit:Apple;Skill:DataScience;Laptop:HP;Age:21;Institute:NED;City:Karachi;Grade:A+;"
};

    func(data);

}