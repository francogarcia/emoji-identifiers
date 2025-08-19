#include <stdio.h>
#define 🖨️(X) printf("%d\n", (X))
#define 🧮(X) ((X) * (X))
#define ²

void 👀(unsigned char 🕶️) {
    if (!🕶️) {
        return;
    }

    🖨️(🕶️);

    👀(🕶️ - 1);
}

int main() {
    const int 💯 = 100;
    int 🖩 = 💯 + 💯;
    🖨️(🖩);

    🖩 = 🧮(💯)²;
    🖨️(🖩);

    👀(💯 / 💯);

    return 0;
}
