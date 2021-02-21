// WAP for login and mcq exam using class and function calling inside the class
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

using namespace std;

char guess; 
int result;

class LoginExam{

    public:
        string  ans_1;
        string  ans_2;
        string  ans_3;
        string  ans_4;
        string y;
        int score=0;
        int choice;
        int result=0;

        void quit_exam();
        void display_question();
        void display_result();
        void choose_option();

        void login(){
            char username[20]={"shubhangi"};
            char password[10]={"shubh123"};
            char user[20];
            char pw[10];
            char ch;
            
            cout<<"Enter the username : ";
            cin>>user;
            cout<<"Enter password : ";
            ch=getch();
            for(int i=0; ch!='\r'; i++){
                pw[i]=ch;
                ch=getch();
                cout<<'*';
            }
            if (strcmp(user,username)==0 & strcmp(pw,password)==0){

                cout<<endl<<endl<<"***Login successful!***"<<endl<<endl;
            }
             else{
                cout<<endl<<"Wrong username or password...Try again!"; 
                exit(3);     
            }
        }

            
};

void LoginExam::choose_option(){
            cout<<"1.Press S for start Exam"<<endl;
            cout<<"2.Press Q for Quit Exam"<<endl;
            cout<<"3.Press V for view Score"<<endl;
            cout<<"enter your choice"<<endl;
            char choice=toupper(getch());
            {
                if(choice=='S'){
                    display_question(); 

                }else if(choice=='Q'){
                    cout<<"...........................You Are Going To Quit Exam !..............................."<<endl;
                    quit_exam();
 
                }else if(choice=='V'){
                display_result();  
                
                } 
            }
        
        }
        

void LoginExam::quit_exam(){
            
                exit(3);    
        } 

void LoginExam::display_question(){
cout<<endl<<endl;
cout<<"************************......WELCOME......************************"<<endl;
    for(int i=1;i<=10;i++){


        switch (i)
        {
        case 1:
            cout<<endl;
            cout<<"1. Declaration a pointer more than once may cause ____?" << endl;
            cout<<"a" <<" "<<"Error" <<endl;
            cout<<"b" <<" "<<"Abort" <<endl;
            cout<<"c" <<" "<<"Trap" <<endl;
            cout<<"d" <<" "<<"Null" <<endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;
                if (guess == 'c') {
                    cout<<"Correct!"<<endl;
                    score=score+2;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }
                else{
                    cout<<endl<< "Wrong answer..." << endl;
                    cout<<"The correct ans is " << 'c'<<endl;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }
        break;

        case 2:
            cout<<"2. Which one is not a correct variable type in C++?"<<endl;
            cout<<'a'<<"  "<<"float"<<endl;
            cout<<'b'<<"  "<<"real"<<endl;
            cout<<'c'<<"  "<<"int"<<endl;
            cout<<'d'<<"  "<<"double"<<endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;
            if (guess == 'b') {
                    cout<<"Correct!"<<endl;
                    score=score+2;
                    cout<<"Press enter to continue"<<endl<<endl;
                    cin.get();
                    cin.ignore();
                }
                else{
                    cout<<endl<< "Wrong answer..." << endl;
                    cout<<"The correct ans is " << 'b'<<endl;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }
        break;

        case 3:
            cout<<"3. Which command is correctly written?"<<endl;
            cout<<'a'<<"  "<<"cout >>"<<endl;
            cout<<'b'<<"  "<<"cin <<"<<endl;
            cout<<'c'<<"  "<<"cout <>"<<endl;
            cout<<'d'<<"  "<<"cin >>"<<endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;
                if(guess == 'd'){
                    cout<<"Correct!"<<endl;
                    score=score+2;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }
                else{
                    cout<<endl<< "Wrong answer..." << endl;
                    cout<<"The correct ans is " << 'd'<<endl;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }
        break;

        case 4:
            cout<<"4. ______ function is used to allocate space for array in memory."<<endl;
            cout<<'a'<<"  "<<"malloc()"<< endl;
            cout<<'b'<<"  "<<"realloc()"<< endl;
            cout<<'c'<<"  "<<"alloc()"<< endl;
            cout<<'d'<<"  "<<"calloc()"<< endl;
            cout<<"Enter your answer"<< endl;
            cin>>guess;
            if (guess == 'd') {
                cout<<"Correct!"<<endl;
                score=score+2;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
                }
            else{
                cout<<endl<< "Wrong answer..." << endl;
                cout<<"The correct ans is " << 'd'<<endl;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
        break;

        case 5:
            cout<<"5. Default constructor has ____ arguments."<<endl;
            cout<<'a'<<"  "<<"No argument"<<endl;
            cout<<'b'<<"  "<<"One Argument"<<endl;
            cout<<'c'<<"  "<<"Two Argument"<<endl;
            cout<<'d'<<"  "<<"None of these"<<endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;
            if (guess == 'a') {
                cout<<"Correct!"<<endl;
                score=score+2;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
                }
            else{
                cout<<endl<< "Wrong answer..." << endl;
                cout<<"The correct ans is " << 'a'<<endl;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
        break;

        case 6:
            cout<<"6. A class whos objects can not be created is known as _____"<<endl;
            cout<<'a'<<"  "<<"Absurd Class" << endl;
            cout<<'b'<<"  "<<"Dead Class" << endl;
            cout<<'c'<<"  "<<"Super Class" << endl;
            cout<<'d'<<"  "<<"Abstract Class" << endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;
            if (guess == 'd') {
                cout<<"Correct!"<<endl;
                score=score+2;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
                }
            else{
                cout<<endl<< "Wrong answer..." << endl;
                cout<<"The correct ans is " << 'd'<<endl;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
        break;

        case 7:
            cout<<"7. Reusability of code in C++ is achieved through ____"<<endl;
            cout<<'a'<<"  "<<"Polymorphism"<<endl;
            cout<<'b'<<"  "<<"Inheritance"<<endl;
            cout<<'c'<<"  "<<"Encapsulation"<<endl;
            cout<<'d'<<"  "<<"Both A and B"<<endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;

            if (guess == 'b') {
                cout<<"Correct!"<<endl;
                score=score+2;
                cout<<"Press enter to continue"<<endl;
                cin.get();
            }
            else{
                cout<<endl<< "Wrong answer..." << endl;
                cout<<"The correct ans is " << 'b'<<endl;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
        break;

        case 8:
            cout<<"8. An exceptio in C++ can be generated using which keywords?"<<endl;
            cout<<'a'<<"  "<<"thrown"<<endl;
            cout<<'b'<<"  "<<"threw"<<endl;
            cout<<'c'<<"  "<<"throw"<<endl;
            cout<<'d'<<"  "<<"throws"<<endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;
            if (guess == 'd') {
                    cout<<"Correct!"<<endl;
                    score=score+2;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }
                else{
                    cout<<endl<< "Wrong answer..." << endl;
                    cout<<"The correct ans is " << 'd'<<endl;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }
        break;

        case 9:
            cout<<"9. Which is not a loop structure?"<<endl;
            cout<<'a'<<"  "<<"for"<< endl;
            cout<<'b'<<"  "<<"do while"<< endl;
            cout<<'c'<<"  "<<"while"<< endl;
            cout<<'d'<<"  "<<"repeat until"<< endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;

            if (guess == 'd') {
                cout<<"Correct!"<<endl;
                score=score+2;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
            else{
                cout<<endl<< "Wrong answer..." << endl;
                cout<<"The correct ans is " << 'd'<<endl;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
        break;
        case 10:
            cout<<"10. Who developed the C++ language?"<<endl;
            cout<<'a'<<"  "<<"Steve Jobs"<<endl;
            cout<<'b'<<"  "<<"Linus Torvalds"<<endl;
            cout<<'c'<<"  "<<"Bill Gates"<<endl;
            cout<<'d'<<"  "<<"Bjarne Stroustrup"<<endl;
            cout<<"Enter your answer" << endl;
            cin>>guess;
            if (guess == 'd') {
                cout<<"Correct!"<<endl;
                score=score+2;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
            else{
                cout<<endl<< "Wrong answer..." << endl;
                cout<<"The correct ans is " << 'd'<<endl;
                cout<<"Press enter to continue"<<endl;
                cin.get();
                cin.ignore();
            }
        break;  
        }    
    } 
    display_result();
    choose_option();    
}

void LoginExam::display_result(){
    cout<<endl<<endl<< "******Your result score is " << score << " out of 20!******"<<endl<<endl;        
    if(score>10) {
        cout<<endl<<"@@@@@@@..........Congrats !...You Passed...........@@@@@@@"<<endl;
        cin.get();
        cin.ignore();
    }
    else{
        cout << ".-----You failed... Sorry, better luck next time-----"<<endl<<endl;
    }
}



int main(){
    LoginExam s1;
    s1.login();
    s1.choose_option();
    //s1.display_result();

    return 0;
}





























