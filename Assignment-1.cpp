// Assignment 1
//The Bohr Atom. This code calculates the photon energies of electron transitions using various quantum numbers.
// Date: 06/02/2025
// ID: 11076649

#include<iostream>
#include<cmath>
#include<iomanip>
#include<limits>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
  int n_i, n_j, Z; // initial and final quantum numbers, atomic number
  float Delta_E; // energy of photon
  std::string unit, answer; // unit of energy and answer to compute another energy

  std::cout<< "Enter atomic number Z: "<<std::endl;
  std::cin>>Z;

  while(std::cin.fail())
  {
    std::cout<<"Error: Invalid input. Please enter an integer value for atomic number Z: "<<std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin>>Z;
  }

  std::cout<<"Enter initial quantum number n_i: "<<std::endl;
  std::cin>>n_i;

while(std::cin.fail())
  {
    std::cout<<"Error: Invalid input. Please enter an integer value for initial quantum number n_i: "<<std::endl;
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin>>n_i;
  }

  std::cout<<"Enter final quantum number n_j: "<<std::endl;
  std::cin>>n_j;

while(std::cin.fail())
  {
    std::cout<<"Error: Invalid input. Please enter an integer value for final quantum number n_j: "<<std::endl;
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin>>n_j;
  }

if(n_i < n_j)
{
  do
  {
    std::cout<<"Error: Initial quantum number n_i must be greater than final quantum number n_j. Please re-enter the quantum numbers."<<std::endl;
    std::cout<<"Enter initial quantum number n_i: "<<std::endl;
    std::cin>>n_i;

    while(std::cin.fail())
  {
    std::cout<<"Error: Invalid input. Please enter an integer value for initial quantum number n_i: "<<std::endl;
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin>>n_i;
  }

    std::cout<<"Enter final quantum number n_j: "<<std::endl;
    std::cin>>n_j;

    while(std::cin.fail())
  {
    std::cout<<"Error: Invalid input. Please enter an integer value for final quantum number n_j: "<<std::endl;
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin>>n_j;
  }

  } while(n_i < n_j);

}
  std::cout<<"Do you want to compute the energy in Joules or eV? (J/eV): "<<std::endl;
  std::cin>>unit;

  if(unit == "J")
  {
    Delta_E = 1.60218e-19*13.6*(Z*Z)*((pow(n_j,-2))-(pow(n_i,-2)));
    std::cout<<"Energy = "<<Delta_E<<" J"<<std::endl;
  }
  else if(unit == "eV")
  {
    Delta_E = 13.6*(Z*Z)*((pow(n_j,-2))-(pow(n_i,-2)));
    std::cout<<"Energy = "<<Delta_E<<" eV"<<std::endl;
  }
  else
  {
    while(unit != "J" && unit != "eV")
    {
      std::cout<<"Error. Invalid input.Please enter J or eV."<<std::endl;
      std::cin.clear();
      std::cin.ignore();
      std::cin>>unit;
    }
    if(unit == "J")
    {
      Delta_E = 1.60218e-19*13.6*(Z*Z)*((pow(n_j,-2))-(pow(n_i,-2)));
      std::cout<<"Energy = "<<Delta_E<<" J"<<std::endl;
    }
    else if(unit == "eV")
    {
      Delta_E = 13.6*(Z*Z)*((pow(n_j,-2))-(pow(n_i,-2)));
      std::cout<<"Energy = "<<Delta_E<<" eV"<<std::endl;
    }
  }

std::cout<<"Would you like to compute another energy? (Y/N): "<<std::endl;
std::cin>>answer;

if(answer == "Y")
{
  main();
}
else if(answer == "N")
{
  std::cout<<"Goodbye!"<<std::endl;
}
else
{
  while(answer != "Y" && answer != "N")
  {
    std::cout<<"Error: Invalid input. Please enter Y or N: "<<std::endl;
    std::cin.clear();
    std::cin.ignore();
    std::cin>>answer;
  }
  if(answer == "Y")
  {
    main();
  }
  else
  {
    std::cout<<"Goodbye!"<<std::endl;
  }
}
  return 0;
}
