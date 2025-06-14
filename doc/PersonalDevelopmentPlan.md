
## **LO1:** 
Student plans and executes a project in their track at level 2 of the HBO-i framework regarding autonomy and complexity, in an agile way

##### **In my own words:** 
I want to build a duck shaped robot while focusing on two main activities: Design in Hardware Interfacing and Realisation in Software. Level 2 of the HBO cube would include integrating a hardware interface and including security and system performance to also ensure real time aspects.

##### **Ambition**
After this project I want to be able to implement object detection into a embedded machine using a distance sensor. I also want to develop a motion algorithm that keeps the robot swim in a straight line and to turn when real time detecting an object ahead. 
I also want to be able to model and plan embedded systems after this project
// learning goal -> ambition -> plan!!
// miss my ambition what I want to learn
// there is a uml sys ml for embedded systems
//other development methods
// maybe I wanna focus on the testing of embedded systems
// maybe control algortihms
// maybe ill dive into vision
//object detection
// real time distance detection
//add the ines stuff here

**Plan:** 
// I can link youtube videos I used for help for certain prj parts
// also OSCO and INES

// project charter !!!
//OSCO knowledge!!!

**Week1:**
Week1 was basically just brainstorming for a project idea.
- [Image of all initial project ideas](/doc/InitialProjectIdeas.md)
I also did the first c exercises, which can be found in the [INES-REPO](https://github.com/FontysVenlo/ines-course-exercises-Louis-Legere).

**Week2:** 
In Week2 we narrowed the ideas down and developed a more precise understanding on what each idea would mean.

I also continued doing the c exercises ([INES-REPO](https://github.com/FontysVenlo/ines-course-exercises-Louis-Legere)).

**Week3:** 
In Week3 we decided on the duck robot as the idea that will be build. 
- [Concept art of the duck](/doc/ConceptArtDuck.md)
- [Initial Project Idea](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/main/documentation/initial-project-idea.md)
At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek3.md).

**Week4:** 
We made the duck idea more clear and started to formulated what the duck has to be able to do. 
We received the [feedback](/doc/feedbackWeek4.md) to limit the duck to only one environment and therefore decided to focus on water. 

I also started to work on the component list.

At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek4.md).

**Week5:**
In week 5 I got this [feedback](/doc/feedbackWeek5.md) and mainly researched into components to use for our project. I focused on the Speaker, compass, step down converter, distance sensor and micro controller. Although tome had to be changed later. Also I had to find a way to store sound files.
- [ComponentList](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/main/documentation/GreatComponentList.md)
Here I focused on the specifications of the components. Trying to find out whether they work with whatever micro controller we would choose. I had to consider the voltage needed, current consumption and with what protocols different components communicate. This was the first time that I really read through datasheets. However mistakes where made and will be reflected on and also explained in later weeks where I had to change some of the components.

At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek5.md).

**Week6:** 
I prepared, worked on and held the pitch 
 - [Pitch Speech](/doc/PitchSpeech.md)
In this weeks [feedback](/doc/feedbackWeek6.md) you can see what I have learned from that and also from other feedback.

At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek6.md).

**Week7:** 
In week 7 I have changed quite some components from the component list since they turned out to be suboptimal. Therefore the speaker and SD card reader changed to a [sound-module](https://www.tinytronics.nl/en/audio/audio-sources/open-smart-mp3-module-with-speaker) that combines both and will be easier to operate. The reason for that was that the previously chosen SD-card module was badly documented and the speaker needed an additional speaker-driver to work. To make sure that all the parts actually work together I decided for the previously mentioned sound module that already combines all of them and has practical commands that enable us to play specific mp3 files stored on a SD-card.

At the same time I learned project relevant knowledge in the INES course. What I learned can be seen [here](/doc/inesFeedbackWeek7.md).


**prjWeek1:** 
In the first project week I have set up a basic structure for the application, creating different threads for different components that have to work separately of each other. One of them is the sound Module. It needs to be on its own thread, so it does not stop making sound once some other component is getting operated. 
- [Completion of the sound behaviour](/doc/SoundModule.md)
I also began testing out the distance sensor. To do so I just put it on a breadboard separately.
- [Initial test of the distance sensor](/doc/InitialDistanceSensor.md)
After testing out the code individually I combined it in the main repository.


**prjWeek2:** 
Since most of the components did not arrive in time we could unfortunately not work effectively in the second project week. However the decoy duck did arrive and I started preparing the frame by cutting an opening into the duck. 
We also tested out how high the waterline would be for the final duck robot in water, by putting the approximate weight into the duck and letting it float.
- [Proof for duck cutting and weight measuring](/doc/duckFramePrepPrjWeek2.md)


**Week8:**

I unfortunately do not have a feedpuls entry here for INES, but I learned about AD-conversion in this week, which also turned out to be very helpful for the project later.

**Week9:** 

**Week10:**
After the motors arrived and we tried them out it was quite a struggle to find a way to connect them to the wheel of the duck, since the holes in the connector that is supposed to go onto the motors are to small for even the smallest screws that we were able to find in the Fontys workshop.
After receiving the [feedback](/doc/feedbackWeek10.md) at the Tuesday coaching meeting we decided to 3d-print the connector with the wheel all together.

**Week11:**

**prjWeek3/Week12:** 
I changed several copper wires to flexible wires, so that they are less likely to break and attached them to housings so they fit to the pins of our components. I tinned the other side of the cable to make them fit onto a breadboard. //proof to be added

**prjWeek4/Week13:** 
I found out that with several components that use pwm I should use different pwm channels (pwm eyes and Motors)

**prjWeek5/Week14:**
fuses. Soldering everything with pins and float test. Soldering cables to battery


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

// not precise enough and what exactly I want to improve
// I want to be more reliable or on time
// taking initiative
// I want to broaden my investigate ability with papers books colleagues 
// personal leadership -> become scrum master or product owner
// 360 degree feedback
// did I make a plan and were I able to follow the plan 
// proof by feedback
// make graphs of my github assignment handins

// here its more convince than proof
**Plan:**
To apply future oriented organisation during our project we held daily stand-up meetings. The role of the chairman switched every day in order to develop the personal leadership of every group member. We also used the Kanban board and moved the tickets that changed status after every stand-up meeting.

**Week1:**

**Week2:**

**Week3:**

**Week4:**

**Week5:**

**Week6:** 
I worked on and held the pitch trying to improve my communication and presentation skills. However I got feedback to speak more openly and therefore more directly to the audience. This makes a lot of sense since I read from my phone  and I learned out of that to prepare and practise my pitches before holding them.
[Pitch Speech](/doc/PitchSpeech.md)

**Week7:**

**prjWeek1:** 
In the first project week Ben designed the waterwheel model to 3d-print it. So I did not do this one personally, but we went together to the green-tech lab to targetly interacted with them in order to find out how to print it in the best way and what to look out for. I think this also counts as future oriented research since this was only the first prototype for printing a wheel and let to us changing the final wheel design. If you want to find out what I learned from that click [here](/doc/WhatDidILearnFromAskingTheGreenTechLabGuys.md).

I also had a meeting with mr. van Gennip to review my PDP ([proof](/doc/MeetingForPDP.md)). 

**prjWeek2:**

**Week8:** 
We held a mid term reflection meeting to reflect on the state of the project and the efficiency of our work. ([results](https://github.com/FontysVenlo/prj4e-repository-group_e02/blob/dev/documentation/retrospective-results.md))

**Week9:**

**Week10:**

**Week11:**

**prjWeek3/week12:**
We had a meeting with Mr. Eric Peters to seek information about how we should connect the distance sensor to cables.

To see what I have learned from that click [here](/doc/whatHaveIlearnedPetersPrjWeek3.md)

**prjWeek4/Week13:** 
I informed myself about real time reacting code reading this article: https://www.futurelearn.com/info/courses/embedded-systems/0/steps/64783
and this one:
https://www.geeksforgeeks.org/embedded-real-time-system/

**prjWeek5/Week14:** 
To find out what to do with a cable that broke from the battery me and my team went to Mr. Eric Peters to find a solution for that issue.

After Mr. Eric Peters told us about fuses I did research about fuses so we could build them in 
https://www.britannica.com/technology/fuse-electronic-device
Here I learned where the fuse should be located:
https://www.reddit.com/r/AskElectronics/comments/yqleyt/does_physical_location_of_the_fuse_matters/

## **Reflection:** 