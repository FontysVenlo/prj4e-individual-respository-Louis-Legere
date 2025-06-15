
## **LO1:** 
Student plans and executes a project in their track at level 2 of the HBO-i framework regarding autonomy and complexity, in an agile way

##### **In my own words:** 
I want to build a duck shaped robot while focusing on two main activities: Design in Hardware Interfacing and Realisation in Software. Level 2 of the HBO cube would include integrating a hardware interface and including security and system performance to also ensure real time aspects.

//maybe take advice

##### **Ambition**
After this project I want to be able to implement object detection into an embedded machine using a distance sensor. I also want to develop a motion algorithm that turns the robot when detecting an obstacle ahead.
I want to learn about electrical circuits and how to connect bigger projects with hardware to software and the communication between those components.

// there is a uml sys ml for embedded systems
// maybe I wanna focus on the testing of embedded systems
// maybe control algortihms
// maybe ill dive into vision
//object detection

**Plan:** 
// I can link youtube videos I used for help for certain prj parts


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

- We tried out the motor for the first time here and it did work. However we could not try it out too much since we did not have the batteries yet and the LiLiGo does not put out enough current to test it safely.

**Week9:** 

- I tried to create a sys-ML requirement diagram, which can be seen [here.](requirementDiagram.md)

**Week10:**
- After the motors arrived and we tried them out it was quite a struggle to find a way to connect them to the wheel of the duck, since the holes in the connector that is supposed to go onto the motors are to small for even the smallest screws that we were able to find in the Fontys workshop.
  So after receiving the [feedback](/doc/feedbackWeek10.md) at the Tuesday coaching meeting we decided to 3d-print the connector with the wheel all together.

- I slightly changed the code structure separating the file that controls the motor from the movement logic itself. ([git commit](https://github.com/FontysVenlo/prj4e-repository-group_e02/commit/5d4643c9702fbaec31974e3d3dce5e7f5d98cbd3))


**Week11:**


**prjWeek3/Week12:** 
- I changed several copper wires to flexible wires, so that they are less likely to break and attached them to housings so they fit to the pins of our components. I tinned the other side of the cable to make them fit onto a breadboard. ([proof](creatingHousingsForFlexibleCables.md))

- I connected the distance sensor and motors in code creating the movement logic. It uses a state variable that is either 1, 2 or 3, which determines if the duck drives, turns or stops. The state gets changed depending on which distances the distance sensor detects. The stop makes sure that the motors do not go directly from spinning on full speed in one direction to spinning on full speed in the other direction immediately. ([git commit](https://github.com/FontysVenlo/prj4e-repository-group_e02/commit/df9a710b98c745616f41f2f1615af70fef52131f))


**prjWeek4/Week13:** 
- After 3D-printing the connector to our motor it turned out that the printer is not accurate enough to print the teeth that connect to the teeth of the motor. To solve that I pressed the part into a damaged motor with a press, which formed the desired structure on the connector. ([proof](usingThePress.md))

- Since the bolts that hold the connector onto the motor were not durable enough, we decided to replace them with metal bolts from the workshop. Therefore I cut them in size and filed the edges to make them go in easier. ([proof](customBolts.md))

- To ensure the ducks water-tightness I improved the critical sections of the frame. Therefore I covered the bolts that lock the motors into place with silicone. ([proof](silicone.md))

- In order to make our distance sensor fit into a 3D-printed casing me and Ben tried to de-solder the pins of the distance sensor and re-solder them on the sensor the other way around. Eric Peters helped us de-solder them and we soldered them back on ourselves. However Eric Peters did warn us that this is risky and might destroy the component. We decided to try it anyway and it indeed did destroy the component. However we at least gained some solder experience and the knowledge to be careful with de-soldering pins from components. ([proof](distanceSensorSoldering.md))

- To be able to turn off both power circuits of the duck robot off at the same time we connected our circuits to a double pole switch. To do that I soldered the wires onto it ([proof](solderingTheSwitch.md))

- I drilled holes in the eyes of the duck to replace them with two red LED's to connect them to a PWM signal and filled down connectors of our breadbord to make it fit into our boxes. ([proof](duckEyes.md))
  However I first tried the eyes out on a separate breadboard and they worked, but they failed to work properly together with the whole code for the entire duck robot. It turned out the the problem was that we accidentally used the same PWM signal channels for the motors and the eye-LED's. I learned out of to always look out for the PWM channels when working with multiple components that use PWM.


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
2. I want to broaden my investigative ability by not only gathering information from university material and articles, but also by actively asking experts for their opinion.

**future oriented research (FOR):**
1. I want to use a Kanban board during the project to make the project and tasks plannable.
2. I want to test out final parts of the project as prototypes earlier to later have to knowledge to correct all the mistakes I made developing the prototypes.
3. I want to do research before big decisions to mitigate risks.

**Targeted interaction (TI):**
1. I want to learn from experts such as teachers or students in different other study fields.
2. I want to self driven interact with helpful people outside of my project group to train my professional behaviour skills, getting more used to work related interaction and counteract my introverted personality. Since this introverted personality keeps me back from learning from other people.

// taking initiative
// I want to broaden my investigate ability with papers books colleagues 
// personal leadership -> become scrum master or product owner
// 360 degree feedback
// did I make a plan and were I able to follow the plan 
// proof by feedback
// make graphs of my github assignment handins

**Plan:**
To apply future oriented organisation during our project we held daily stand-up meetings. The role of the chairman switched every day in order to develop the personal leadership of every group member. We also used the [Kanban board](https://github.com/orgs/FontysVenlo/projects/618) and moved the tickets that changed status after every stand-up meeting.



**Week1:**

**Week2:**

**Week3:**

**Week4:**

**Week5:**

**Week6:** 
- I worked on and held the pitch trying to improve my communication and presentation skills. However I got feedback to speak more openly and therefore more directly to the audience. This makes a lot of sense since I read from my phone  and I learned out of that to prepare and practise my pitches before holding them.
  [Pitch Speech](/doc/PitchSpeech.md)

**Week7:**

**prjWeek1:** 
- In the first project week Ben designed the waterwheel model to 3d-print it. So I did not do this one personally, but we went together to the green-tech lab to targetly interacted with them in order to find out how to print it in the best way and what to look out for. I think this also counts as future oriented research since this was only the first prototype for printing a wheel and let to us changing the final wheel design. If you want to find out what I learned from that click [here](/doc/WhatDidILearnFromAskingTheGreenTechLabGuys.md).

- I had a meeting with mr. van Gennip to review my PDP ([proof](/doc/MeetingForPDP.md)). 

**prjWeek2:**


**Week8:** 
- We held a mid term reflection meeting to reflect on the state of the project and the efficiency of our work. ([results](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/dev/documentation/retrospective-results.md))

**Week9:**

**Week10:**

**Week11:**

**prjWeek3/week12:**
- We had a meeting with Mr. Eric Peters to seek information about how we should connect the distance sensor to cables.
  To see what I have learned from that click [here](/doc/whatHaveIlearnedPetersPrjWeek3.md).


**prjWeek4/Week13:** 
- I informed myself about real time reacting code reading this article: https://www.futurelearn.com/info/courses/embedded-systems/0/steps/64783
  and this one:
  https://www.geeksforgeeks.org/embedded-real-time-system/

- Additionally I researched more into the vTaskDelay() function reading this article:
  https://www.freertos.org/Documentation/02-Kernel/04-API-references/02-Task-control/01-vTaskDelay

- To better understand the voltage divider I watched this youtube video and used the formula for our case: https://www.youtube.com/watch?v=i7p95tJOzTg

**prjWeek5/Week14:** 
- To find out what to do with a cable that broke from the battery me and my team went to Mr. Eric Peters to find a solution for that issue. Mr. Peters told us that it is still possible to solder the cables back on. We should just tin the cable ends before and go down in temperature to not damage the batteries.

- After Mr. Eric Peters told us about fuses I did research about fuses so we could build them in 
  https://www.britannica.com/technology/fuse-electronic-device

- Here I learned where the fuse should be located:
  https://www.reddit.com/r/AskElectronics/comments/yqleyt/does_physical_location_of_the_fuse_matters/

## **Reflection:** 