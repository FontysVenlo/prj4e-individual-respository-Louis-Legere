![SoundModule](images/SoundModule.jpg "SoundModule")
Here I tried out the sound module. It was at first confusing, since it is using UART communication and not I2C, which I knew from the INES course. But after studying the documentation and researching about UART I now know how to work with that and what kind of data-frame it uses (8N1). Here I originally had the issue that I was not able to upload my code on the LiLiGo, when the Mp3 module was attached and it turned out that the upload uses the RX and TX ports which are the default UART ports and therefore cause interference. I solved this by setting GPIO ports for the UART communication to the sound module.
The sound module is now working already as it is supposed to work in the final product. It is putting out a random "quack"-sound out of 10 "quack"-sounds that are on the SD-card every 20-39 seconds.

[dataSheet](https://github.com/FontysVenlo/prj4e-individual-respository-Louis-Legere/blob/main/doc/dataSheets/Serial%20Control%20USB%20MP3%20v1.1%20Manual.pdf)

[Initial code that I tried the module out with on a seperate breadbord](https://github.com/FontysVenlo/prj4e-individual-respository-Louis-Legere/blob/main/src/initialSoundModuleCode.cpp)


[go back](/doc/PersonalDevelopmentPlan.md)