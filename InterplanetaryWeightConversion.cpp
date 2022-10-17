/*This program promts a user to enter their weight on Earth and what planet they want 
to travel to.  The program will then convert the user's weight to their weight on their
chosen planet and return said weight*/

#include <iostream>
using namespace std;

int main() {

string name;

cout << "Hello interplanetary traveler! Before leaving Earth, we need to know how much you will weigh at your destination! First: What is your name? ";
cin >> name;

double earthWeight;



cout << "Hey " << name << "! How much do you weigh on Earth in pounds? ";
cin >> earthWeight;

string planet;

askTheUser :

cout << "Now what planet do you want to visit? ";
cin >> planet;

int planetNum;

if (planet == "Mercury"){
  planetNum = 1;
} else if ( planet == "Venus") {
  planetNum = 2;
} else if ( planet == "Mars") {
  planetNum = 3;
} else if (planet == "Jupiter") {
  planetNum = 4;
} else if (planet == "Saturn") {
  planetNum = 5;
} else if (planet == "Uranus") {
  planetNum = 6;
} else if (planet == "Neptune") {
  planetNum = 7;
} else if (planet == "Pluto") {
  cout << "I wish Pluto were still a planet! However, it isn't, so select again!\n";
  goto askTheUser;
} else {
  cout << "That is not a valid planet " << name << " :(" << endl;
  goto askTheUser;
}

double weight;

switch (planetNum) {
  case 1:
    weight = earthWeight * 0.38;
    break;
  case 2: 
    weight = earthWeight * 0.91;
    break;
  case 3:
    weight = earthWeight * 0.38;
    break;
  case 4:
    weight = earthWeight * 2.34;
    break;
  case 5:
    weight = earthWeight * 1.06;
    break;
  case 6:
    weight = earthWeight * 0.92;
    break;
  case 7:
    weight = earthWeight * 1.19;
    break;
}
  
cout << "Awesome! You would weigh " << weight << " pounds on " << planet << endl;
cout << "Now that we know your weight, we can properly plan for your journey! Have a safe flight!\n";
  
  
 
  
  
}
