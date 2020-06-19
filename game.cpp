#include <iostream>
#include <string>
using namespace std;

int main() {
  string
   name=" ",
   product=" ",
   city=" ",
   pet_name=" ",
   activity=" ",
   animal_type=" ",
   play="no",
   story="yes";

 int
 age=0,
 Num_kids=0;

 cout<<"\n:):):):):)<<<<<<<<<<<<>>>>>>>>>>>>(:(:(:(:(:"<<endl;
 cout<<"Welcome to Story word game (project of Mohsin Raza) "<<endl;
 cout<<":):):):):)<<<<<<<<<<<<>>>>>>>>>>>>(:(:(:(:(:"<<endl;

 cout<<"\nDo want to play the game (yes or no) : ",cin>>play;

 while (play=="yes"){
   cout<<"\nplease enter your name to start the game : ";cin.ignore();getline(cin,name);
   cout<<"please enter your product or food you buy : ",cin>>product;
   cout<<"please enter the age : ",cin>>age;
   cout<<"please enter your city name : ";cin.ignore();getline(cin,city);
   cout<<"please enter the pet name : ";cin>>pet_name;
    cout<<"please enter the activity which you love to do : ";cin>>activity;
    cout<<"please enter the animal_type : ";cin>>animal_type;
   cout<<"please enter children number between 0 to 15 : ",cin>>Num_kids;

   cout<<"\nDo you want to view your story (yes or no) : ",cin>>story;
   cout<<"\n-------------------------------------------------"<<endl;
   if(story=="yes"){
     cout<<"\n>>> here is your stroy....."<<endl;
     cout<<"\nThere was a person called "<<name<<" lives in a village of the "<<city<<" city.He was "<<age<<" years old.He like "<<activity<<" so he started doing the "<<activity<<".But later he started his own company that produces "<<product<<". In his company there are alot of "<<animal_type<<" beacause they were protecting it from human activities.After two years since the company "<<name<<" married to a women in his company and from her he have "<<Num_kids<<" kids.Now "<<name<<" is living in village, enjoying his life with his family and a pet name "<<pet_name<<"."<<endl;

     cout<<"\n**************** The End ****************"<<endl;

   }
   else if (story=="no"){
     cout<<"You miss your story."<<endl;
     cout<<"\n**************** The End ****************"<<endl;


   }else{
     cout<<"Invalid inputs"<<endl;
    
   }
    cout<<"\nDo you want to play it again (yes or no) : "<<endl,cin>>play;


 }

  cout<<"Thanks for playing the game.All the rights reserved."<<endl;
  return 0;
  
}
