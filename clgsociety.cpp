#include <iostream>
using namespace std;

class clgsociety {
protected:
    string societyname;
    string president;
    int membersofsociety;

public:
    clgsociety(string name, string pres, int members) {
        societyname = name;
        president = pres;
        membersofsociety = members;
    }

    virtual void conductevent() {
        cout << societyname << "" << endl;
    }
};

class techsociety : public clgsociety {
    string domain;

public:
    techsociety(string name, string pres, int members, string dom)
        : clgsociety(name, pres, members) 
    {
        domain = dom;
    }

    void conductevent() override {
        cout << societyname << " (" << domain << ") is hosting a tech event!" << endl;
        cout<<membersofsociety<<" members of society"<<endl;

    }
};

int main() {
    techsociety myclub("Ronit's Club", "Ronit", 10, "ronitbby.in");
    myclub.conductevent(); 
    techsociety myclub2("Messi's club","Ronit", 11,"ronaldobettersuii.in");


    return 0;
}
