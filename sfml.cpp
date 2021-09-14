//SFML Images
#include<iostream>
using namespace std;


#include "SFML/Graphics.hpp"

int main() {
    int Soulofcinder = 0;
    int Iudex = 0;
    int Crystal = 0;//defining all of the variables that determine which boss you are
    int Twins = 0;
    char input;
    bool done = false;

    //game set up (you'll need these two lines in every game)
    sf::RenderWindow renderWindow(sf::VideoMode(500, 500), "loading images"); //set up screen
    sf::Event event; //set up event queue

    //Here's how to load an image: clicke file->save as to see where to store "dog.png"
    sf::Texture img1;
    if (!img1.loadFromFile("crystal.jpg")) return 0; //this line loads the image AND kills your program if it doesn't load
    sf::Sprite pic1;
    pic1.setTexture(img1);
    if (!img1.loadFromFile("dog.png")) return 0;

    pic1.setTexture(img1);

    //################### HOLD ONTO YOUR BUTTS, ITS THE GAME LOOP###############################################################
    while (renderWindow.isOpen()) {//keep window open until user shuts it down

        while (renderWindow.pollEvent(event)) { //look for events-----------------------

            //this checks if the user has clicked the little "x" button in the top right corner
            if (event.type == sf::Event::EventType::Closed)
                renderWindow.close();



        }//end event loop---------------------------------------------------------------
        if (!done) {
            std::cout << "What is your ideal ending to a story?" << endl;
            std::cout << "A. You don't care how it ends" << endl;
            std::cout << "B. You want the story to keep going forever" << endl;//asking a question and giving options
            std::cout << "C. You're just along for the ride" << endl;
            std::cout << "D. You don't like stories" << endl;

            cin >> input;
            if (input == 'a')
                Crystal++;
            else if (input == 'b')
                Soulofcinder++;//here it records which answer would be which. It keeps track of which choices you have made
            else if (input == 'c')
                Iudex++;
            else//twins gets all other inputs
                Twins++;

            std::cout << "What is your weapon of choice?" << endl;

            std::cout << "A. A magical staff that casts magic" << endl;
            std::cout << "B. An unbreakable halberd, made to last for eternity" << endl;
            std::cout << "C. A combination of magic and swordsmanship" << endl;//questions
            std::cout << "D. Yes" << endl;
            cin >> input;

            if (input == 'a')
                Crystal++;
            else if (input == 'b')
                Iudex++;
            else if (input == 'c')
                Twins++;
            else
                Soulofcinder++;


            std::cout << "If given the opportunity, would you take charge of a difficult situation on your own?" << endl;

            std::cout << "A. I would protest the thought of having to act in the situation" << endl;
            std::cout << "B. I would serve as the guy that tried but failed" << endl;
            std::cout << "C. I would literally not try at all" << endl;
            std::cout << "D. I would rise up and take charge" << endl;
            cin >> input;

            if (input == 'a')
                Twins++;
            else if (input == 'b')
                Iudex++;
            else if (input == 'c')
                Crystal++;
            else
                Soulofcinder++;


            std::cout << "What is your ideal summer night?" << endl;

            std::cout << "A. Hide away from anything important in the corner" << endl;
            std::cout << "B. Do all of your chores so you can feel fulfilled" << endl;
            std::cout << "C. Sit and admire all of your accomplishments" << endl;
            std::cout << "D. Sit in your room just kind of chilling out" << endl;
            cin >> input;

            if (input == 'a')
                Crystal++;
            else if (input == 'b')
                Iudex++;
            else if (input == 'c')
                Soulofcinder++;
            else
                Twins++;


            std::cout << "What is your preferred damage type?" << endl;

            std::cout << "A. Physical damage" << endl;
            std::cout << "B. Magic damage" << endl;
            std::cout << "C. A comprimise of fire and physical" << endl;
            std::cout << "D. Pure fire" << endl;
            cin >> input;

            if (input == 'a')
                Iudex++;
            else if (input == 'b')
                Crystal++;
            else if (input == 'c')
                Twins++;
            else
                Soulofcinder++;

            std::cout << "Out of these options, which one do you prefer?" << endl;

            std::cout << "A. YouTube" << endl;
            std::cout << "B. Reddit" << endl;
            std::cout << "C. Instagram" << endl;
            std::cout << "D. Facebook" << endl;
            cin >> input;

            if (input == 'a')
                Soulofcinder++;
            else if (input == 'b')
                Crystal++;
            else if (input == 'c')
                Twins++;
            else
                Iudex++;


            //check which BOSS has the highest score
            if (Soulofcinder > Iudex && Soulofcinder > Twins && Soulofcinder > Crystal) {//this line of code checks to see whether or not the score fpr soul of cinder is higher than the rest
                if (!img1.loadFromFile("soul.jpeg")) return 0; //this line loads the image AND kills your program if it doesn't load
                
                pic1.setTexture(img1);
                std::cout << "You are The Soul of Cinder! The Soul of Cinder serves as the final boss of dark souls 3. He is the jack of all trades of the bosses. He weilds swords, spears, and a magical stave." << endl;
                std::cout << "You are very determined to succeed and you will stop at nothing to do so!" << endl;//text that describes which boss you would be
            }

            else if (Iudex > Soulofcinder && Iudex > Twins && Iudex > Crystal) {
                if (!img1.loadFromFile("gundyr.jpeg")) return 0;

                pic1.setTexture(img1);
                std::cout << "You are Iudex Gundyr! Iudex Gundyr is the opening boss to Dark Souls 3. His lore is a little hidden but if there is one thing that can describe him, it's vigalent." << endl;
                std::cout << "He has followed his path for a long time. He is willing to go the extra mile to complete his job. He weilds an eternal halberd." << endl;
            }
            else if (Twins > Soulofcinder && Twins > Iudex && Twins > Crystal) {
                if (!img1.loadFromFile("twins.png")) return 0;
                pic1.setTexture(img1);
                std::cout << "You are The Twin Princes! These guys share a powerful bond that triumphs over everything. Rebelling in the face of destiny, the two aren't conformists" << endl;
                std::cout << "If given the choice, they would rather ignore commands to do their own thing. The older brother, Lorian, weilds a massive sword of fire. The younger brother, Lothric, casts spells and owns a straight sword." << endl;
            }

            else if (Crystal > Soulofcinder && Crystal > Twins && Crystal > Iudex) {
                if (!img1.loadFromFile("crystal.jpg")) return 0;
                pic1.setTexture(img1);
                std::cout << "You are The Crystal Sage! To put it quite simply, you don't really care. You just happened to be there when it happened but you couldn't really care less." << endl;
                std::cout << "The Crystal Sage is a mage, meaning he weilds magic and a high intelligence. His weapon of choice is a magical rapier and a crystal staff." << endl;
            }
            else
                std::cout << "I don't even know what you are." << endl;//should scores be the same, this line will serve as a cheap way to defensively code
            done = true;
        }

        //render section-----------------------------------------
        renderWindow.clear(); //wipes screen, without this things smear
        renderWindow.draw(pic1); //loads background image: make sure this goes first or it will cover other stuff!
        renderWindow.display(); //flips memory drawings onto screen

    }//######################## end game loop ###################################################################################

   
} //end game
