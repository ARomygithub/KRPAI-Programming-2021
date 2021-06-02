#include "RobotKRSRI.hpp"
#include "Boneka.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    RobotKRSRI robot("ITB",off,3,nullptr);
    robot.nyala();
    robot.jalan();
    robot.padamkanApi();
    robot.ambilBoneka();

    robot.mati();
    robot.jalan(); // mengeluarkan pesan error
    robot.padamkanApi(); // mengeluarkan pesan error
    robot.ambilBoneka(); // mengeluarkan pesan error

    // bonus
    robot.nyala();
    Boneka teddyBear("teddyBear");
    robot.ambilBoneka(&teddyBear);
    robot.mati();
    return 0;
}
