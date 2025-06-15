	
## **LO1:** 
Student plans and executes a project in their track at level 2 of the HBO-i framework regarding autonomy and complexity, in an agile way

##### **In my own words:** 
I want to build a duck shaped robot while focusing on two main activities: Design in Hardware Interfacing and Realisation in Software. Level 2 of the HBO cube would include integrating a hardware interface and including security and system performance to also ensure real time aspects.

##### **Ambition**
After this project I want to be able to implement object detection into an embedded machine using a distance sensor. I also want to develop a motion algorithm that turns the robot when detecting an obstacle ahead.
I want to learn about electrical circuits and how to connect bigger projects with hardware to software and the communication between those components.

##### **Plan:** 

**Week1:**
- Week1 was basically just brainstorming for a project idea.
	- [Image of all initial project ideas](/doc/InitialProjectIdeas.md)
- I also did the first c exercises, which can be found in the [INES-REPO](https://github.com/FontysVenlo/ines-course-exercises-Louis-Legere).


**Week2:** 
- In Week2 we narrowed the ideas down and developed a more precise understanding on what each idea would mean.

- I also continued doing the c exercises ([INES-REPO](https://github.com/FontysVenlo/ines-course-exercises-Louis-Legere)).


**Week3:** 
- In Week3 we decided on the duck robot as the idea that will be build. 
	- [Concept art of the duck](/doc/ConceptArtDuck.md)
	- [Initial Project Idea](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/main/documentation/initial-project-idea.md)
- At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek3.md).


**Week4:** 
- We made the duck idea more clear and started to formulated what the duck has to be able to do. 

- We received the [feedback](/doc/feedbackWeek4.md) to limit the duck to only one environment and therefore decided to focus on water. 

- I also started to work on the component list.

- At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek4.md).


**Week5:**
- In week 5 I got this [feedback](/doc/feedbackWeek5.md) and mainly researched into components to use for our project. I focused on the Speaker, compass, step down converter, distance sensor and micro controller. Although some had to be changed later. Also I had to find a way to store sound files.
	- [ComponentList](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/main/documentation/GreatComponentList.md)
  Here I focused on the specifications of the components. Trying to find out whether they work with whatever micro controller we would choose. I had to consider the voltage needed, current consumption and with what protocols different components communicate. This was the first time that I really read through datasheets. However mistakes where made and will be reflected on and also explained in later weeks where I had to change some of the components.

- I also finished the "Producer and Consumer problem" for the first time as an OSCO exercise, which helped me understand threads and semaphores better. ([commit on Github](https://github.com/FontysVenlo/ines-course-exercises-Louis-Legere/commit/9312807fab0f5aed649b3941c2d7a832fac8e57a))

- At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek5.md).


**Week6:** 
- I prepared, worked on and held the pitch 
	- [Pitch Speech](/doc/PitchSpeech.md)
- In this weeks [feedback](/doc/feedbackWeek6.md) you can see what I have learned from that and also from other feedback.

- At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek6.md).


**Week7:** 
- In week 7 I have changed quite some components from the component list since they turned out to be suboptimal. Therefore the speaker and SD card reader changed to a [sound-module](https://www.tinytronics.nl/en/audio/audio-sources/open-smart-mp3-module-with-speaker) that combines both and will be easier to operate. The reason for that was that the previously chosen SD-card module was badly documented and the speaker needed an additional speaker-driver to work. To make sure that all the parts actually work together I decided for a sound module that already combines all of them and has practical commands that enable us to play specific mp3 files stored on a SD-card.

- We finished the project charter this week as well. I specifically focused here on the Approach chapter, but also worked on the introduction and business case. ([project-charter](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/main/documentation/Project4-charter-02.md))

- At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek7.md).


**prjWeek1:** 
- In the first project week I have set up a basic structure for the application, creating different threads for different components that have to work separately of each other. One of them is the sound Module. It needs to be on its own thread, so it does not stop making sound once some other component is getting operated. 
	- [Completion of the sound behaviour](/doc/SoundModule.md)
- I also began testing out the distance sensor. To do so I just put it on a breadboard separately.
	- [Initial test of the distance sensor](/doc/InitialDistanceSensor.md)
  


**prjWeek2:** 
- I embedded the code from when I tried out the distance sensor individually and the sound-Module individually into the whole project's code.

- Since some of the components did not arrive in time we could unfortunately not work effectively in the second project week. However the decoy duck did arrive and I started preparing the frame by cutting an opening into the duck. 

- We also tested out how high the waterline would be for the final duck robot in water, by putting the approximate weight into the duck and letting it float.
	-  [Proof for duck cutting and weight measuring](/doc/duckFramePrepPrjWeek2.md)


**Week8:**
- I unfortunately do not have a feedpuls entry here for INES, but I learned about AD-conversion in this week, which also turned out to be very helpful for the project later.

- We tried out the motor for the first time here and it did work. However we could not try it out too much since we did not have the batteries yet and the LiLiGo does not put out enough current to test it safely. Luckily we soon got a 6V adaptor from Mr. van Gennip, which enabled us to test the motors connected in a parallel circuit.

**Week9:** 
- I tried to create a sys-ML requirement diagram, which can be seen [here.](requirementDiagram.md)

- Week9 consisted a lot of trying to find out how to connect the motors to the duck and moreover how to connect the waterwheels to the motors. Read everything about this struggle [here.](HowToConnectTheWaterWheelToTheMotor.md)

**Week10:**
-  After receiving the [feedback](/doc/feedbackWeek10.md) at the Tuesday coaching meeting we decided to 3d-print the connector with the waterwheel all together in order to connect it to the motor. I came up with a [design](/doc/designWaterwheel.md) and Ben model it.

- I slightly changed the code structure separating the file that controls the motor from the movement logic itself. ([git commit](https://github.com/FontysVenlo/prj4e-repository-group_e02/commit/5d4643c9702fbaec31974e3d3dce5e7f5d98cbd3))


**Week11:**
- We tried to assemble the whole electrical system as much as possible without the frame to see if all the components would work together and they did.

- I also drilled holes into the side of the duck, to attach the motors to it.


**prjWeek3/Week12:** 
- This is this weeks [feedback](/doc/feedbackWeek12.md).

- I changed several copper wires to flexible wires, so that they are less likely to break and attached them to housings so they fit to the pins of our components. I tinned the other side of the cable to make them fit onto a breadboard. ([proof](creatingHousingsForFlexibleCables.md))

- I connected the distance sensor and motors in code creating the movement logic. It uses a state variable that is either 1, 2 or 3, which determines if the duck drives, turns or stops. The state gets changed depending on which distances the distance sensor detects. The stop makes sure that the motors do not go directly from spinning on full speed in one direction to spinning on full speed in the other direction immediately. ([git commit](https://github.com/FontysVenlo/prj4e-repository-group_e02/commit/df9a710b98c745616f41f2f1615af70fef52131f))


**prjWeek4/Week13:** 
- After 3D-printing the connector to our motor it turned out that the printer is not accurate enough to print the teeth that connect to the teeth of the motor. To solve that I pressed the part into a damaged motor with a press, which formed the desired structure on the connector. ([proof](usingThePress.md))

- Since the bolts that hold the connector onto the motor were not durable enough, we decided to replace them with metal bolts from the workshop. Therefore I cut them in size and filed the edges to make them go in easier. ([proof](customBolts.md))

- To ensure the ducks water-tightness I improved the critical sections of the frame. Therefore I covered the bolts that lock the motors into place with silicone. ([proof](silicone.md))

- In order to make our distance sensor fit into a 3D-printed casing me and Ben tried to de-solder the pins of the distance sensor and re-solder them on the sensor the other way around. Eric Peters helped us de-solder them and we soldered them back on ourselves. However Eric Peters did warn us that this is risky and might destroy the component. We decided to try it anyway and it indeed did destroy the component. However we at least gained some solder experience and the knowledge to be careful with de-soldering pins from components. ([proof](distanceSensorSoldering.md))

- To be able to turn off both power circuits of the duck robot off at the same time we connected our circuits to a double pole switch. To do that I soldered the wires onto it ([proof](solderingTheSwitch.md))

- I drilled holes in the eyes of the duck to replace them with two red LED's to connect them to a PWM signal and filled down connectors of our breadboard to make it fit into our boxes. ([proof](duckEyes.md))
  However I first tried the eyes out on a separate breadboard and they worked, but they failed to work properly together with the whole code for the entire duck robot. It turned out the the problem was that we accidentally used the same PWM signal channels for the motors and the eye-LED's. I learned out of to always look out for the PWM channels when working with multiple components that use PWM.

- I tested the step-down-converter for the first time, which worked perfectly and made it way clearer how to implement it into the whole application. We now needed that one since we decided for a second power circuit just for all the components apart from the motors. Therefore we decided to power the LiLiGo trough pen-lite batteries, which needed to go down in voltage.


**prjWeek5/Week14:**
- I drilled a hole into the duck to attach the switch and filed down material from the distance sensor case since the old distance sensor broke and we did not want to break the new one as well. ([proof](holeForSwitch.md))

- Since we still had the problem that wires broke or got pulled out while assembling the duck we decided to solder all the previously tinned ends of the flexible wires to pins that fit into the breadboard and turned out more durable. To make sure no short circuits appear we also decided to use heat-shrinks. ([proof](solderingPins.md))

- To make sure that the batteries do not get dangerously hot in case that a short circuit does appear I built in fuses into the duck. ([proof](fuses.md))

- I changed the tick rate on which the move(), turn() and stop() method get called to a low number to make the duck more responsive. However I did not make them operate on 1 tick since I read online that this uses a lot of CPU power. ([git commit](https://github.com/FontysVenlo/prj4e-repository-group_e02/commit/ec33450407958034d8a1a8c0a004d7fb9c164467))

- I changed the motor functionality so that the motors always start slowly and go faster until reaching the max speed

- I seeded the random number generator's for choosing when to play duck noise and what duck noise to play to make them truly random ([git commit](https://github.com/FontysVenlo/prj4e-repository-group_e02/commit/d304e004b9a00a36bbc9923c3446113b8a831550))

- When we tested the duck we finally had the opportunity to really play around a bit with the code. It turned out that the duck did not turn around far enough when driving towards an obstacle. However we immediately fixed that by adjusting the speed while turning. At first no water entered the duck, but it turned out that with too high speed some water does enter the duck. However nothing got damaged and we adjusted accordingly. ([proof](duckSwimming.md))


## **LO2:** 
Student demonstrates professional skills at level 2 in the focus areas: future-oriented
organisation, investigative ability, personal leadership, and targeted
interaction.

##### **In my own words:**  
I want to consider future oriented organisation, develop my investigative ability by analysing important issues that hinder the project and finding steps to resolve them. I want to extend my personal leadership with constantly extending my own knowledge independently, being always on time and reflecting on my performance. To apply targeted interaction I want to not only hold a proper communication to my project group, but also to teachers and other individuals that I can learn from throughout the project and collaborate with them to achieve a better project outcome.

##### **Ambition**

**personal leadership (PL):**
1. I want to always hand in assignments on time.
2. I want to broaden my knowledge independently in a self driven way.
3. I want to reflect on my performance and actions in the project and improve based on that.
4. I want to be present on time every day.
5. I want to take initiative and actively integrate ideas into the whole project.

**investigative ability (IA):**
1. I want to analyse problems that hinder the groups and projects progress and find ways to -resolve them.
2. I want to broaden my investigative ability by not only gathering information from university material and articles, but also by actively asking experts for their opinion and consuming informational videos.

**future oriented research (FOR):**
1. I want to use a Kanban board during the project to make the project and tasks plannable.
2. I want to test out final parts of the project as prototypes earlier to later have to knowledge to correct all the mistakes I made developing the prototypes.
3. I want to do research before big decisions to mitigate risks.

**Targeted interaction (TI):**
1. I want to learn from experts such as teachers or students in different other study fields.
2. I want to self driven interact with helpful people outside of my project group to train my professional behaviour skills, getting more used to work related interaction and counteract my introverted personality. Since this introverted personality keeps me back from learning from other people.

##### **Plan:**
To apply future oriented organisation during our project we held daily stand-up meetings. The role of the chairman switched every day in order to develop the personal leadership of every group member. We also used the [Kanban board](https://github.com/orgs/FontysVenlo/projects/618) and moved the tickets that changed status after every stand-up meeting.

Week1/2:
_In week 1 and 2 we mainly brainstormed about which different projects would be interesting, without having the pressure to immediately choose one. Therefore I did not do a lot of LO2 related things here. The only thing might be the coaching meetings, which could count as targeted interaction._

**Week3:**
- We had a lot of ideas initially on what could be our project. Therefore we had quite some disagreements within our group. I wanted to build a spying device, where as Ben wanted to build a smart door system and Alice was more or less fine with both projects. We solved this issue by choosing the duck robot as a project, which was of course not our favourite option, but was interesting for all of us regardless.

**Week4/5:**

- In week 4 and also week 5 I worked on the component list, putting a lot of research into the different components. For that I had to research through a lot of different data sheets, but most notably through [the datasheets of our final components](https://github.com/FontysVenlo/prj4e-repository-group_e02/tree/dev/documentation/datasheets).

**Week6:** 
- I worked on and held the pitch trying to improve my communication and presentation skills. However I got feedback to speak more openly and therefore more directly to the audience. This makes a lot of sense since I read from my phone  and I learned out of that to prepare and practise my pitches before holding them.
  [Pitch Speech](/doc/PitchSpeech.md)

- Me and my team asked Mr. Peters if he has a 12V battery for us and this surprisingly turned out with us deciding against a 12V motor. So it turned out to be more an investigation than just picking up a battery, because of Mr. Peters suggestions. More about that can be seen in [week 6's feedback](/doc/feedbackWeek6.md).

**Week7:**

**prjWeek1:** 
- In the first project week Ben designed the waterwheel model to 3d-print it. So I did not do this one personally, but we went together to the green-tech lab to targetly interacted with them in order to find out how to print it in the best way and what to look out for. I think this also counts as future oriented research since this was only the first prototype for printing a wheel and let to us changing the final wheel design. If you want to find out what I learned from that click [here](/doc/WhatDidILearnFromAskingTheGreenTechLabGuys.md).
- We propably went 7 or more times after that to the green-tech lab for printing something. I will not put it in every separate week, but it is targeted interaction and the fact that it happened is important for my reflection. 

- I had a meeting with mr. van Gennip to review my PDP ([proof](/doc/MeetingForPDP.md)). 

- I created two prototypes. One of the distance-sensor and one of the sound-module, to find out more about how they will work later in the proper system. 
  ([Information on the sound-Module prototype](/doc/SoundModule.md)) 
  ([Information on the distance-sensor prototype](/doc/InitialDistanceSensor.md))


**prjWeek2:**
_Unfortunately since a lot of components were missing in the second project week, we did not meet at some of the days and I did not have to use many LO2 related skills._

**Week8:** 
- We held a mid term reflection meeting to reflect on the state of the project and the efficiency of our work. ([results](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/dev/documentation/retrospective-results.md))

**Week9:**
- Since we had quite big issues connecting the Waterwheels to the motors, we came up with very different approaches on how to connect the waterwheels and therefore disagreements. Ben had a lot of ideas that I did not think were realistic, what he spend a lot of time on trying to explain. I however also did not have the perfect approach, but I felt like we wasted a lot of time with approaches that will not work anyways. What I want to take out of that conflict for future projects is that I should regardless listen to other's ideas, even tough I think that they will not work, because it did indeed sometimes happen throughout this project that Ben did have an idea that I at first thought to be unrealistic, but turned out to work well. However pointing out the unrealistic parts are still important, to avoid investing to much time into an approach that would not work anyways. Therefore bringing in own ideas that I am certain to function and extending that with aspects from Ben did work pretty well at the end. This way we managed to design a pretty good waterwheel connection system to the motor regardless of previous problems. My initial design can be seen [here.](/doc/designWaterwheel.md)

- I also created a little prototype for attachment with nails. I learned from that, that it will not work. Why I tried it like that and more about it can be found [here.](HowToConnectTheWaterWheelToTheMotor.md)

**Week10:**
- In our project group we had the problem that when we worked on the project in an open-area a lot of people that were interested in the project came along and asked about it, which resulted in us talking more than working. On one day in this week, where this was especially bad we could unfortunately not book a cockpit, since all were already booked. To resolve this I communicated it with my team and started booking cockpits a day earlier to make sure that there are still bookable cockpits or rooms left. Using cockpits reduced the disturbance immensely and improved the teams efficiency. ([proof](/doc/disturbance.md))

**Week11:** 
- From week11 on I took the duck with me home everyday and brought her back every prj session, since the duck did not fit into Alice's bag anymore and she is coming to school by bike. 
  I think this somehow proofs my punctuality and organisation, since now the whole project group depends on me being punctual or else they will not be able to work, since they do not have the duck. In fact I was half an hour early every day, because of my anxiety of being to late, but this is hard to prove. I also attended every PRJ meeting, OSCO lecture and INES lecture in the semester. I am going to prove this with a cute picture of the duck on my passenger seat. View it by clicking [here](/doc/passengerSeatDuck.md). 
  I did also ask Alice for feedback about my punctuality and she said: "Louis was always punctual"

**prjWeek3/week12:**
- We had a meeting with Mr. Eric Peters to seek information about how we should connect the distance sensor to cables.
  To see what I have learned from that click [here](/doc/whatHaveIlearnedPetersPrjWeek3.md).


**prjWeek4/Week13:** 
- Me and my project group went to Mr. Eric Peters to get a pen-lite battery pack. From this I learned about the usual pen-lite battery distributions in one pack. ([proof](/doc/penlite.md)). 

- I asked IDE students for advice on how to attach the distance sensor to the duck ([proof](/doc/IDEStudentsHelp.md)).

- I informed myself about real time reacting code reading this article: https://www.futurelearn.com/info/courses/embedded-systems/0/steps/64783
  and this one:
  https://www.geeksforgeeks.org/embedded-real-time-system/

- Additionally I researched more into the vTaskDelay() function reading this article:
  https://www.freertos.org/Documentation/02-Kernel/04-API-references/02-Task-control/01-vTaskDelay

- To gain more information and tips about de-soldering pins from a component, Ben and me went to Mr. Peters to get an expertise. You can see how that went and what I have learned from that in week13 LO1.

- To better understand the voltage divider I watched this youtube video and used the formula for our case: https://www.youtube.com/watch?v=i7p95tJOzTg

- I informed myself about which saws are for metal asking an Industrial Design Student from the workshop. [design](/doc/designWaterwheel.md)

- We had the problem that the 3D-printer did not print the teeth of the connector to our motor as precisely as needed. To solve this problem we asked a teacher from the workshop for ideas to solve this problem, which is how I learned to use the press machine in the workshop. ([proof](pressMachineTraining.md))

- We had a session with Mr. van Gennip where he explained the voltage divider further to us, which at first was not so easy for us to understand for our specific use case of having 2 batteries. ([proof](/doc/voltageDividerGennip.md))

- I created a small step down converter prototype build and measured with the multi-meter if it works, before building it into the final system. This made me more confident using it without damaging something.

- We gained additional knowledge about step-down converters from Mr. Eric Peters. Now I know that step down converters can be digital and analogue and that the analogue ones need a minimum input voltage depending on the output voltage.

- Since we originally thought about using Styrofoam to additionally secure our components from water we asked an IDE student to show us how to work with it and he did. ([proof and what I learned](/doc/IDEStudentHelpingUsStyro.md))


**prjWeek5/Week14:** 
- To find out what to do with a cable that broke from the battery me and my team went to Mr. Eric Peters to find a solution for that issue. Mr. Peters told us that it is still possible to solder the cables back on. We should just tin the cable ends before and go down in temperature to not damage the batteries. This did indeed work and we double checked if the batteries still work with a multi-meter. 

- We had another session with Mr. Tange, where he explained the voltage divider again to us, since we still had questions about the resistors used here. ([proof](/doc/voltageDividerTange.md))

- Mr. Eric Peters also educated us about different fuses and explained how to measure what fuse we need. To see what I have learned from Mr. Peters click [here.](fuses.md)
  I also did some additional research about fuses reading this article:
  https://www.britannica.com/technology/fuse-electronic-device

- Here I learned where the fuse should be located:
  https://www.reddit.com/r/AskElectronics/comments/yqleyt/does_physical_location_of_the_fuse_matters/

## **Reflection:** 

In retrospective I do believe that after doing the project and taking the Embedded Systems direction as a whole, I am now able to build a basic robot and have learned quite a bit about low level programming and electricity. I am proud of the final outcome of our project and believe that I did a good job and that doing this project was beneficial for me skill wise.
I have learned quite a lot about different components and especially working with electrical circuits, which I did not learn before in my informatics studies.
And most importantly I had fun.

**What would I do differently next time?**
However in hindsight some things could have been improved. We failed to properly secure the connection of the motor to the waterwheel from water entry. For example we failed to put some water blocking object like an O-ring in between the motor and the outer wall of the duck. And once the Motor was installed and the wall of the duck and the bolts have been glued over with silicon it was impossible to resolve this mistake. Ideally the motors should have been stored further inside the duck anyways, but this was not possible with our limited space. In future projects that involve water proofing I would try to use certain grease that does not mix with water to further protect critical sections. 
Additionally it would have been a great idea to install some kind of water sensor inside of the duck, to be able to notice from the outside if water got into it. 
During building the duck one of our motors and one distance sensor broke. From that I have learned the hard way that de-soldering pins can be dangerous to certain component's and that one should always double check whether power and ground are connected properly to a component.
Another thing that I would do differently in future embedded projects would be to use flexible cables as soon as possible instead of normal copper cables for breadboards, since those broke a lot during the project, which was also caused by us de-assembling the components to often and miscalculating the size of the hole that we have put into the duck to fit all the necessary components in.
I also failed to properly keep track of my progress. I did not always enter all my progress into my PDP in an acceptable time frame. This way it was harder for me to reconstruct it at the end, however I still think that I did quite good, based on what I did note down, put into feedpuls and could see in images. However in the next projects, I want to avoid this struggle by keeping track of my progress immediately.
From a self organisation standpoint I want to try to stick to fixed-time breaks in future projects. I tend to not take any breaks while distributing my own work-time in project weeks. I think I could have better efficiency during work time, when I separate work and break more clearly, respecting both more. 

**What did work well?**
I was able to full fill my role in software realisation very well. I managed to work with all the components that I was supposed to use and created a working movement algorithm.
From a soft skill viewpoint I really wanted to improve my social skills. I have always been an introverted person and this project really put me out of my comfort zone, since I had to talk to a lot of different people outside of my project group, which was quite exhausting for me. This is something I would like to improve further in future projects, even though I think that it already worked quite well.
I also believe my drive to put effort into the project and contribute was very good.


//some final words