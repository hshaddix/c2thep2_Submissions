## Day 2 Slide of the Homework 

This part was done a little strangely, since the files are all located in athena and whether things output was hard to show or output explicitly. So what I've done is included the main files changed during this exercise: 

Note that this directory has two directories of note: 

**inClassExercises**
**HomeworkFiles**

The files in **inClassExercises** were files changed in the course of the day 2 of Jack's walkthrough. 

The files in **HomeworkFiles** were the files I'd attempted to change within athena for this exercise. 

The goal for this was to add some decorations to the ExampleElectron files and then run them. In the files below, I have added lines including my decorations in both the ::initialize() and ::execute() functions and declared them in the header (.h) files: 

**ReadExampleElectron.cxx**
**ReadExampleElectron.h**
**WriteExampleElectron.cxx**
**WriteExampleElectron.h**

The two python files that manage/run the .cxx files adjusted above are: 

**AthenaPoolExample_ReadxAODElectrons.py** 
**AthenaPoolExample_WritexAODElectrons.py** 

When I run these files, whether from adding the decoration lines or not, I get errors and am unable to run the ApplicationManager. The output of running both of the python files can be found in the directory **HomeworkFiles/** in the files:
 
**ReadxAODElectrons.txt**
**WritexAODElectrons.txt**

Apologies not being able to get these deco's passed through and running correctly!! I've had to do clean athena versions a few times in an attempt to run things through and no success. (gotta love athena)
