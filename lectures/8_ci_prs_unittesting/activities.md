Activities to be completed before lecture 9 (Tues/Weds Sept 24/25)
=================
Since this is a self-directed lecture/in-class activities, we will be giving you +2 Extra credit points in this category for completing it before lecture on Tues/Weds. Happy coding!

Subject 1: Pull Requests
-----------------
A pull request is the standard way to submit code for review following when using git. Despite it's name, a pull request (PR) is __not__ equivalent to `git pull`. Rather than pulling down code from remote, a PR is like asking remote if it will please do a git pull from your code base. This is the standard tack to take when you have a feature that you've developed in your own (non-master) branch and you are ready to merge that code into master.

[See this article about how to create a PR on github](https://help.github.com/en/articles/creating-a-pull-request).

Subject 2: Continuous Integration
------------------
Continuous Integration (CI) tools are tools that help you monitor your code base. Two of the main uses that you will see CI tools perform are:
1. ensuring that code compiles
2. ensuring that unit tests pass

I've hooked up [our collaboration repository](https://github.com/muzny/csci3010-fall2019-collab) to Travis CI. Circle CI is another popular continuous integration tool. Notice that there is now a build passing icon in the readme of our collaboration repository. If you click on this, you'll get taken to the Travis page that it's linked to. Under the "current" tab, you can see a "build jobs" tab. One of these build jobs is associated with the `001` folder in our repo, the other is associated with the `002` folder.

If you take a look at the [`.travis.yml`](https://github.com/muzny/csci3010-fall2019-collab/blob/master/.travis.yml) file in the home directory of our collab repo, this is the file that tells Travis what to do. The commands in the `script` section will be run for each of the variables in the `env` section.

Each time that changes are pushed to remote, travis will compile our code, then run the tests that we have! (see section below)

Subject 3: Unit Tests
------------
Unit testing ([wikipedia](https://en.wikipedia.org/wiki/Unit_testing)) is one of the most convenient ways for us to verify that our code does what it's supposed to and that we haven't broken things when we've been updating our code. Most programming languages have various packages and libraries to help you out with unit testing. We'll be using [Catch2](https://github.com/catchorg/Catch2) to write unit tests. 

I've linked some of the most useful Catch2 documents [in the resources file](../../resources.md#unit-testing). 

The basic idea with Catch2 is that each `TEST_CASE` should be testing one functionality/unit and each `SECTION` should be testing one case of that functionalityi/unit.

When we are doing unit testing, it's often the case that we might want to run some common code before various tests. This is what is typically called "set up". It's also the case that we might want to run some common code after tests (to prevent memory leaks, for example). This is what is typically called "tear down".

 Go read [the Catch2 documentation on test cases and sections](https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#test-cases-and-sections), which also covers how set up and tear down works in Catch2.

Take a look at the `Makefile` in the `utility_functions` folder of your section in the collaboratin repository. Catch tests compile just like "regular" C++ files, and are run the same way as well.

Your Tasks (due before lecture 9 class)
----------
Feel free to work with a partner! (this is encouraged) If you work with a partner, __both__ partners should submit the quiz on canvas.

1. You will be filling out the quiz posted on canvas (lecture 8 quiz) concurrently with these tasks. 
2. From the lecture 7 activities, you should have completed through step 2 for both Person 1 and Person 2. If you have not done that, go do that now as Person 1. Fill in question 1 in the lecture quiz.
    1. If you got to step 5 (received a function to implmement in class), submit a pull request with those changes
    2. If you did not receive a function to implement in class, delete your branch locally and remotely ([stack overflow on deleting branches](https://stackoverflow.com/questions/2003505/how-do-i-delete-a-git-branch-locally-and-remotely)).
2. Create a new branch where you will implement a function described [in this spreadsheet](https://docs.google.com/spreadsheets/d/1k1ZU4jLPY6iXOLUAed49HvafEWegVw6XY55woY0O1co/edit?usp=sharing). If you are in the t/th section, work in the `001/utility_functions` directory. If you are in the w/f section, work in the `002/utility_functions` directory. Write your name (and the name of your partner) in the appropriate columns of the spreadsheet. Only one partnership should implement each function in each lecture. Not all functions will be implemented.
3. Create a PR once you have implemented both your assigned function and unit tests for that function (at minimum you should have one `TEST_CASE` and two `SECTION`s).
    1. Important! Read the [code review checklist](../7_git_branches_prs) in the lecture 7 folder to get your PR in tip-top shape!
4. PE 5 will involve writing unit tests using Catch2 so be sure to ask any questions that you may have!
5. Fill out the rest of the questions in the lecture 8 quiz on canvas.

    
