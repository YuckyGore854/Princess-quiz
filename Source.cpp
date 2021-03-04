#include<iostream>
using namespace std;
// princess quiz!


int main() {
	int Soulofcinder = 0;
	int Iudex = 0;
	int Crystal = 0;//defining all of the variables that determine which boss you are
	int Twins = 0;
	char input;

	cout << "This is a quiz that will test which Dark Souls III boss you are!" << endl;

	cout << "What is your ideal ending to a story?" << endl;
	cout << "A. You don't care how it ends" << endl;
	cout << "B. You want the story to keep going forever" << endl;//asking a question and giving options
	cout << "C. You're just along for the ride" << endl;
	cout << "D. You don't like stories" << endl;

	cin >> input;
	if (input == 'a')
		Crystal++;
	else if (input == 'b')
		Soulofcinder++;//here it records which answer would be which. It keeps track of which choices you have made
	else if (input == 'c')
		Iudex++;
	else//twins gets all other inputs
		Twins++;

	cout << "What is your weapon of choice?" << endl;

	cout << "A. A magical staff that casts magic" << endl;
	cout << "B. An unbreakable halberd, made to last for eternity" << endl;
	cout << "C. A combination of magic and swordsmanship" << endl;//questions
	cout << "D. Yes" << endl;
	cin >> input;

	if (input == 'a')
		Crystal++;
	else if (input == 'b')
		Iudex++;
	else if (input == 'c')
		Twins++;
	else
		Soulofcinder++;


	cout << "If given the opportunity, would you take charge of a difficult situation on your own?" << endl;

	cout << "A. I would protest the thought of having to act in the situation" << endl;
	cout << "B. I would serve as the guy that tried but failed" << endl;
	cout << "C. I would literally not try at all" << endl;
	cout << "D. I would rise up and take charge" << endl;
	cin >> input;

	if (input == 'a')
		Twins++;
	else if (input == 'b')
		Iudex++;
	else if (input == 'c')
		Crystal++;
	else
		Soulofcinder++;


	cout << "What is your ideal summer night?" << endl;

	cout << "A. Hide away from anything important in the corner" << endl;
	cout << "B. Do all of your chores so you can feel fulfilled" << endl;
	cout << "C. Sit and admire all of your accomplishments" << endl;
	cout << "D. Sit in your room just kind of chilling out" << endl;
	cin >> input;

	if (input == 'a')
		Crystal++;
	else if (input == 'b')
		Iudex++;
	else if (input == 'c')
		Soulofcinder++;
	else
		Twins++;


	cout << "What is your preferred damage type?" << endl;

	cout << "A. Physical damage" << endl;
	cout << "B. Magic damage" << endl;
	cout << "C. A comprimise of fire and physical" << endl;
	cout << "D. Pure fire" << endl;
	cin >> input;

	if (input == 'a')
		Iudex++;
	else if (input == 'b')
		Crystal++;
	else if (input == 'c')
		Twins++;
	else
		Soulofcinder++;

	cout << "Out of these options, which one do you prefer?" << endl;

	cout << "A. YouTube" << endl;
	cout << "B. Reddit" << endl;
	cout << "C. Instagram" << endl;
	cout << "D. Facebook" << endl;
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
		cout << "You are The Soul of Cinder! The Soul of Cinder serves as the final boss of dark souls 3. He is the jack of all trades of the bosses. He weilds swords, spears, and a magical stave." << endl;
		cout << "You are very determined to succeed and you will stop at nothing to do so!" << endl;//text that describes which boss you would be
	}

	else if (Iudex > Soulofcinder && Iudex > Twins && Iudex > Crystal) {
		cout << "You are Iudex Gundyr! Iudex Gundyr is the opening boss to Dark Souls 3. His lore is a little hidden but if there is one thing that can describe him, it's vigalent." << endl;
		cout << "He has followed his path for a long time. He is willing to go the extra mile to complete his job. He weilds an eternal halberd." << endl;
	}
	else if (Twins > Soulofcinder && Twins > Iudex && Twins > Crystal) {
		cout << "You are The Twin Princes! These guys share a powerful bond that triumphs over everything. Rebelling in the face of destiny, the two aren't conformists" << endl;
		cout << "If given the choice, they would rather ignore commands to do their own thing. The older brother, Lorian, weilds a massive sword of fire. The younger brother, Lothric, casts spells and owns a straight sword." << endl;
	}

	else if (Crystal > Soulofcinder && Crystal > Twins && Crystal > Iudex) {
		cout << "You are The Crystal Sage! To put it quite simply, you don't really care. You just happened to be there when it happened but you couldn't really care less." << endl;
		cout << "The Crystal Sage is a mage, meaning he weilds magic and a high intelligence. His weapon of choice is a magical rapier and a crystal staff." << endl;
	}
	else
		cout << "I don't even know what you are." << endl;//should scores be the same, this line will serve as a cheap way to defensively code
}