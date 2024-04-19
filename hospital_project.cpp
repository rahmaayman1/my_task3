
using namespace std;
#include <iostream>
const int MAX_Specialization = 20;
const int MAX_Queue = 5;
string name[MAX_Specialization + 1][MAX_Queue];
int status[MAX_Specialization + 1][MAX_Queue];
int Queue_length[MAX_Specialization + 1];

int menu() {
    int choice = -1;
    while (choice == -1) {
        cout << "enter your choice: \n";
        cout << " 1)Add new patient\n";
        cout << " 2)Print all patients\n";
        cout << " 3)Get next patient\n";
        cout << " 4)Exit ";
        cin >> choice;
        if (!(choice <= 4 && choice >= 1)) {
            cout << "invalid choice.. Try Again!\n";
            choice = -1;
        }
    }
    return choice;
}

void shift_left(int spec, string name_sp[], int status_sp[]) {

    int len = Queue_length[spec];
    for (int i = 0;i < len;i++) {
        name_sp[i - 1] = name_sp[i];
        status_sp[i - 1] = status_sp[i];
    }
    Queue_length[spec]--;
}

void shift_right(int spec, string name_sp[], int status_sp[]) {
    int len = Queue_length[spec];
    for (int i = len - 1;i >= 0;i--) {
        name_sp[i + 1] = name_sp[i];
        status_sp[i + 1] = status_sp[i];
    }
    Queue_length[spec]++;

}
bool add_patient() {
    int spec;
    string names;
    int stat;
    int pos = Queue_length[spec];

    cout << "Enter specialization, name, statis: ";
    cin >> spec >> names >> stat;

    if (pos >= MAX_Queue) {
        cout << "Sorry we can't add more patients for this specialization\n";
        return false;
    }

    if (stat == 0)
    {
        name[spec][pos] = names;
        status[spec][pos] = stat;
        Queue_length[spec]++;
    }
    else {

        shift_right(spec, name[spec], status[spec]);
        name[spec][0] = names;
        status[spec][0] = stat;
    }

    return true;
}

void print(int spec, string names_sp[], int status_sp[]) {
    int len = Queue_length[spec];
    if (len == 0)
        return;

    cout << "There are " << len << " patients in specialization " << spec << "\n";
    for (int i = 0; i < len; ++i) {
        cout << names_sp[i] << " ";
        if (status_sp[i])
            cout << "urgent\n";
        else
            cout << "regular\n";
    }
    cout << "\n";
}

void print_patient() {
    cout << "---------------------------\n";
    for (int spec = 0; spec < MAX_Specialization; spec++) {
        print(spec, name[spec], status[spec]);
    }
}

void get_next_patients() {
    int spec;
    cout << "Enter specialization: ";
    cin >> spec;

    int len = Queue_length[spec];

    if (len == 0) {
        cout << "No patients at the moment. Have rest, Dr\n";
        return;
    }


    cout << name[spec][0] << " please go with the Dr\n";

    shift_left(spec, name[spec], status[spec]);
}




void Hospital_system() {
    while (true) {
        int choice = menu();

        if (choice == 1)
            add_patient();
        else if (choice == 2)
            print_patient();
        else if (choice == 3)
            get_next_patients();
        else
            break;
    }
}


int main()
{
    Hospital_system();


}

