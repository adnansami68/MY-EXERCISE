#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Norml {
    char *s;

public:

    Norml() : s(0) {}


    Norml(const Norml &other) {
        s = 0;
        if (other.s) {
            s = (char *) malloc(strlen(other.s) + 1);
            strcpy(s, other.s);
        }
    }


    Norml& operator=(const Norml &other) {

        if (this == &other) return *this;
        if (s) free(s);
        s = 0;
        if (other.s) {

            s = (char *) malloc(strlen(other.s) + 1);
            strcpy(s, other.s);
        }

        return *this;
    }


    ~Norml() {
        if (s) free(s);
        cout << "Freeing s\n";
    }


    void set(const char *str) {
        if (s) free(s);
        s = (char *) malloc(strlen(str) + 1);
        strcpy(s, str);
    }

  void show() {
        cout << s << "\n";
    }
};


Norml input() {
    char str[80];
    Norml obj;
    cout << "Enter a string: ";
    cin.getline(str, 80);
    obj.set(str);
    return obj;
}

int main() {
    Norml ob;

    ob = input();
    ob.show();

    return 0;
}
