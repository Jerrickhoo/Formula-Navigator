#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

//! Calling formula section ---------------------------------------------------------------------------------------------------

void showAlgebraMenu();
void showGeometryMenu_2D();
void showGeometryMenu_3D();
void showPhysicsMenu();
void displayExitMessage();
double validationChecker(const string& prompt); //doesnt check for negative number, if bawal negative, manually put it sa function.


//todo 20 algebra formulas ---------------------------------------------------------------------------------------------------




//todo 50 geometry formulas (divided between 2D and 3D) ---------------------------------------------------------------------------------------------------




//todo 50 physics formulas ---------------------------------------------------------------------------------------------------









int main(){

    int choice;

    do {
        cout << "====================\n";
        cout << "Main Menu\n";
        cout << "1. Algebra\n";
        cout << "2. Geometry 3D\n";
        cout << "3. Geometry 3D\n";
        cout << "4. Physics\n";
        cout << "5. Exit\n";
        cout << "====================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            showAlgebraMenu();
            break;
        case 2:
            showGeometryMenu_2D();
            break;
        case 3:
            showGeometryMenu_3D();
            break;
        case 4:
            showPhysicsMenu();
            break;
        case 5:
            displayExitMessage();
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);











    return 0;
}





//! Defining formula section ---------------------------------------------------------------------------------------------------

void showAlgebraMenu() {
    int option;
    do {
        cout << "\n======== Algebra Menu ========\n";
        cout << "1. ********* \t 11. *********\n";
        cout << "2. ********* \t 12. *********\n";
        cout << "3. ********* \t 13. *********\n";
        cout << "4. ********* \t 14. *********\n";
        cout << "5. ********* \t 15. *********\n";
        cout << "6. ********* \t 16. *********\n";
        cout << "7. ********* \t 17. *********\n";
        cout << "8. ********* \t 18. *********\n";
        cout << "9. ********* \t 19. *********\n";
        cout << "10. ********* \t 20. *********\n";
        cout << "21. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 21) {
            return; // Return to the main menu
        }

        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Algebra.\n";

        switch (option){
        case 1:
            // Code / function
            break;
        case 2:
            // Code / function
            break;
        case 3:
            // Code / function
            break;
        case 4:
            // Code / function
            break;
        case 5:
            // Code / function
            break;
        case 6:
            // Code / function
            break;
        case 7:
            // Code / function
            break;
        case 8:
            // Code / function
            break;
        case 9:
            // Code / function
            break;
        case 10:
            // Code / function
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 21);
}

double validationChecker(const string& prompt){
    double value;

    while (true){
        cout << prompt;
        cin >> value;

        if (cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid Input, Please Try Again." << endl;
        }
        else{
            return value;
        }
    }
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showGeometryMenu_2D() {
    int option;
    do {
        cout << "\n======== Geometry 2D Menu ========\n";
        cout << "1. ********* \t 11. ********* \t 21. ********* \n";
        cout << "2. ********* \t 12. ********* \t 22. ********* \n";
        cout << "3. ********* \t 13. ********* \t 23. ********* \n";
        cout << "4. ********* \t 14. ********* \t 24. ********* \n";
        cout << "5. ********* \t 15. ********* \t 25. ********* \n";
        cout << "6. ********* \t 16. ********* \n";
        cout << "7. ********* \t 17. ********* \n";
        cout << "8. ********* \t 18. ********* \n";
        cout << "9. ********* \t 19. ********* \n";
        cout << "10. ******** \t 20. ********* \n";
        cout << "26. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 26) {
            return; // Return to the main menu
        }


        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Geometry 2D.\n";

        switch (option){
        case 1:
            // Code / function
            break;
        case 2:
            // Code / function
            break;
        case 3:
            // Code / function
            break;
        case 4:
            // Code / function
            break;
        case 5:
            // Code / function
            break;
        case 6:
            // Code / function
            break;
        case 7:
            // Code / function
            break;
        case 8:
            // Code / function
            break;
        case 9:
            // Code / function
            break;
        case 10:
            // Code / function
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        case 21:
            // Code / function
            break;
        case 22:
            // Code / function
            break;
        case 23:
            // Code / function
            break;
        case 24:
            // Code / function
            break;
        case 25:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 26);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showGeometryMenu_3D() {
    int option;
    do {
        cout << "\n======== Geometry 3D Menu ========\n";
        cout << "1. ********* \t 11. ********* \t 21. ********* \n";
        cout << "2. ********* \t 12. ********* \t 22. ********* \n";
        cout << "3. ********* \t 13. ********* \t 23. ********* \n";
        cout << "4. ********* \t 14. ********* \t 24. ********* \n";
        cout << "5. ********* \t 15. ********* \t 25. ********* \n";
        cout << "6. ********* \t 16. ********* \n";
        cout << "7. ********* \t 17. ********* \n";
        cout << "8. ********* \t 18. ********* \n";
        cout << "9. ********* \t 19. ********* \n";
        cout << "10. ******** \t 20. ********* \n";
        cout << "26. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 26) {
            return; // Return to the main menu
        }


        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Geometry 3D.\n";

        switch (option){
        case 1:
            // Code / function
            break;
        case 2:
            // Code / function
            break;
        case 3:
            // Code / function
            break;
        case 4:
            // Code / function
            break;
        case 5:
            // Code / function
            break;
        case 6:
            // Code / function
            break;
        case 7:
            // Code / function
            break;
        case 8:
            // Code / function
            break;
        case 9:
            // Code / function
            break;
        case 10:
            // Code / function
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        case 21:
            // Code / function
            break;
        case 22:
            // Code / function
            break;
        case 23:
            // Code / function
            break;
        case 24:
            // Code / function
            break;
        case 25:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 26);
}


//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void showPhysicsMenu() {
    int option;
    do {
        cout << "\n======== Physics Menu ========\n";
        cout << "1. ********* \t 11. ********* \t 21. ********* \t 31. ********* \t 41. *********\n";
        cout << "2. ********* \t 12. ********* \t 22. ********* \t 32. ********* \t 42. *********\n";
        cout << "3. ********* \t 13. ********* \t 23. ********* \t 33. ********* \t 43. *********\n";
        cout << "4. ********* \t 14. ********* \t 24. ********* \t 34. ********* \t 44. *********\n";
        cout << "5. ********* \t 15. ********* \t 25. ********* \t 35. ********* \t 45. *********\n";
        cout << "6. ********* \t 16. ********* \t 26. ********* \t 36. ********* \t 46. *********\n";
        cout << "7. ********* \t 17. ********* \t 27. ********* \t 37. ********* \t 47. *********\n";
        cout << "8. ********* \t 18. ********* \t 28. ********* \t 38. ********* \t 48. *********\n";
        cout << "9. ********* \t 19. ********* \t 29. ********* \t 39. ********* \t 49. *********\n";
        cout << "10. ******** \t 20. ********* \t 30. ********* \t 40. ********* \t 50. *********\n";
        cout << "51. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        if (option == 51) {
            return; // Return to the main menu
        }

        // Placeholder for actual functionality
        cout << "You selected option " << option << " in Physics.\n";

        switch (option){
        case 1:
            // Code / function
            break;
        case 2:
            // Code / function
            break;
        case 3:
            // Code / function
            break;
        case 4:
            // Code / function
            break;
        case 5:
            // Code / function
            break;
        case 6:
            // Code / function
            break;
        case 7:
            // Code / function
            break;
        case 8:
            // Code / function
            break;
        case 9:
            // Code / function
            break;
        case 10:
            // Code / function
            break;
        case 11:
            // Code / function
            break;
        case 12:
            // Code / function
            break;
        case 13:
            // Code / function
            break;
        case 14:
            // Code / function
            break;
        case 15:
            // Code / function
            break;
        case 16:
            // Code / function
            break;
        case 17:
            // Code / function
            break;
        case 18:
            // Code / function
            break;
        case 19:
            // Code / function
            break;
        case 20:
            // Code / function
            break;
        case 21:
            // Code / function
            break;
        case 22:
            // Code / function
            break;
        case 23:
            // Code / function
            break;
        case 24:
            // Code / function
            break;
        case 25:
            // Code / function
            break;
        case 26:
            // Code / function
            break;
        case 27:
            // Code / function
            break;
        case 28:
            // Code / function
            break;
        case 29:
            // Code / function
            break;
        case 30:
            // Code / function
            break;
        case 31:
            // Code / function
            break;
        case 32:
            // Code / function
            break;
        case 33:
            // Code / function
            break;
        case 34:
            // Code / function
            break;
        case 35:
            // Code / function
            break;
        case 36:
            // Code / function
            break;
        case 37:
            // Code / function
            break;
        case 38:
            // Code / function
            break;
        case 39:
            // Code / function
            break;
        case 40:
            // Code / function
            break;
        case 41:
            // Code / function
            break;
        case 42:
            // Code / function
            break;
        case 43:
            // Code / function
            break;
        case 44:
            // Code / function
            break;
        case 45:
            // Code / function
            break;
        case 46:
            // Code / function
            break;
        case 47:
            // Code / function
            break;
        case 48:
            // Code / function
            break;
        case 49:
            // Code / function
            break;
        case 50:
            // Code / function
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (option != 51);
}

//!---------------------------------------------------------------------------------------------------------------------------------------------------------

void displayExitMessage() {
    cout << "\nThank you for using the program!\n";
}



//todo 20 algebra formulas ---------------------------------------------------------------------------------------------------




//todo 50 geometry formulas (divided between 2D and 3D) ---------------------------------------------------------------------------------------------------



//todo 50 physics formulas ---------------------------------------------------------------------------------------------------





