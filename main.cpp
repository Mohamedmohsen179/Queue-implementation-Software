#include <bits/stdc++.h>
using namespace std;

              // => This Code By : Mohamed Mohsen <=//

class Queue {
    int top_element = -1, first = -1, queue_size;
    int *myqueue;
public:
    Queue(int n) {
        queue_size = n;
        myqueue = new int[queue_size];
    }
    void push(int num) {
            if (first == -1) {
                first++;
            }
            myqueue[++top_element] = num;
        }
    int pop() {

        if (top_element < 0)
            cout << "Queue Underflow...";
        else {
            cout << "Queue Is Poped....";
             for (int i = first; i < queue_size - 1; ++i) {
                myqueue[i] = myqueue[i + 1];
            }
            myqueue[top_element]=NULL;
            top_element--;
        }
    }
    bool Empty() {
        if (top_element < 0) {
            cout << "Your Queue is Empty... \n";
            return true;
        } else {
            cout << "Your Queue not Empty... \n";
            return false;
        }
    }
    int Size() {
        return (top_element == -1) ? 0 : top_element + 1;
    }
    int Front() {
        if (top_element < 0) {
            cout << "Queue Underflow...";
            return -1;
        } else {
            cout <<"Front Element: "<<myqueue[first] ;
            return myqueue[first];
        }
    }
    void print(){
        for (int i =0;i < top_element+1;i++){
            cout << myqueue[i]<< " ";
        }
    }
};
void clear_IDE(Queue obj) {
    system("cls");
    cout << "Your queue Now: ";obj.print();
    cout<<"\n<==========================>\n";
}
void handle_int_error() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    while (true) {

        cout << "            => This Is Queue Implementation <=\n";
        cout << "Enter Size Of Queue : ";

        string t;
        int siz;

        while(cin >> t){
//=======================================//
            try {
                siz = stoi(t);
            }
            catch (const std::exception& e) {
                system("cls");
                cout << "Please enter positive integer : ";
                handle_int_error();
                continue;
            }
//=======================================//
            if (siz <= 0) {

                system("cls");
                cout << "Minimum value is 1. Try again : ";
                continue;

            }
            else { break; }
//=======================================//


    } //while


//=======================================//
        Queue Myqueue(siz);
//=======================================//

        while (true) {
            clear_IDE(Myqueue);
            cout << "What Do You Want To Do ?\n\n";
            cout << "1) Push Element\n";
            cout << "2) Delete Element\n";
            cout << "3) Print Front\n";

            cout << "Your Choice : ";
            int your_choice;
            cin >> your_choice;

//============================================================//
            if (your_choice == 1) {
                clear_IDE(Myqueue);

                if (Myqueue.Size() >= siz ) {
                    cout << "Queue Is Full, Try Again...";

                    //=======================//
                    if (_getwch() != 13)
                        continue;
                }

                else {
                    cout << "Enter Number : ";
                    string ToPush;int Queue_num ;

                    while(cin >> ToPush){
 //=======================================//
                        try {
                                Queue_num = stoi(ToPush);
                        }
                        catch (const std::exception& e) {
                                system("cls");
                                cout << "Please enter integer : ";
                                handle_int_error();
                                continue;
                        } //catch

                            break;

                    } // while
//=======================================//
                    Myqueue.push(Queue_num);
 //=======================================//
                }

            }// if 1 is end
//================================================================================//
            else if (your_choice == 2) {
                 clear_IDE(Myqueue);
                Myqueue.pop();


                //=======================//
                if (_getwch() != 13)
                        continue;
            }
//=======================================================================================//
            else if (your_choice == 3) {
                clear_IDE(Myqueue);
                Myqueue.Front();

                //=======================//
                if (_getwch() != 13)
                        continue;
            }
//====================================================================================//
            else {
                handle_int_error();
                continue;
            }

            clear_IDE(Myqueue);
            cout << "Do you want to try another OP (Y) : ";char what;cin>> what;
            if (what == 'y'|| what == 'Y'){
                continue;
            }
            else {
                system("cls");
                break;
           }


        }// big while


            cout << "Do you want to try another Queue (Y) : ";char qq;cin>> qq;
            if (qq == 'y'|| qq == 'Y'){
                system("cls");
                continue;
            }
            else {
                    system("cls");
                cout << "Made By : mohamed mohsen Thx :)\n";
                break;
           }

   }// very big while




}//main
