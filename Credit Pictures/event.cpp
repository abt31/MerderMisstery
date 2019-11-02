/*
**
**	Event class
**	
*/ 

#include <iostream>
#include <fstream>
#include <map>
#include <time.h>
#include <stdlib.h>

#include "npc.hpp"


class Event{
	public:
		int time;
		int location;
		int isObserver;
		std::string npcName1;
		std::string npcName2;
		int event;
		Event(NPC npc1, NPC npc2, int eventType, int t, int place, int observer) {
			npcName1 = npc1.getName();
			npcName2 = npc2.getName();
			event = eventType;
			time = t;
			location = place;
			isObserver = observer;
		}
		Event(std::string firstNPC, std::string secondNPC, int eventType, int t, int place, int observer) {
			npcName1 = firstNPC;
			npcName2 = secondNPC;
			event = eventType;
			time = t;
			location = place;
			isObserver = observer;
		}
		
		Event(Event* e, int observer) {
			npcName1 = e->npcName1;
			npcName2 = e->npcName2;
			event = e->event;
			time = e->time;
			location = e->location;
			isObserver = observer;
		}
		
		Event() {
			time = 0;
			npcName1 = "first";
			npcName2 = "second";
			event = 0;
			isObserver = false;
		}
		
		void printEvent() {
			std::string info = "";
			info += npcName1;
			info += "\n";
			info += npcName2;
			info += "\n";
			info += "Time: ";
			info += std::to_string(time);
			info += "\n";
			info += "Location: ";
			info += std::to_string(location);
			info += "\n";
			info += "Perspective: ";
			info += std::to_string(isObserver);
			info += "\n";
			std::cout << info;
		}
		
		~Event() {}
};


