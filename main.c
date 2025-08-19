#include <stdio.h>
#define 🖨️ printf
#define 🧮(X) ((X) * (X))
#define ²

void 👀(unsigned char 🕶️) {
    if (!🕶️) {
        return;
    }

    🖨️("%d\n", 🕶️);

    👀(🕶️ - 1);
}

int main() {
    const int 💯 = 100;
    int 🖩 = 💯 + 💯;
    🖨️("%d\n", 🖩);

    🖩 = 🧮(💯)²;
    🖨️("%d\n", 🖩);

    👀(💯 / 💯);

    return 0;
}
