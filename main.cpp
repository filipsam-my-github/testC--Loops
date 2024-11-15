#include <iostream>

using namespace std;

void coutStringXTimes(string string_to_cout, int number_of_times){
    for (int i = 0; i < number_of_times; i++){
        cout << string_to_cout;
    }
}

namespace taks1 {

    void ExecuteTask(){
        int length_of_message = 6;
        for (int i = 0; i < length_of_message; i++) {
            coutStringXTimes("$",i+1);
            cout << "@";
        }
        cout << "\n";
    }
}

namespace taks2 {

    void ExecuteTask(){
        int length_of_message = 6;
        for (int i = 0; i < length_of_message; i++) {
            cout << "^^";
            coutStringXTimes("&",length_of_message-i);
        }
        cout << "\n";
    }
}

namespace taks3 {

    void ExecuteTask(){
        int length_of_message = 6;

        for (int i = 0; i < length_of_message; i++) {
            cout << "-";
            if ( i % 2 == 0 )
                coutStringXTimes("*",i+1);
            else
                coutStringXTimes("#",i+1);
        }
        cout << "\n";
    }
}

namespace taks4 {

    void ExecuteTask(){
        int length_of_message = 4;

        for (int i = 0; i < length_of_message; i++) {
            for (int j = 0; j < 5; j++){
                cout << j*i << "    ";
            }
            cout << "\n";
        }

    }
}

namespace taks5 {

    void ExecuteTask(){
        int length_of_message = 5;
        int first_number = 2;

        for (int i = 0; i < length_of_message; i++) {
            for (int j = 0; j < i+1; j++){
                cout << (i+first_number) + j << "    ";
            }
            cout << "\n";
        }

    }
}

namespace taks6 {

    void ExecuteTask(){
        int length_of_message = 5;
        int first_number = 11;

        for (int i = 0; i < length_of_message; i++) {
            for (int j = 0; j < length_of_message-i; j++){
                cout << (i+first_number) - j*2 << "    ";
            }
            cout << "\n";
        }

    }
}

int main()
{
    taks1 :: ExecuteTask();
    cout << "\n";
    taks2 :: ExecuteTask();
    cout << "\n";
    taks3 :: ExecuteTask();
    cout << "\n";
    taks4 :: ExecuteTask();
    cout << "\n";
    taks5 :: ExecuteTask();
    cout << "\n";
    taks6 :: ExecuteTask();
    return 0;
}
