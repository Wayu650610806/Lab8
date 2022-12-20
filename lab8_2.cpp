#include <iostream>
#include<string>
using namespace std;

int main() {
    string name,day,mov,text;
    int ans=0,num;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout <<"?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name<<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout <<name<<": ";
    cin >>num;
    while(num>100){   
        num=num/10;
        ans=num;
    }
    cout<<"Fahsai: I think you may be GEAR "<<ans-12<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n"<<"Fahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    cin.ignore();
    getline(cin,mov);

    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";

    getline(cin,day);

    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching " <<mov<<" with you.\n";
    cout<<name<<": ";
    getline(cin,text);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";

}



/*Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
