/* 
 * File:   main.cpp
 * Author: Jorge Sandoval
 * Created on October 21, 2017, 9:07 AM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Program Execution Begins Here

//A Card Generated (1-13)
int generate_card()
{
return rand() % 13 + 1;
}


//Generating The Computers Card.

int generate_ai_card()
{
return rand() % 7 + 15;
}  
///////////////////////////////////////////////////////////////////////////////


int main(int argc, char** argv){
    
    //Declare all Variables Here
   char strt,s,e;
   srand(time(NULL));
   bool play;
   int ai_card, my_card;
   char x;

    //Process/Calculations Here
   
       //Information of Game//

   cout << "        Welcome to the game of Twenty One!         " << endl;
   cout <<"Rules Are Simple: "<<endl;
   cout<<"Each participant attempts to beat the dealer by getting a count as"
           " close to 21 as possible, without going over 21."<<endl;
  
   //
 
   cout<<"Press A to Start The Game"<<endl;
   cin>>strt;
   
   
   if (strt == 'A' | strt == 'a'){
        play = true;

// Get the AI's card.
    ai_card = generate_ai_card();

// Get your first card.
    my_card = generate_card();

        cout << "You have " << my_card << " (h) Hit or (s) Stay?:(Choose Wisely) ";

// Ask for a hit or stay.
    do{

        cin >> x;

// If they have hit...
    if ( x == 'h' ){
    
// Generate a card, and add it on.
        my_card = my_card + generate_card();

// Have they bust?
    if ( my_card > 21 ){
        cout << "You Bust! Better Luck Next Time (" << my_card << ").\n";
    play = false;
    }
    else{
        cout << "You now have " << my_card << " - (h) Hit or (s) Stay?: (Choose Wisely) ";
       }
}
// If they stayed...
    else if ( x == 's' ){
        
// ... See who is bigger.
    if ( my_card > ai_card ){
        
// You WIN!
    cout << "You won! You Beat the Dealer! (" << my_card << " vs " << ai_card << ")\n";
     play = false;
    }

    else{
        
// You have FAILED.
    cout << "You lost! Dealer Beat You! (" << my_card << " vs " << ai_card << ")\n";
     play = false;
    }
 }

    else{
        cout << "Please either type \"h\" to hit or \"s\" to stay: ";
    }
 }

        while ( play == true );

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

 }
  
   else {
         
       cout<<"Exiting"<<endl;
   }
   
 
   return 0;
}