#include <iostream>
#include <string>
using namespace std;

class Player{
private:    
   std::string name;
    int health;
public:
    std::string get_name()const
    {return name;}
    void set_name(std::string name_val) {name = name_val; }
    void display_player_name(const Player &source);
    Player(std::string name_val ="None", int health =0){}
  
};

void display_player_name(const Player &source){
cout<<source.get_name()<<endl;
}
Player::Player(std::string name_val, int health_val)
    :name{name_val},health{health_val}{}

int main(){
const Player john("John");
display_player_name(john);




    return 0;
}



