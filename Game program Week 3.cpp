#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    char reply = '\0';
    int score = 0;
    string name;

    cout << "Enter your hero's name: ";
    cin >> name;

    cout << "\nWelcome, " << name << "! You are on a quest to reach the Lost Ruins and claim the ancient treasure.\n" << endl;

    // Space 1 – Forest Edge
    cout << "You are at space 1: The edge of the forest.\n";
    cout << "Do you:\n";
    cout << "a) Enter the dark woods\n";
    cout << "b) Follow the river path\n";
    cout << "Enter your choice: ";
    do {
        cin >> reply;
        if (reply != 'a' && reply != 'b')
            cout << "Invalid input. Choose a or b: ";
    } while (reply != 'a' && reply != 'b');

    if (reply == 'a') {
        cout << "You find a glowing fairy that heals you. (+10)\n";
        score += 10;
    } else {
        cout << "You trip on wet rocks and lose time. (-5)\n";
        score -= 5;
    }

    // Space 2 – Goblin Camp
    cout << "\nSpace 2: A goblin camp blocks your path.\n";
    cout << "Do you:\n";
    cout << "a) Sneak through quietly\n";
    cout << "b) Charge in sword swinging\n";
    cout << "Enter your choice: ";
    do {
        cin >> reply;
        if (reply != 'a' && reply != 'b')
            cout << "Invalid input. Choose a or b: ";
    } while (reply != 'a' && reply != 'b');

    if (reply == 'a') {
        cout << "You slip past unnoticed. (+10)\n";
        score += 10;
    } else {
        cout << "You defeat a few goblins, but take damage. (-5)\n";
        score -= 5;
    }

    // Space 3 – Mysterious Shrine
    cout << "\nSpace 3: A mysterious shrine glows with power.\n";
    cout << "Do you:\n";
    cout << "a) Touch the glowing statue\n";
    cout << "b) Leave it alone\n";
    cout << "Enter your choice: ";
    do {
        cin >> reply;
        if (reply != 'a' && reply != 'b')
            cout << "Invalid input. Choose a or b: ";
    } while (reply != 'a' && reply != 'b');

    if (reply == 'a') {
        cout << "You receive a blessing! (+5)\n";
        score += 5;
    } else {
        cout << "You missed a chance to gain power. (-5)\n";
        score -= 5;
    }

    // Space 4 – The Ruins Gate
    cout << "\nSpace 4: You reach the gate of the Lost Ruins.\n";
    cout << "Do you:\n";
    cout << "a) Try to open the door with your sword\n";
    cout << "b) Search around for a hidden switch\n";
    cout << "Enter your choice: ";
    do {
        cin >> reply;
        if (reply != 'a' && reply != 'b')
            cout << "Invalid input. Choose a or b: ";
    } while (reply != 'a' && reply != 'b');

    if (reply == 'b') {
        cout << "You find the switch and enter safely. (+10)\n";
        score += 10;
    } else {
        cout << "The door shocks you! (-5)\n";
        score -= 5;
    }

    // Final Score Report
    cout << fixed << setprecision(1);
    cout << "\nFinal Score: " << score << endl;

    if (score >= 25) {
        cout << "Well done, " << name << "! You reached the treasure and became a legend!" << endl;
    } else if (score >= 10) {
        cout << name << ", you made it to the ruins, but the journey took its toll." << endl;
    } else {
        cout << "Your quest was tough, " << name << ". You barely made it out alive!" << endl;
    }

    return 0;
}
