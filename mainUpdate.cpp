//program to help decide what outfit to wear based on the occasion
//occasion:attire options are:
//work:business, workout:fitness, datenight:sexy, beach:swimming, bedtime:comfy

// 1) user must choose the occasion
// 2) program outputs appropriate attire for said occasion

#include <iostream>
#include <string>
using namespace std;

struct Attire{
    string theme;
    string timeOfDay;
    string top;
    string bottom;
    string shoes;
    string extras;
};

void decideAppropriateAttire(Attire a){
    cout << "Therefore, the appropriate theme is "<<a.theme<< endl;
    cout << "The time of day you'll be wearing your outfit is " <<a.timeOfDay<<endl;
    cout << "The appropraite top to wear is a "<<a.top<<endl;
    cout << "The appropraite bottom choice is "<<a.bottom<<endl;
    cout << "You will also need "<<a.extras<<" to complete your outfit"<<endl;
}

int main()
{
    
    cout << "Hello, I will help you decide the appropriate attire for the desired occasion."<<endl;
    string decision = "";
    cout << "Choose an occasion from the following options:"<<endl<<
    "1. work"<<endl<<
    "2. workout"<<endl<<
    "3. date night"<<endl<<
    "4. beach"<<endl<<
    "5. bed time"<<endl;
    getline(cin,decision);
    
    cout << "The occasion you have chosen is " << decision << "." << endl;
    
    Attire work = {"BUSINESS ATTIRE","morning","blazer","slacks","high heals","laptop"};
    Attire workout = {"FITNESS GEAR","morning","tshirt","leggings","running shoes","headphones"};
    Attire dateNight = {"SEXY ATTIRE","evening","blouse","jeans","heals","lipstick"};
    Attire beach = {"SWIMWEAR","daytime","bikini top","bikini bottoms","flip flops","sunscreen"};
    Attire bedTime = {"COMFY ATTIRE", "bedtime","baggy shirt","sweats","socks","netflix"};
    
    Attire occasion [] = {work, workout, dateNight, beach, bedTime};
    
    if (decision == "work" || "1"){
        decideAppropriateAttire(work);
    }
    else if (decision == "workout" || "2"){
        decideAppropriateAttire(workout);
    }
    else if (decision == "date night" || "3"){
        decideAppropriateAttire(dateNight);
    }
    else if (decision == "beach" || "4"){
        decideAppropriateAttire(beach);
    }
    else if (decision == "bed time" || "5"){
        decideAppropriateAttire(bedTime);
    }
    else {
        cout << "That is not a valid option. Please try again."<<endl;
        // getline(cin,decision);
    }

    return 0;
    
    };
