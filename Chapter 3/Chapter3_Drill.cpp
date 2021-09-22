#include "std_lib_facilities.h"

int main(){
string first_name="";
cout << "Enter the name of the person you want to write to”;

cin>>first_name;
cout<<"Dear "<< first_name << ", \nHow are you doing nowadays? Me and my family are doing great this September. I've been to a lot of new places with my girlfriend lately...\n \n";
cout<<"---Please give me the name of the Friend in the Story---";
string friend_name;
cin>>friend_name;
cout << "--Write m-if your friend is male, and f-if female---";
char friend_sex;
cin >> friend_sex;

cout << "I've just met " << friend_name << " the other day.";
if(friend_sex=='m')
{
cout << "If you see " << friend_name << " tell him to call me next friday!";
}else if(friend_sex=='f'){
cout << "If you see " << friend_name << " tell her to call me next friday!";
}else{
cout << "If you see " << friend_name << " tell them to call me next friday!";
};

cout << "Give me the age of the recipent to the letter!";
int age;
cin >> age;
if(0<age&& age<110){
cout << " I just heard you had your birthday... Are you really "<< age <<" already??";
}else{
simple_error("I see my user doesnt want to cooperate anymore...");
}
if(age==12){
cout << "Next year you will be "<< age+1;
}else if(age==17){
cout << "Next year you will be able to vote!!";
}else if(age>70){
cout << "I hope you enjoy retirement";
}
cout << "\nI hope you will be healthy still when next time i write you, \n Yours sincerely, Gabi";

return 0;
}













