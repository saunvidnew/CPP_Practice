#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player{
public:
    string name;
    int health;
    int xp;

    void talk(string s ){
        cout << name <<" says "<< s<<endl;
    }
    void stats(){
        cout<< name<<" has "<<health <<"HP"<< endl;
    }
    bool isdead();

    Player(){
        name="None";
        health=100;
        xp=2;
        cout << "Empty constructor called"<<endl;
    }
    Player(string n, int x){
        name=n;
        health=100;
        xp=x;
        cout << "constructor with args called"<<endl;
    }
    Player(const Player &source){
        name=source.name;
        health=source.health;
        xp=source.xp;


    }

};

int main(){
    Player Aneesh;
    Player Frank("Frank", 3);
   // Player Saunvid;
    //Frank.name="Frank";

   // Frank.talk("hey, how are you?");
 //   Frank.stats();
    Player Saunvid=Aneesh;

    return 0;
}