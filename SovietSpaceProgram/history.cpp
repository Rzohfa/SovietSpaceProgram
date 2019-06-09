#include "history.h"

namespace his
{
	bool historyPops[12] = { 0 };
	std::vector<std::string> content;
	void R7()
	{
		content.push_back("You have been chosen to");
		content.push_back("represent Matushka Rossiya in");
		content.push_back("this space race between usand");
		content.push_back("the Americans.");
		content.push_back("Your job will be to lead this");
		content.push_back("agency which will be responsible");
		content.push_back("for realisation of our most");
		content.push_back("advanced projects.");
		content.push_back("You learned under best of our");
		content.push_back("scientistand techniciansand");
		content.push_back("we hope that with your help");
		content.push_back("Motherland will conquer space!");

		game::showPopup(520, 500, 3.5, 2, "Welcome Tovarish!", content);

		content.clear();

		content.push_back("Your first task is very basic");
		content.push_back("and easy, but still important");
		content.push_back("as you have to be tested.	");
		content.push_back("You have been assigned to	");
		content.push_back("project 'Semyorka', the R - 7");
		content.push_back("missile, which should be		");
		content.push_back("capable of intercontinental	");
		content.push_back("flights.						");
		content.push_back("You have to cooperate with	");
		content.push_back("our scientists to build it.	");
		content.push_back("Good luck Tovarish!			");

		game::showPopup(520, 500, 3.5, 2, "Welcome Tovarish!", content);

		content.clear();
	}

	void S1()
	{
		//R - 7 Semyorka
		//
		content.push_back("First launched in 1957, the R - 7");
		content.push_back("is Soviet intercontinental		");
		content.push_back("ballistic missile(worlds			");
		content.push_back("first) and orbital launch		");
		content.push_back("vehicle.							");
		content.push_back("After many modifications			");
		content.push_back("it is still used as orbital		");
		content.push_back("launcher today, for example		");
		content.push_back("in Soyuz - FG.					");
		
		game::showPopup(520, 500, 3.5, 2, "R-7 Semyorka", content);

		content.clear();
		
		//Good job!
		//
		content.push_back("You have completed your first");
		content.push_back("task!						");
		content.push_back("Now the motherland has		");
		content.push_back("intercontinental ballistic	");
		content.push_back("missile before USA and we can");
		content.push_back("protect our poor citizens	");
		content.push_back("from democracy.				");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		//Next job!
		//
		content.push_back("Your second assignment will be ");
		content.push_back("something big now.You will	  ");
		content.push_back("help building the Sputnik	  ");
		content.push_back("program rockets!				  ");
		content.push_back("Your first task in this team	  ");
		content.push_back("will be to build unmanned probe");
		content.push_back("which will become first		  ");
		content.push_back("artificial Earth satellite.	  ");
		content.push_back("You better hurry - you don't	  ");
		content.push_back("want to fail Matushka Rossiya. ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void S2()
	{
		//Sputnik 1
		//
		content.push_back("Sputnik 1 was the first		  ");
		content.push_back("artificial Earth satellite.	  ");
		content.push_back("It was launched with 8K71PS,	  ");
		content.push_back("modified R - 7 rocket.		  ");
		content.push_back("It was mainly technology		  ");
		content.push_back("demonstration and great		  ");
		content.push_back("propaganda for Soviet		  ");
		content.push_back("technology.					  ");
		content.push_back("It's success was major event	  ");
		content.push_back("in the Cold War which triggered");
		content.push_back("creation of NASA and is		  ");
		content.push_back("considered as beginning of	  ");
		content.push_back("'Space Race'.				  ");

		game::showPopup(520, 500, 3.5, 2, "Sputnik 1", content);

		content.clear();

		//Good job!
		//
		content.push_back("Congratulations, I'm starting  ");
		content.push_back("to believe that putting you in ");
		content.push_back("charge of technicians was a	  ");
		content.push_back("good decision.				  ");
		content.push_back("We have proven, that Soviets	  ");
		content.push_back("is better than the West and we ");
		content.push_back("launched vessel to space before");
		content.push_back("them.");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		//Next job!
		//
		content.push_back("But unmanned probe is just the");
		content.push_back("first step to put man in space.");
		content.push_back("To ensure our conquer of space");
		content.push_back("we have to send human into	 ");
		content.push_back("space.						 ");
		content.push_back("But before that we should send");
		content.push_back("something on smaller scale, an");
		content.push_back("animal for example.			 ");
		content.push_back("Your job will be to choose an ");
		content.push_back("animaland adapt Sputnik 1	 ");
		content.push_back("probe to fit it.				 ");
		content.push_back("Good luck!					 ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void L1()
	{
		ctx::save();

		//Sputnik 2
		
		content.push_back("First spacecraft to carry a");
		content.push_back("living animal, a dog named ");
		content.push_back("Laika, which died after	  ");
		content.push_back("several hours in space,	  ");
		content.push_back("due to high temperature in ");
		content.push_back("cabin.					  ");
		content.push_back("It was important source of ");
		content.push_back("information about behavior ");
		content.push_back("of a living organism in	  ");
		content.push_back("space environment.		  ");

		game::showPopup(520, 500, 3.5, 2, "Sputnik 2", content);

		content.clear();

		//Good job!
		
		content.push_back("You have completed our task");
		content.push_back("successfully!			  ");
		content.push_back("The dog survived only few  ");
		content.push_back("hours, but some propaganda ");
		content.push_back("will make it alive for a	  ");
		content.push_back("week in space.			  ");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		//Next job!
		
		content.push_back("Our scientists recently	  ");
		content.push_back("finished Luna projectand it");
		content.push_back("will be your responsibility");
		content.push_back("to build it.				  ");
		content.push_back("Don't fail us.			  ");
		content.push_back("Good luck!				  ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void L2()
	{
		//Luna 1
		
		content.push_back("First spacecraft to get close ");
		content.push_back("to the moon and the first one ");
		content.push_back("to be placed on the orbit of	 ");
		content.push_back("the Sun itself.				 ");
		content.push_back("It was designed to orbit moon,");
		content.push_back("but due to incorrectly timed	 ");
		content.push_back("upper stage burn it missed and");
		content.push_back("escaped Earth gravitation.");

		game::showPopup(520, 500, 3.5, 2, "Luna 1", content);

		content.clear();

		//Good job!
		
		content.push_back("You managed to build Luna 1,	   ");
		content.push_back("but one of the scientist failed ");
		content.push_back("to calculate proper burn time.  ");
		content.push_back("Maybe he will learn some basic  ");
		content.push_back("math in gulag.				   ");
		content.push_back("Anyway we have next job for you!");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		//Next job!
		
		content.push_back("Our scientists claim that they");
		content.push_back("fixed all Luna 1 problems, so ");
		content.push_back("maybe this time we will be able");
		content.push_back("to celebrate success.		 ");
		content.push_back("Build Luna 2 as fast as you	 ");
		content.push_back("can.							 ");
		content.push_back("Good luck.					 ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void L3()
	{
		//Luna 2
		
		content.push_back("Sharing similar, but still a");
		content.push_back("bit different, design Luna 2");
		content.push_back("finally reached moon and	   ");
		content.push_back("collided with it, which was ");
		content.push_back("first objective of Luna	   ");
		content.push_back("programme.				   ");

		game::showPopup(520, 500, 3.5, 2, "Luna 2", content);

		content.clear();

		//Good job!
		
		content.push_back("You keep me amazed.			");
		content.push_back("For sixth time you have		");
		content.push_back("fulfilled my expectations.	");
		content.push_back("It's a honor for your family.");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		//Next job!
		
		content.push_back("Thanks to our success in last  ");
		content.push_back("flight we can now pretty well  ");
		content.push_back("calculate how to reliably get  ");
		content.push_back("to the moon.					  ");
		content.push_back("Therefore your next project	  ");
		content.push_back("to build will be Luna 3,		  ");
		content.push_back("satellite which will photograph");
		content.push_back("far side of the moon.		  ");
		content.push_back("Build it fast, we want to do it");
		content.push_back("before this spoiled Western	  ");
		content.push_back("NASA institution.			  ");
		content.push_back("Good luck!					  ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void VT1()
	{
		//Luna 3
		
		content.push_back("Although it brought low quality");
		content.push_back("pictures Luna 3 was the first  ");
		content.push_back("ever mission to photograph far ");
		content.push_back("side of the moon and it caused ");
		content.push_back("world wide excitement.		  ");
		content.push_back("Luna 3 was also important due to");
		content.push_back("first ever gravity assist	  ");
		content.push_back("manouver - it used moon		  ");
		content.push_back("gravitation to alter its orbit ");
		content.push_back("so it could land on the Northern");
		content.push_back("hemisphere of the Earth where  ");
		content.push_back("Soviets could retrieve it	  ");
		content.push_back("without trouble.				  ");

		game::showPopup(520, 500, 3.5, 2, "Luna 3", content);

		content.clear();

		
		//Good job!
		
		content.push_back("You succeeded in building Luna");
		content.push_back("3 on time.Thanks to you we can");
		content.push_back("once more show Soviet		 ");
		content.push_back("superiority over disgusting	 ");
		content.push_back("West.						 ");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		
		//Next job!
		
		content.push_back("Now we have very important");
		content.push_back("mission for you.			 ");
		content.push_back("Our scientists recently	 ");
		content.push_back("developed way to transport");
		content.push_back("human to space.			 ");
		content.push_back("Your job will be to build ");
		content.push_back("Vostok 1, rocket which will");
		content.push_back("be used to transport Yuri ");
		content.push_back("Gagarin to space.		 ");
		content.push_back("You better do it correctly,");
		content.push_back("we want him back on Earth.");
		content.push_back("Good luck!				 ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void VT6()
	{
		//Vostok 1
		
		content.push_back("It was the first manned		   ");
		content.push_back("spaceflight in history.		   ");
		content.push_back("Yuri Gagarin has stayed up	   ");
		content.push_back("for one orbit at 169			   ");
		content.push_back("kilometers at lowest point.	   ");
		content.push_back("The flight took 108 minutes	   ");
		content.push_back("and Yuri landed safely after	   ");
		content.push_back("ejecting himself at 7 kilometers");
		content.push_back("and parachuting himself		   ");
		content.push_back("separately from his capsule.	   ");

		game::showPopup(520, 500, 3.5, 2, "Vostok 1", content);

		content.clear();

		
		//Good job!
		
		content.push_back("You helped to bring glory to	  ");
		content.push_back("Matushka Rossiya, we were the   ");
		content.push_back("first to bring human into space!");
		content.push_back("It is honour to you and your");
		content.push_back("family to take part in this.");
		content.push_back("Today we can celebrate!	  ");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		
		//Next job!
		
		content.push_back("But from tomorrow we have to get");
		content.push_back("to work!						   ");
		content.push_back("We have plans on sending		   ");
		content.push_back("Valentina Tereshkova to space   ");
		content.push_back("together with equipment to	   ");
		content.push_back("transmit her flight on live tv  ");
		content.push_back("and to contact her with ground  ");
		content.push_back("on the radio.				   ");
		content.push_back("Good luck!					   ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void VH2()
	{
		//Vostok 6
		
		content.push_back("Vostok 6 was first mission	   ");
		content.push_back("to carry a woman, Valentina	   ");
		content.push_back("Tereshkova, to space.		   ");
		content.push_back("Spacecraft used was called	   ");
		content.push_back("Vostok 3KA, it was first used   ");
		content.push_back("in Vostok 1 mission and this	   ");
		content.push_back("one was its last.			   ");
		content.push_back("Soviet state TV broadcasted	   ");
		content.push_back("live video of Valentina from a  ");
		content.push_back("camera inside capsule and she   ");
		content.push_back("even conversed with Premier	   ");
		content.push_back("Nikita Khrushchev over the	   ");
		content.push_back("radio.						   ");
		content.push_back("During flight an error occured  ");
		content.push_back("which made the rocket ascend	   ");
		content.push_back("from orbit instead of descend.  ");
		content.push_back("Flight controllers provided	   ");
		content.push_back("Tereshkova with data to enter   ");
		content.push_back("into descend program and finally");
		content.push_back("she landed safely.			   ");

		game::showPopup(520, 500, 3.5, 2, "Vostok 6", content);

		content.clear();

		
		content.push_back("You handled the job perfectly.");
		content.push_back("I hope you will continue to	 ");
		content.push_back("amaze us during our next		 ");
		content.push_back("assignments.					 ");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		content.push_back("Speak of the devil - we have	 ");
		content.push_back("new job for you.				 ");
		content.push_back("We renamed Vostok program to	 ");
		content.push_back("Voskhod and we are now ready	 ");
		content.push_back("for first extra - vehicular	 ");
		content.push_back("activity, or just spacewalk if");
		content.push_back("you prefer.					 ");
		content.push_back("Your task, as always, will be ");
		content.push_back("to construct this spacecraft, ");
		content.push_back("so you better get to work.	 ");
		content.push_back("Good luck!					 ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void VE3()
	{
		//Voskhod 2
		
		content.push_back("Voskhod 2 mission was very	   ");
		content.push_back("important one, as it was the	   ");
		content.push_back("first time human has ever left  ");
		content.push_back("the spacecraft and fully		   ");
		content.push_back("experienced space.			   ");
		content.push_back("Alexei Leonov made 12 minute	   ");
		content.push_back("EVA or 'spacewalk', which nearly");
		content.push_back("ended fatal for him as he nearly");
		content.push_back("suffered heatstroke, he got	   ");
		content.push_back("stuck while entering back to the");
		content.push_back("spacecraft and flirted with	   ");
		content.push_back("decompression sickness.		   ");
		content.push_back("In the end he returned safely to");
		content.push_back("Earth being the first man in	   ");
		content.push_back("history to perform spacewalk.   ");

		game::showPopup(520, 500, 3.5, 2, "Voskhod 2", content);

		content.clear();

		//
		//Good job!
		
		content.push_back("You have done really well.	  ");
		content.push_back("You helped fellow Tovarish	  ");
		content.push_back("Leonov be the first one to ever");
		content.push_back("be outside spacecraft in space!");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();
		
		//Next job!
		
		content.push_back("Our new assignment for you will");
		content.push_back("be to help Venera programme in ");
		content.push_back("building probe which will land ");
		content.push_back("on planet Venus.				  ");
		content.push_back("Good luck!					  ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void SAL1()
	{
		//Venera 3
		
		content.push_back("First probe to reach and land   ");
		content.push_back("Venus was Venera 3.			   ");
		content.push_back("Venera 3 comprised of probe and ");
		content.push_back("flyby spacecraft.			   ");
		content.push_back("First one was supposed to enter ");
		content.push_back("and land on the planed and the  ");
		content.push_back("second carried mentioned probe  ");
		content.push_back("and served also as communication");
		content.push_back("relay.						   ");

		game::showPopup(520, 500, 3.5, 2, "Venera 3", content);

		content.clear();

		
		//Good job!
		
		content.push_back("It is very pleasing to work with");
		content.push_back("you.							   ");
		content.push_back("I hope you will keep to suprise ");
		content.push_back("us in the future during next	   ");
		content.push_back("assignments.					   ");
		content.push_back("And speak of the devil!		   ");

		game::showPopup(520, 500, 3.5, 2, "Good job!", content);

		content.clear();

		
		//Next job!
		
		content.push_back("Since our great Tovarish Sergey ");
		content.push_back("Korolev died landing on the Moon");
		content.push_back("is not that important anymore.  ");
		content.push_back("For now we are focusing on	   ");
		content.push_back("making an orbital station and   ");
		content.push_back("therefore you are assigned to   ");
		content.push_back("Salyut programme.			   ");
		content.push_back("Good luck!					   ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void SATP()
	{
		//Salyut 1
		
		content.push_back("Salyut 1 was the first space		 ");
		content.push_back("station of any kind.				 ");
		content.push_back("It was launched into low Earth	 ");
		content.push_back("orbit where it was flying for	 ");
		content.push_back("175 days.						 ");
		content.push_back("It carried 3 crew members for	 ");
		content.push_back("over 23 days, which was record	 ");
		content.push_back("for that time.					 ");
		content.push_back("Unfortunatelly due to pressure	 ");
		content.push_back("relief valve malfunction all		 ");
		content.push_back("crew members died during			 ");
		content.push_back("re - entry as they weren't wearing");
		content.push_back("pressure suits.					 ");
		content.push_back("It was deorbited then as there	 ");
		content.push_back("was not enough fuel to keep it	 ");
		content.push_back("on place without rotating.		 ");

		game::showPopup(520, 500, 3.5, 2, "Salyut 1", content);

		content.clear();

		
		//Good job!
		
		content.push_back("Maybe the mission wasn't		   ");
		content.push_back("complete success, but still it  ");
		content.push_back("was quite impressive.		   ");
		content.push_back("We have redesigned Soyuz cabins ");
		content.push_back("so such accident never happens  ");
		content.push_back("again.						   ");
		content.push_back("But the times have changed and  ");
		content.push_back("our leaders are talking with USA");
		content.push_back("about becoming friendly again.  ");
		content.push_back("To improve relations between us ");
		content.push_back("we will have to cooperate with  ");
		content.push_back("NASA in space.				   ");
		content.push_back("We will send our newest design, ");
		content.push_back("Soyuz 19 to meet Apollo rocket  ");
		content.push_back("and dock into it.			   ");
		content.push_back("So as usual you will have to	   ");
		content.push_back("build Soyuz rocket.			   ");
		content.push_back("Good luck!					   ");

		game::showPopup(520, 500, 3.5, 2, "Next job!", content);

		content.clear();

	}

	void end()
	{
		//ASTP
		
		content.push_back("Apollo - Soyuz Test Project(ASTP)");
		content.push_back("was a symbol of everything that	");
		content.push_back("space race was and still is.		");
		content.push_back("It was thought that ASTP will	");
		content.push_back("make space race either more		");
		content.push_back("cooperative or competitive and	");
		content.push_back("instead it made it both of		");
		content.push_back("above.							");
		content.push_back("Mission became symbol of each	");
		content.push_back("countries goals of scientific	");
		content.push_back("cooperation, but both called		");
		content.push_back("it their own success while		");
		content.push_back("calling other ones spacecraft	");
		content.push_back("primitive.						");
		content.push_back("It is also seen in name of the	");
		content.push_back("mission - in USA it is called	");
		content.push_back("primarily Apollo - Soyuz mission,");
		content.push_back("while Soviets called it the		");
		content.push_back("Soyuz - Apollo mission.			");
		content.push_back("This mission marks the end of	");
		content.push_back("Space Race started by Sputnik	");
		content.push_back("launch.							");
		content.push_back("It was also important for both	");
		content.push_back("countries as experience from it	");
		content.push_back("was used for future joint		");
		content.push_back("missions such as ISS.			");
		content.push_back("Moreover US and Soviet			");
		content.push_back("commanders became lasting		");
		content.push_back("friends.							");
		content.push_back("One can now see docked Apollo	");
		content.push_back("and Soyuz at the Cosmosphere		");
		content.push_back("in Hutchinson, Kansas.			");

		game::showPopup(520, 500, 3.5, 2, "ASTP", content);

		content.clear();

		
		//Congratulations!
		
		content.push_back("You have finished the game! ");
		content.push_back("Soviets are now cooperating ");
		content.push_back("with US and officially cold ");
		content.push_back("wars space race is now over.");
		content.push_back("Thank you for playing!	   ");

		game::showPopup(520, 500, 3.5, 2, "Congratulations!", content);

		content.clear();

	}

	void control()
	{
		if (game_time::getNotPaused() && !historyPops[0])
		{
			R7();
			historyPops[0] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[1] && 
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			S1();
			historyPops[1] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[2] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			S2();
			historyPops[2] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[3] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			L1();
			historyPops[3] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[4] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			L2();
			historyPops[4] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[5] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			L3();
			historyPops[5] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[6] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			VT1();
			historyPops[6] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[7] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			VT6();
			historyPops[7] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[8] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			VH2();
			historyPops[8] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[9] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			VE3();
			historyPops[9] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[10] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			SAL1();
			historyPops[10] = true;
		}
		else if (game_time::getNotPaused() && !historyPops[11] &&
			game_time::getDay() == 0 &&
			game_time::getMonth() == 0 &&
			game_time::getYear() == 0
			)
		{
			SATP();
			historyPops[11] = true;
		}
	}

	void badEvent()
	{
		//Oh no!
		
		content.push_back("Workers are massively ill!");
		content.push_back("Working speed is decreased");
		content.push_back("for a while!				 ");
	}

	void goodEvent()
	{
		//Good news!
		
		content.push_back("Workers are feeling			   ");
		content.push_back("exceptionally good!			   ");
		content.push_back("Their working speed is increased");
		content.push_back("for a while!					   ");
	}
}