/* 
 * File:   main.cpp
 * Author: Jorge Sandoval
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Assignment 3 Menu
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;


// Function
int menu(int answer);
//Separate function for each choice
int bC(int answer);
int bMI(int answer);
int bCP(int answer);
int cD(int answer);
int fGC(int answer);
int mT(int answer);
int mM(int answer);
int rN(int answer);
int sC(int answer);
int sS(int answer);
    
//Beginning of the Menu

int main()
{
    int answer;
    bool keepLooping = true;

    while (keepLooping)
    {
        cout << "Pick a choice from the list:"
                " \n(1)Bank Charges\n "
                "\n(2)Body Mass Index\n"
                " \n(3)Book Club Points\n "
                "\n(4)Change For a Dollar\n"
                "\n(5)Fat Gram Calculator\n"
                " \n(6)Math Tutor\n \n"
                "(7)Minimum/Maximum\n "
                "\n(8)Roman Numerals\n "
                " \n(9)Shipping Charges\n "
                "\n(10)Software Sales\n\n ";
        
        cin >> answer;

        menu(answer);

        if (answer < 1 || answer > 10)
        {
            keepLooping = true;
        }
		else
        {
            keepLooping = false;
        }
    }
}

//The Codes of Each of the Programs in the Menu 1-10

int menu(int answer)
{
    switch (answer)
    {   

//Program Bank Charge
        
        case 1 :
             bC(answer);
             
 int checks;
 float   bb,        //Beginning Balance
         fO,        //Fee #1 
         fT,        //Fee #2 
         ttlF;      //Total Fees
        

    //Input or initialize values Here
        
 cout << "\nEnter Your Beginning Balance: $";
    cin >> bb;
    
    //Process/Calculations Here

   if( bb < 0)
 cout <<"URGENT ACCOUNT OVERDRAWN!";
 else
 {
 cout << "Enter number of checks written : ";
 cin >> checks;
 
 if(bb< 400)
 fO = 15.00;
 else
 fO = 0.00;

 if(checks >= 0 && checks < 20)
 fT = checks * 0.10;
 
 if(checks >= 20 && checks <= 39)
 fT = checks * 0.08;
 
 if(checks >= 40 && checks <= 59)
 fT = checks * 0.06;
 
 if(checks >= 60)
 fT = checks * 0.04;
 
 if(checks < 0)
 cout << "The number of checks CANNOT be negative!! \n\n";

 ttlF = fO + fT;


cout<< "   Monthly Fees   "<<endl;

 cout << " Low Balance fee: $" << fO << endl;

  cout << " Check fees: $" << fT << endl;
 
  cout << " Total Monthly fees: $" << ttlF << "\n\n";
 }
            break;

 //Body Mass Index Program
            
        case 2:
            bMI(answer);
            
            float   Wt,  //Weight
        
        Ht,  //Height
        
        BMI; //Body Mass Index
    
    //Input or initialize values Here

cout<<"\nPlease enter your weight in pounds :";
 cin>> Wt;

 cout<<"Please enter your height in inches :";
 cin>> Ht;
        
    //Process/Calculations Here

    BMI = Wt * (703 / pow(Ht, 2));
    
    // Display body mass index

cout << "Your BMI is " << BMI << endl;
    if (BMI >= 18.5 && BMI <= 25)
cout << "You are of normal weight.\n";
    else if (BMI >= 25)
cout << "You are overweight.\n";
    else
cout << "You are underweight.\n";
            
            break;

//Book Club Points Program 
            
        case 3:
            bCP(answer);
            
             int     books,
         points;
        

    //Input or initialize values Here
        
 cout << "\nHow Many Books Did You Buy this Month? ";
    cin >> books;
    
    //Process/Calculations Here

  if(books == 0)
 {
 points = 0;
 cout << "You Earned : " << points << " points";
 }
 
    if(books == 1)
 {
 points = 5;
 cout << "You Earned : " << points << " points";
 }
 
    if(books == 2)
 {
 points = 15;
 cout << "You Earned : " << points << " points";
 }
 
    if(books == 3)
 {
 points = 30;
 cout << "You Earned : " << points << " points";
 }
 
    if(books >= 4)
 {
 points = 60;
 cout << "You Earned : " << points << " points";
 }
    break;

//Make a Dollar Game Program    
    
    case 4:
            cD(answer);
            
            int     P,     //Pennies
                    N,     //Nickels 
                    D,     //Dimes
                    Q,     //Quarters 
                    amnt,  //Amount the user input 
                    dollar;
    //Input or initialize values Here

cout<<"\nPlease enter amount of Pennies: ";
    cin>> P;

 cout<<"Please enter amount of Nickels :";
    cin>> N;
 
 cout<<"Please enter amount of Dimes :";
    cin>> D;
 
 cout<<"Please enter amount of Quarters :";
    cin>> Q;
 
  // The value the user has entered 
   
 amnt = (.1 * P) + (.5 * N) + (.10 * D) + (.25 * Q); 
        
    //Process/Calculations Here
if (amnt == dollar) 
    cout << "Congratulations! You entered $1!" << endl; 
else if (amnt < dollar) 
    cout << "The value you entered is less than $1." << endl; 
else 
    cout << "The value you entered is greater than $1. You entered : $" <<amnt<< endl; 

                break;
                      
//Fat Gram Calculator Program               
                
    case 5:
            fGC(answer);     
            
            float   c,              //calories
        fg,             //fatgrams 
        fc,             //fatcalories 
        lf;             //lowfat
        

    //Input or initialize values Here
        
 cout << "\nEnter the number of calories in food: ";
 cin >> c;
 if(c< 0)
 {
 cout << "\nCalories cannot be less than 0!! \n"
  << "Enter calories again: ";
 }

 cout << "\nEnter the number of fat grams in food: ";
 cin >> fg;
 if(fg< 0 || fg > c)
 {
 cout << "\nFatgrams cannot be less than 0 \n"
  << "Enter fatgrams again: ";
 }
    
    //Process/Calculations Here
fc = fg * 9;
 lf = fc/c;

 cout << "Calories from fat: " << lf * 100 << "%" <<endl;
 if(lf < 0.30)
 cout << "Low in Fat";
            
                break;
 
 //Math Tutor Program
 
    case 6:
            mT(answer);
       
            int     num1,
         num2,
         sum,
         seed,
         ansr;
        seed = time(0);

    //Input or initialize values Here

srand(seed);

num1=rand()%100,  //generates a random number in 1-100 range
num2=rand()%100,  //generates a random number in 1-100 range
 
        
    //Process/Calculations Here

cout << "  " << num1 << endl;

cout << "+ " << num2 << endl;

cout << "  __\n  ";

cin>>ansr;

sum = num1 + num2;

if (ansr == sum)

cout << "\nCongratulations! " << ansr << " is the correct answer.\n";

else
	
cout << "\nIncorrect answer!\n";

cout << num1 << " + " << num2 << " = " << sum << endl;

          
            break;
            
//Min and Max Numbers Program            
            
    case 7:
            mM(answer);   
            
            float numb1, numb2;
    
    //Input or initialize values Here

cout<<"\nPlease enter Number One : ";
cin>>numb1;
cout<<"Please enter Number Two : ";
cin>>numb2;

       
    
    //Process/Calculations Here
if(numb1<numb2)
cout<<numb1<< " is smaller than "<<numb2;
else
    cout<<numb2<< " is smaller than "<<numb1;
            
            break;
            
//Roman Numerals Program            
            
    case 8:
            rN(answer);  
            
            break;
            
//Shipping Calculator Program           
            
    case 9:
            sC(answer);  
            
            float   wt,           //Weight 
                    dt,           //Distance 
                    wC,           //WeightCost 
                    mC,           //MilesCost 
                    ttlC;         //TotalCost
        

    //Input or initialize values Here
        
cout << "\nEnter the weight of the package in Kilograms Please : ";
 cin >> wt;
    
    //Process/Calculations Here

 if(wt <= 0 || wt > 20)
 {
 cout << "What kind of package are you sending!"
      << "Weight has to be more than 0 and less than 20";
 }
 else
 {
 cout << "Whats the distance to be shipped in MILES please : ";
 cin >> dt;

 if(dt < 10 || dt > 3000)
 {
 cout << "No Shipping!"
  << "Distance has to be between 10 - 3,000 miles!";
 }

 if(wt <= 2)
 mC = (dt/500) * 1.10;
 
 if(wt > 2 && wt <= 6)
 mC = (dt/500) * 2.20;
 
 if(wt > 6 && wt <= 10)
 mC = (dt/500) * 3.70;
 
 if(wt > 10 && wt <= 20)
 mC = (dt/500) * 4.80;

 cout << "  Charges  "<<endl;
 cout << "Total Shipping Charges: $" << mC << "\n\n";
 }
            
            break;
            
//Software Sales Program            
            
    case 10:
            sS(answer);       
            
            int units, 
                sm,//sum
                total;

    //Input or initialize values Here
        
cout<<"\nHow Many Units were Sold ? "<<endl;
    cin>>units;
    //Process/Calculations Here

 if(units>0 && units<10)
 {
 total=units*99;
 cout<<"Your Total Sum Is : $ "<<total<<endl;
 
 
 }
 else if(units>10 && units<19)
 {
 sm=(units*99)* .20;
 total=(units*99)-sum;
 cout<<"Your Total Sum Is : $ "<<total<<endl;
 
 }
 else if(units>20 && units<49)
 {
 sm=(units*99)* .30;
 total=(units*99)-sum;
 cout<<"Your Total Sum Is : $ "<<total<<endl;
 
 }
 else if(units>50 && units<99)
 {
 sm=(units*99)* .40;
 total=(units*99)-sum;
 cout<<"Your Total Sum Is : $ "<<total<<endl;
 
 }
 else if(units>100)
 {
 sm=(units*99)* .50;
 total=(units*99)-sum;
 cout<<"Your Total Sum Is : $ "<<total<<endl;
 
 }

        break;

       
        default:
            cout << "\nFollow Directions!\n" << endl;
    }
    return answer;
}

//The Description of Each Problem 1-10

int bC(int answer)
{
    cout << "A program that asks for the beginning balance and the number of checks written.\n";
    return answer;
}

int bMI(int answer)
{
    cout << "A program that calculates and displays a person’s body mass index "
            "(BMI). The BMI is often used to determine whether a person with a "
            "sedentary lifestyle is overweight or underweight for his or her"
            " height.\n";
    return answer;
}

int bCP(int answer)
{
    cout << "A program that asks the user to enter the number of books that "
            "he or she has purchased this month and then displays the number of points "
            "awarded..\n";
    return answer;
}

int cD(int answer)
{
    cout << "A change-counting game that gets the user to enter the number of coins required "
            "to make exactly one dollar.\n";
    return answer;
}

int fGC(int answer)
{
    cout << "A program that asks for the number of calories and fat grams in a"
            " food. \n";
    return answer;
}

int mT(int answer)
{
    cout << "A program that can be used as a math tutor for a young student.\n";
    return answer;
}

int mM(int answer)
{
    cout << "A program that asks the user to enter two numbers and tells you"
            "which is Max and Min. \n";
    return answer;
}

int rN(int answer)
{
    cout << "\n Currently Unavailable! \nA program that asks the user"
            " to enter a number within the range "
            "of 1 through 10 and displays the Roman numeral version of "
            "that number.\n";
    return answer;
}

int sC(int answer)
{
    cout << "A program that asks for the weight of the package and the distance"
            " it is to be shipped, and then displays the charges.\n";
    return answer;
}

int sS(int answer)
{
    cout << "A program that asks for the number of units sold and computes"
            " the total cost of the purchase.\n";
    
    return answer;
}
