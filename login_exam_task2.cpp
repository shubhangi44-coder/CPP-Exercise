// WAP for login and mcq exam using class and function calling inside the class
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

using namespace std;

char guess; 
int result;

class LoginExam{

    private:
         string question;
         string  ans_1;
         string  ans_2;
         string  ans_3;
         string  ans_4;

        char correct_ans;
        int score;
        string y;

    public:

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

                cout << "Do you want to start the exam ?"<< "? Yes/No."<<endl<<endl;
                cin >> y;

                if (y == "Yes" || y == "yes") {
                    cout<<"Best of luck!"<<endl;
                    cout<<"Press enter to continue"<<endl;
                    cin.get();
                    cin.ignore();
                }else{
                    cout<<endl;
                    cout<<"Goodbye!"<<endl;
                    cin.ignore();
                    cin.get();    
                }

                set_question("1. Declaration a pointer more than once may cause ____?",
                "Error",
                "Abort",
                "Trap",
                "Null",
                'c',
                2);

                display_question();

                set_question("2. Which one is not a correct variable type in C++?",
                "float",
                "real",
                "int",
                "double",
                'b',
                2);

                display_question();

                set_question("3. Which command is correctly written?",
                "cout >>",
                "cin <<",
                "cout <>",
                "cin >>",
                'd',
                2);

                display_question();
            
                set_question("4. ______ function is used to allocate space for array in memory.",
                "malloc()",
                "realloc()",
                "alloc()",
                "calloc()",
                'd',
                2);

                display_question();

                set_question("5. Default constructor has ____ arguments.",
                "No argument",
                "One Argument",
                "Two Argument",
                "None of these",
                'a',
                2);

                display_question();

                set_question("6. A class whos objects can not be created is known as _____",
                "Absurd Class",
                "Dead Class",
                "Super Class",
                "Abstract Class",
                'd',
                2);

                display_question();

                set_question("7. Reusability of code in C++ is achieved through ____",
                "Polymorphism",
                "Inheritance",
                "Encapsulation",
                "Both A and B",
                'b',
                2);

                display_question();

                set_question("8. An exceptio in C++ can be generated using which keywords?",
                "thrown",
                "threw",
                "throw",
                "throws",
                'd',
                2);

                display_question();

                set_question("9. Which is not a loop structure?",
                "for",
                "do while",
                "while",
                "repeat until",
                'd',
                2);

                display_question();

                set_question("10. Who developed the C++ language?",
                "Steve Jobs",
                "Linus Torvalds",
                "Bill Gates",
                "Bjarne Stroustrup",
                'd',
                2);

                display_question();

                cout << "Your result score is " << result << " out of 20!"<<endl<<endl;
                
                if(result>10) {
                    cout<<"Congrats !...You Passed"<<endl;
                    cin.get();
                    cin.ignore();
                }
                else{
                    cout << "You failed... Sorry, better luck next time"<<endl<<endl;
                }
            }  
            else{
                cout<<endl<<"Wrong username or password...Try again!";      
            }
        }

        
    void  set_question( string q,  string a,  string b,  string c,  string d, char ca, int pa){
        question = q;
        ans_1 = a;
        ans_2 = b;
        ans_3 = c;
        ans_4 = d;
        correct_ans = ca;
        score = pa;
        }

    void display_question(){
        cout<<endl;
        cout<<question << endl;
        cout<<"a. " <<  ans_1 <<endl;
        cout<<"b. " <<  ans_2 <<endl;
        cout<<"c. " <<  ans_3 <<endl;
        cout<<"d. " <<  ans_4 <<endl;
        cout<<endl;
        cout<<"Enter your answer" << endl;
        cin>>guess;
    
        if (guess == correct_ans) {
            cout<<endl;
            cout<<"Correct!"<<endl;
            result = result + score;
            cout<<endl;
            cout<<"Press enter to continue"<<endl;
            cin.get();
            cin.ignore();
        }
        else{
            cout<<endl<< "Wrong answer..." << endl;
            cout<<"The correct ans is " << correct_ans<<endl;
            cout<<"Press enter to continue"<<endl;
            cin.get();
            cin.ignore();
        }
    }
};

int main(){
    LoginExam s1;
    s1.login();

    return 0;
}





























