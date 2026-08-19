#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Movie {
private:
    string name;
    int watched_times;
    string rating;
    

public:
    static int total_movies_lists;
    Movie(){
        name="None";
        watched_times=0;
        rating="None";
      

    }

    Movie(string n, int c, string r){
        name=n;
       // *name_ptr=n;
        watched_times=c;
        rating=r;
    }
    void display(){

        cout<< "Movie "<<name<<" watched "<<watched_times<<" times."<<endl;
        
      
        
    }
    
    string get_name(){
        return name;
    }

    void increment(){
        watched_times++;
    }

    ~Movie(){
        
    }

    
};

class Movies{
private:
    vector<Movie> *movie;
    int size;
    

public:

    Movies(){
        Movie::total_movies_lists++;
        movie=new vector<Movie>;
       
    } 

    

    bool check_name(string n){
        size=movie->size();
        for(int i=0;i<size;i++){
            string name=(*movie)[i].get_name();
            if(name==n){
                return false;
            }
        }
        return true;

    }

    void watched_more(string n){
        size=movie->size();
        string name;
        for(int i=0;i<size;i++){
            name=(*movie)[i].get_name();
            if(name==n){
            (*movie)[i].increment();
            break;
            }
        }
    }

    void add_movies(string n, int c, string r){
        if(check_name(n)){
            movie->push_back(Movie(n,c,r));
            cout << "Movie "<<n<<" added to the list."<<endl;
        }
        else{
            cout<<"Movie already exists"<<endl;
        }

    }

    void print(){
        size=movie->size();
        if(size>0){
        for(int i=0;i<size;i++){
            (*movie)[i].display();
        }
        }
        else{
            cout<<"No movie list not created"<<endl;
        }
        
    }
    ~Movies(){
        delete movie;
    }

    // void watched_more(){

    // }

    

};
int Movie::total_movies_lists = 0;

int main(){

    Movies my_movie;
    // my_movie.print();
    my_movie.add_movies("3 idiots", 2, "PG");
    my_movie.add_movies("Wolf of Wall Street", 3, "A");
    my_movie.print();
    my_movie.add_movies("Wolf of Wall Street", 1, "PG");
    my_movie.watched_more("3 idiots");
    my_movie.print();

}
