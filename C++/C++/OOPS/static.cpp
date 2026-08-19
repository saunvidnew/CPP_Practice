#include<iostream>
#include<string>
using namespace std;

class Player{
    public:
        static int count;
        
        Player(){
            count++;
        }

        // void get_count(){
        //     cout << "The number of players are: " << count << endl;
        // }
};

// Initialize static member
int Player::count = 0;
void no_players(){
        cout<< Player::count;
    }
int main(){
    Player p1;
    Player p2;

    no_players();

    

    // p1.get_count();  // Works fine (but better style: Player::get_count());
 
    return 0;
}
