
#include "nr3.h"

using namespace std;

int main() {
        Doub pi = 3.14159264;
        for(Doub i = 2.0; i < 12.0; i= i + 2.0){
                Doub outside = 18.0/(i*pi*pi*i);
                Doub inside = sin(i * pi /3.0) - sin (2.0 * i * pi /3);
                Doub final = outside * inside;

                cout << final << endl;
        }

}

