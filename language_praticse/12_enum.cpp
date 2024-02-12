# include <iostream>

using namespace std;

enum Msoffice {
    BOLD = 5,
    ITALICS,
    UNDERLINE,
    CROSSED,
};

int main() {

    int myAttribute = BOLD;

    printf("\n my attribute is:  %d ", myAttribute);
    printf("\n  my attribute is:  %d ", Msoffice(CROSSED));
    Msoffice(6);

    return 0;
}