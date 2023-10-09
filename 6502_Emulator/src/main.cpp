#include <core/6502-Emulator.h>
using namespace std;

int main(){

    startup(true);

    ExecuteEmulator(10, new Instruction());
    return 0;
}