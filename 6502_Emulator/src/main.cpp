#include <core/6502-Emulator.h>
#include <common/CPUState.h>
using namespace std;

int main(){
    CPUState state;
    state.initialize();

    ExecuteEmulator(10, ON);
    
    return 0;
}