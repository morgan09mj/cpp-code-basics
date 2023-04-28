/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cmath>

typedef char* Peg;
void move(Peg A, Peg B);
void transfer(size_t N, Peg A, Peg B, Peg C);
void get_disk_num(int &iNum);


int main()
{
while(1)
{
std::cout << "\t\t\tHanoi Towers Puzzle Solver" << std::endl << std::endl;
std::cout << "Enter number of disc on the first peg (enter -1 to quit): ";
int iDiskNum, iStepNum;
get_disk_num(iDiskNum);
if(iDiskNum == -1)
{
std::cout << "hope you enjoyed using these program!" << std::endl;
break;
}
else
{
iStepNum = pow(2, iDiskNum) - 1;
std::cout << "the shortest solution can be reach in " << iStepNum << " steps" << std::endl;
std::cout << "press any key to show the solution...";
getch();
std::cout << std::endl;
transfer(iDiskNum, "Peg1", "Peg2", "Peg3");
system("pause");
system("cls");
}
}
return 0;
}

// tedade jabejayi diskha
void move(Peg A, Peg B)
{
std::cout << "move top most disc from " << A << " to " << B << std::endl;
}

// chegonegiye harekate diskhara namayesh midahad
void transfer(size_t N, Peg A, Peg B, Peg C)
{
if(N > 0)
{
// enteghale avalin N - 1 disk be "B"
transfer(N - 1, A, C, B);

// enteghale akharin disk be "C"
move(A, C);

// enteghale dickhaye "B" be"C",
transfer(N - 1, B, A, C);
}
}

void get_disk_num(int &iNum)
{
std::cin >> iNum;
if(iNum != -1 && iNum < 1)
{
std::cout << "please notice that the number of disc needs to be an integer bigger than 0" << std::endl;
std::cout << "number of disc on the first peg: ";
get_disk_num(iNum);
}
}
