#include "pch.h" 
#include <utility>
#include <limits.h>
#include <iostream>
#include "PrintLibrary.h"

void printlucky( int number)
{
	if (number == 1)
		std::cout << "\n\n    ELEPHANT\n\n  In simple words : attentiveness, sociability, and aggressiveness.It may not be the king of the animal world, but it certainly a member of the royal family.";
	else if (number == 2)
		std::cout << "\n\n    LION\n\n   The lion is good at making decisions and is very goal-oriented. He enjoys challenges, difficult assignments, and opportunity for advancement. Because lions are thinking of the goal, they can step on people to reach it. Lions can be very aggressive and competitive.";
	else if (number == 3)
		std::cout << "\n\n    PEACOCK\n\n   Characteristics. Peacocks are talkers. These open, expressive and cheerful customers are fast, impulsive and visual characters. Outgoing, confident and friendly, Peacocks are warm and entertaining, which can become dramatic under pressure.";
	else if (number == 4)
		std::cout << "\n\n    CROW\n\n   Crows are large to very large, robustly built birds, with tails that are short or medium length. ... The personality of crows and jays can be described as aggressive, intelligent, quarrelsome, and sometimes playful. The voice of a corvid, once heard, is not easily forgotten.";
	else if (number == 5)
		std::cout << "\n\n    COW\n\n    Cows are intelligent animals with an innate sense of curiosity. They have a full range of personality traits that can include boldness, shyness, sociability, excitability, and more. Cows have a natural hesitancy and fear of the unknown; and do not like change.";
	else if (number == 6)
		std::cout << "\n\n     DEER\n\n    Deer are modest, shy, and rather timid animals. They can smell danger and run away from it in time. They are uncomfortable in the spotlight, they feel out of their element there. Deer live a peaceful, calm life; bustle and haste lead them to a stressful state.";
	else if (number == 7)
		std::cout << "\n\n    KANGAROO\n\n   Kangaroos are usually playful, friendly and active, and thrive on movement and variety. They do have a tendency to 'Leap before they look' which sometimes get them into trouble, both at school and at work, but can also make them fun to be around.";
	else if (number == 8)
		std::cout << "\n\n     DOLPHIN\n\n     Dolphin types are highly sensitive and have an innate dislike for unpleasantness of any kind, often going out of their way to avoid situations that might bring them into conflict with others and choosing to avoid potential disputes in favour of keeping the peace.";
	else if (number == 9)
		std::cout << "\n\n     MONKEY\n\n     Monkey have magnetic personalities and are witty and intelligent. Personality traits like mischievousness, curiosity, and cleverness make them very naughty.";
	else
		std::cout << "ERROR FOUND";
}