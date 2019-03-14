PE 8 (collab repo clean up + Qt installation + 1st technical interview)
==============

1. (if this is not done by 3/12, you will receive a penalty on this programming exercise) Clean up all branches and pull requests in the course collaboration [repository](https://github.com/muzny/csci3010-spring2019-collab).
- This may require responding to reviews/making changes.
- This may require submitting new pull requests for branches that you have laying around.
- When your PRs are approved, you should fix any merge conflicts, merge your branch into master, then delete your branch.

(10 points)  
2. Install [QtCreator](http://doc.qt.io/qt-5/gettingstarted.html). We'll be using Qt version 5.x. Warning: this software does take a significant amount of space on your machine. You can uninstall it at the end of the semester, but we will be using it for the rest of the course.
- Here is a [Qt for beginners wiki that you may find useful](https://wiki.qt.io/Qt_for_Beginners)
- Please post any Qt Installation questions on piazza with screenshots so that your classmates, James, and I can help you out (or come to office hours).
- You should download the open source version. When you get to the install screen select "Qt Creator" and the most recent version of Qt. (Not All! That would be _very_ _very_ large.)
- Note that if you are running QtCreator on certain linux distributions, the resolution settings are not ideal. If you find the settings to fix these, please post them on piazza.

3. Create a new project in QtCreator, following the steps below.
    1. Click "New Project", then choose "Qt Widgets Application".
    2. Give this project a name.
    3. Choose the Desktop Qt for Kit selection (no need to choose any mobile kits as well).
    4. Click "Continue" under the Class Information tab, then click "Done" under the Project Management tab.
    5. Under the "Edit" choice (on the left-hand options tab), click your new project folder. Either right-click the folder, then choose "run" OR click the green play button on the bottom left of the screen.
        1. You should have a blank window titled "MainWindow" pop-up. To exit, press the "x" button in the upper right-hand corner of your running application.
    6. Edit `mainwindow.cpp` by adding `ui->statusbar->showMessage("YOUR MESSAGE HERE")` to the `MainWindow` constructor. Run the application and take a screenshot. Make sure to replace the string "YOUR MESSAGE HERE" with a message of your own!

4. (10 points) Complete a mini-technical interview with Soumyajyoti during the weeks of 3/12 - 3/22. (Scheduler to appear on canvas).
Here is non-exhaustive a list of topics to review!
- linked lists (implementation & manipulation)
- stacks, maps, queues (when and how to use them)
- string manipulation
- working with 2d arrays/vectors
- recognizing the complexity of your solutions



__To turn in__:
- 1 screenshot of your installed version of Qt Creator running your application with the updated status bar.
- 2 a text file in which you answer the following questions: in Qt, what is a signal? what is a slot? <s>Where are they used in the TextFinder tutorial?</s> (updated 3/10, 10am) (Feel free to [read the Qt documentation about signals and slots](http://doc.qt.io/qt-5/signalsandslots.html))
