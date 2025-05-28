// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#include "Date.h"
#include "Address.h"
#include "Pet.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>

int main()
{
    // Testing the Address.cpp first.

    // Address class with default constructor.
    Address adrs;

    std::cout << "Testing the Address class with default constructor\n" << std::endl;
    // Testing the operator>>, and operator<< methods in Address.cpp to assign the member variables
    // and output the member vairables.
    std::cin >> adrs;
    std::cout << "\n";  // This is just to have space between each output for easier reading.
    std::cout << adrs;
    std::cout << "\n";  // Same reason as above.

    // Testing the setters of Address.cpp.
    adrs.setStreetName("277 Umbra St");
    adrs.setCityName("Kauber");
    adrs.setStateName("California");
    adrs.setZipCode(70923);

    // Testing the getters of the Address.cpp.
    std::cout << "The street name is " << adrs.getStreetName() << "." << std::endl;
    std::cout << "The city name is " << adrs.getCityName() << "." << std::endl;
    std::cout << "The state name is " << adrs.getStateName() << "." << std::endl;
    std::cout << "The zip code is " << adrs.getZipCode() << "." << std::endl;

    // This is to separate the outputs of the two constructors.
    std::cout << "\n" << std::endl;

    std::cout << "Testing the Address class with a fully parameterized constructor\n" << std::endl;

    // Address with a fully parameterized constructor.
    Address adrs1("137 Koka St", "London", "Texas", 93824);

    // Testing the getters and the variables that was initiated in the constructor
    std::cout << "The street name is " << adrs1.getStreetName() << "." << std::endl;
    std::cout << "The city name is " << adrs1.getCityName() << "." << std::endl;
    std::cout << "The state name is " << adrs1.getStateName() << "." << std::endl;
    std::cout << "The zip code is " << adrs1.getZipCode() << "." << std::endl;

    // This is to separate the output and to check the new constructor for easier reading.
    std::cout << "\n" << std::endl;

    // Testing the operator>>, and operator<< methods in Address.cpp to assign the member variables
    // and output the member vairables.
    std::cin >> adrs1;
    std::cout << "\n";  // This is just to have space between each output for easier reading.
    std::cout << adrs1;
    std::cout << "\n";  // Same reason as above.

    // Testing the setters of Address.cpp.
    adrs1.setStreetName("293 Chunjo St");
    adrs1.setCityName("Molakeu");
    adrs1.setStateName("New York");
    adrs1.setZipCode(23849);

    // Testing if the setters worked
    std::cout << "The street name is " << adrs1.getStreetName() << "." << std::endl;
    std::cout << "The city name is " << adrs1.getCityName() << "." << std::endl;
    std::cout << "The state name is " << adrs1.getStateName() << "." << std::endl;
    std::cout << "The zip code is " << adrs1.getZipCode() << "." << std::endl;

    // This is to separate the output and start the new test with new a class.
    std::cout << "\n" << std::endl;
    

    // Testing the Pet class.
    std::cout << "Testing Pet class with default constructor\n" << std::endl;

    // Testing the Pet class with default constructor.
    Pet pet;

    // Use try and catch since the month and day from Date.cpp can throw an exception.
    try
    {
        // Testing the operator<< and operator>> methods of Pet class with default constructor.
        std::cin >> pet;
        std::cout << "\n";
        std::cout << pet;
        std::cout << "\n";
    }

    // I asked ChatGPT to help me on how to catch this error in Date.cpp, and told me to catch-
    // this exception by reference (&) to catch the exception object.
    catch (const std::invalid_argument& e)  // For catching the month's or day's exception.
    {
        // Output the exception.
        // .what() is used to retrieve the exception after catching the exception.
        std::cout << e.what() << std::endl;
    }

    // Testing the setters.
    pet.setPetName("Hungo");
    pet.setPetDOB(1, 18, 2007);
    pet.setPetType(4);
    pet.setPetBreed("Rattle Snake");

    // Test out the getters.
    std::cout << "The pet's name is " << pet.getPetName() << "."<< std::endl;
    std::cout << "The pet's date of birth is " << pet.getPetDOB().dateString() << "." << std::endl;
    std::cout << "The pet's type is a " << pet.getPetType() << "." << std::endl;
    std::cout << "The pet's breed is a " << pet.getPetBreed() << "." << std::endl;

    std::cout << "\n";

    std::cout << "Testing when setPetType is not 1-4." << std::endl;
    // Test the setPetType for numbers that are not 1-4.
    pet.setPetType(50);

    // Check if the setPetType for numbers other than 1-4 worked.
    std::cout << "The pet's type is a " << pet.getPetType() << "." << std::endl;

    // Separate the output to test the Pet class with a fully parameterized constructor.
    std::cout << "\n" << std::endl;


    // Testing the Pet class with fully a parameterized constructor.
    std::cout << "Testing Pet class with a fully parameterized constructor\n" << std::endl;
    
    // Initiate Date object to use it for the Pet's constructor parameter.
    Date DOB(11, 28, 2007);
    Pet pet1("Lucas", DOB, 2, "Black Spots");

    // Use try and catch since the month and day from Date.cpp can throw an exception.
    try
    {
        // Testing the operator<< and operator>> methods of Pet class with default constructor.
        std::cin >> pet1;
        std::cout << "\n";
        std::cout << pet1;
        std::cout << "\n";
    }

    // I asked ChatGPT to help me on how to catch this error in Date.cpp, and told me to catch
    // this exception by reference (&) to catch the exception object.
    catch (const std::invalid_argument& e)  // For catching the month's or day's exception.
    {
        // Output the exception
        // .what() is used to retrieve the exception after catching the exception.
        std::cout << e.what() << std::endl;
    }

    // Testing the setters
    pet1.setPetName("Bolt");
    pet1.setPetDOB(3, 19, 2010);
    pet1.setPetType(1);
    pet1.setPetBreed("Golden Retriever");

    // Test out the getters.
    std::cout << "The pet's name is " << pet1.getPetName() << "." << std::endl;
    std::cout << "The pet's date of birth is " << pet1.getPetDOB().dateString() << "." << std::endl;
    std::cout << "The pet's type is a " << pet1.getPetType() << "." << std::endl;
    std::cout << "The pet's breed is a " << pet1.getPetBreed() << "." << std::endl;

    std::cout << "\n";

    std::cout << "Testing when setPetType is not 1-4." << std::endl;

    // Test the setPetType for numbers that are not 1-4.
    pet1.setPetType(0);

    // Check if the setPetType for numbers that are not 1-4 worked.
    std::cout << "The pet's type is a " << pet1.getPetType() << std::endl;

    // This is to separate the output for testing a new class.
    std::cout << "\n" << std::endl;


    // Testing the Person class.
    std::cout << "Testing the Person class with default constructor." << std::endl;

    // Initiate Person object (default constructor).
    Person person;

    // Testing the operator>> and operator<< methods.
    std::cin >> person;
    std::cout << "\n";
    std::cout << person;
    std::cout << "\n";

    // Creating an Address object to test the setAddress, and getAddress.
    Address adrs2("123 Hucker St.", "Kuroja", "California", 19283);

    // From here and below (until next comment), I'm testing getters and setters.
    person.setFirstName("Mupako");
    person.setLastName("Gunner");
    person.setAddress(adrs2);

    std::cout << "The person's first name is " << person.getFirstName() << "." << std::endl;
    std::cout << "The person's last name is " << person.getLastName() << "." << std::endl;
    std::cout << "The person's street address is " << person.getAddress().getStreetName() << "." << std::endl;
    std::cout << "The person's city address is " << person.getAddress().getCityName() << "." << std::endl;
    std::cout << "The person's state address is " << person.getAddress().getStateName() << "." << std::endl;
    std::cout << "The person's zip code is " << person.getAddress().getZipCode() << "." << std::endl;


    std::cout << "\n" << std::endl;


    person.setStreetName("185 Vucka St.");
    person.setCityName("Gurora");
    person.setStateName("Arizona");
    person.setZipCode(18273);


    std::cout << "The person's street address is " << person.getAddress().getStreetName() << "." << std::endl;
    std::cout << "The person's city address is " << person.getAddress().getCityName() << "." << std::endl;
    std::cout << "The person's state address is " << person.getAddress().getStateName() << "." << std::endl;
    std::cout << "The person's zip code is " << person.getAddress().getZipCode() << "." << std::endl;


    // Testing addPet(), and operator+ methods, and also its thrown exception.
    try
    {
        person.addPet();
        person.addPet();
    
        std::cout << "\n";
        std::cout << person;
        std::cout << "\n";
    
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        std::cout << "\n";
    }
    catch (const std::invalid_argument& e)  // For catching the month's or day's exception.
    {
        // Output the exception
        // .what() is used to retrieve the exception after catching the exception.
        std::cout << e.what() << std::endl;
    }


    // Testing deletePet() and operator- methods, and also its thrown exception.
    try
    {
        person.deletePet();
    
        std::cout << person;
        std::cout << "\n";
    
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        std::cout << "\n";
    }
    

    // Test the getPets() getter.
    std::vector<Pet*> personPets = person.getPets();
    
    // Output each pet's member variables from the pets vector in person object.
    for (int i = 0; i < personPets.size();i++)
    {
        std::cout << "The name of the pet that is left is " << personPets[i]->getPetName() << "." << std::endl;
        std::cout << "The birth date of the pet that is left is " << personPets[i]->getPetDOB().dateString() << "." << std::endl;
        std::cout << "The type of the pet that is left is " << personPets[i]->getPetType() << "." << std::endl;
        std::cout << "The breed of the pet that is left is " << personPets[i]->getPetBreed() << "." << std::endl;
    }

    // Getting the user input to test the searchPet() method.
    std::string petName = "";
    std::cout << "Enter pet name that you want to search: ";
    std::getline(std::cin, petName);

    // Testing the searchPet method.
    if (person.searchPet(petName))
    {
        std::cout << "This person has that pet!" << std::endl;
    }
    else
    {
        std::cout << "This person does not have that pet." << std::endl;
    }


    std::cout << "\n" << std::endl;


    // Testing the person class with first name, last name, and address as the parameters for the constructor.
    std::cout << "Testing the person class with first name, and last name and address as the parameters in the constructors" << std::endl;


    // Initiate Address object to use for the person1's object parameter.
    Address adrs3("999 Brooklyn St", "Aurora", "Louisiana", 38271);

    // Initiate Person object (constructor with first name, last name, and address as its parameter).
    Person person1("Payut", "Surapinchai", adrs3);

    // Testing if the parameters in the constructor worked.
    std::cout << person1;
    std::cout << "\n";

    // Testing the operator>> and operator<< methods.
    std::cin >> person1;
    std::cout << "\n";
    std::cout << person1;
    std::cout << "\n";

    // Creating an Address object to test the setAddress, and getAddress.
    Address adrs4("392 Shucker St.", "Minim", "Oklahoma", 14383);

    // From here and below (until the next comment), I'm testing getters and setters.
    person1.setFirstName("Jurke");
    person1.setLastName("Svatkella");
    person1.setAddress(adrs4);

    std::cout << "The person's first name is " << person1.getFirstName() << "." << std::endl;
    std::cout << "The person's last name is " << person1.getLastName() << "." << std::endl;
    std::cout << "The person's street address is " << person1.getAddress().getStreetName() << "." << std::endl;
    std::cout << "The person's city address is " << person1.getAddress().getCityName() << "." << std::endl;
    std::cout << "The person's state address is " << person1.getAddress().getStateName() << "." << std::endl;
    std::cout << "The person's zip code is " << person1.getAddress().getZipCode() << "." << std::endl;


    std::cout << "\n" << std::endl;


    person1.setStreetName("86 Vienna St.");
    person1.setCityName("Chrian");
    person1.setStateName("Idaho");
    person1.setZipCode(38291);


    std::cout << "The person's street address is " << person1.getAddress().getStreetName() << "." << std::endl;
    std::cout << "The person's city address is " << person1.getAddress().getCityName() << "." << std::endl;
    std::cout << "The person's state address is " << person1.getAddress().getStateName() << "." << std::endl;
    std::cout << "The person's zip code is " << person1.getAddress().getZipCode() << "." << std::endl;


    // Testing addPet(), and operator+ methods, and also its thrown exception.
    try
    {
        person1.addPet();
        person1.addPet();
    
        std::cout << "\n";
        std::cout << person1;
        std::cout << "\n";
    
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        std::cout << "\n";
    }
    catch (const std::invalid_argument& e)  // For catching the month's or day's exception.
    {
        // Output the exception
        // .what() is used to retrieve the exception after catching the exception.
        std::cout << e.what() << std::endl;
    }


    // Testing deletePet() and operator- methods, and also its thrown exception.
    try
    {
        person1.deletePet();
    
        std::cout << person1;
        std::cout << "\n";
    
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        std::cout << "\n";
    }


    // Test the getPets() getter.
    std::vector<Pet*> personPets1 = person1.getPets();
    
    // Output each pet's member variables from the pets vector in person object.
    for (int i = 0; i < personPets1.size();i++)
    {
        std::cout << "The name of the pet that is left is " << personPets1[i]->getPetName() << "." << std::endl;
        std::cout << "The birth date of the pet that is left is " << personPets1[i]->getPetDOB().dateString() << "." << std::endl;
        std::cout << "The type of the pet that is left is " << personPets1[i]->getPetType() << "." << std::endl;
        std::cout << "The breed of the pet that is left is " << personPets1[i]->getPetBreed() << "." << std::endl;
    }

    // Getting the user input to test the searchPet() method.
    std::string petName1 = "";
    std::cout << "Enter pet name that you want to search: ";
    std::getline(std::cin, petName1);

    // Testing the searchPet method.
    if (person1.searchPet(petName1))
    {
        std::cout << "This person has that pet!" << std::endl;
    }
    else
    {
        std::cout << "This person does not have that pet." << std::endl;
    }


    std::cout << "\n" << std::endl;

    
    // Testing the person class with first name, and last name as the parameters for the constructor.
    std::cout << "Testing the person class with first name, and last name as the parameters for the constructor." << std::endl;

    // Initiate Person object (constructor with first name, and last name as its parameter).
    Person person2("Kalus", "Giganto");

    // Testing if the parameters in the constructor worked.
    std::cout << person2;
    std::cout << "\n";

    // Testing the operator>> and operator<< methods .
    std::cin >> person2;
    std::cout << "\n";
    std::cout << person2;
    std::cout << "\n";

    // Creating an Address object to test the setAddress, and getAddress.
    Address adrs5("293 Office St", "Homeland", "Chicago", 21232);

    // From here and below (until the next comment), I'm testing getters and setters.
    person2.setFirstName("Bruno");
    person2.setLastName("Minor");
    person2.setAddress(adrs5);

    std::cout << "The person's first name is " << person2.getFirstName() << "." << std::endl;
    std::cout << "The person's last name is " << person2.getLastName() << "." << std::endl;
    std::cout << "The person's street address is " << person2.getAddress().getStreetName() << "." << std::endl;
    std::cout << "The person's city address is " << person2.getAddress().getCityName() << "." << std::endl;
    std::cout << "The person's state address is " << person2.getAddress().getStateName() << "." << std::endl;
    std::cout << "The person's zip code is " << person2.getAddress().getZipCode() << "." << std::endl;


    std::cout << "\n" << std::endl;


    person2.setStreetName("69 Office Tower St.");
    person2.setCityName("Hopeful");
    person2.setStateName("Hopeless");
    person2.setZipCode(14493);


    std::cout << "The person's street address is " << person2.getAddress().getStreetName() << "." << std::endl;
    std::cout << "The person's city address is " << person2.getAddress().getCityName() << "." << std::endl;
    std::cout << "The person's state address is " << person2.getAddress().getStateName() << "." << std::endl;
    std::cout << "The person's zip code is " << person2.getAddress().getZipCode() << "." << std::endl;


    // Testing addPet(), and operator+ methods, and also its thrown exception.
    try
    {
        person2.addPet();
        person2.addPet();
    
        std::cout << "\n";
        std::cout << person2;
        std::cout << "\n";
    
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        std::cout << "\n";
    }
    catch (const std::invalid_argument& e)  // For catching the month's or day's exception.
    {
        // Output the exception
        // .what() is used to retrieve the exception after catching the exception.
        std::cout << e.what() << std::endl;
    }


    // Testing deletePet() and operator- methods, and also its thrown exception.
    try
    {
        person2.deletePet();
    
        std::cout << person2;
        std::cout << "\n";
    
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
        std::cout << "\n";
    }

    // Test the getPets() getter.
    std::vector<Pet*> personPets2 = person2.getPets();
    
    // Output each pet's member variables from the pets vector in person object.
    for (int i = 0; i < personPets2.size();i++)
    {
        std::cout << "The name of the pet that is left is " << personPets2[i]->getPetName() << "." << std::endl;
        std::cout << "The birth date of the pet that is left is " << personPets2[i]->getPetDOB().dateString() << "." << std::endl;
        std::cout << "The type of the pet that is left is " << personPets2[i]->getPetType() << "." << std::endl;
        std::cout << "The breed of the pet that is left is " << personPets2[i]->getPetBreed() << "." << std::endl;
    }

    // Getting the user input to test the searchPet() method.
    std::string petName2 = "";
    std::cout << "Enter pet name that you want to search: ";
    std::getline(std::cin, petName2);

    // Testing the searchPet method.
    if (person2.searchPet(petName2))
    {
        std::cout << "This person has that pet!" << std::endl;
    }
    else
    {
        std::cout << "This person does not have that pet." << std::endl;
    }
    
    return 0;
}
