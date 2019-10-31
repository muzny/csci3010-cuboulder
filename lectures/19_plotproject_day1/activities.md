Snow Day Activities! 
=====================
__Due by__: Wednesday, October 30th @ 11:59pm  

Part 1: Reviewing GUI concepts
------------------------------
1. Finish the GUI worksheet [from lecture 18](../18_lowfiprototyping_guis/guis_overview.pdf).
  1. Resources for you:
    1. Model-View separation: [wikipedia](https://en.wikipedia.org/wiki/Model%E2%80%93view%E2%80%93controller) [from best practice software engineering](http://best-practice-software-engineering.ifs.tuwien.ac.at/patterns/mvc.html) [from MIT](http://web.mit.edu/6.813/www/sp17/classes/05-ui-sw-arch/#model-view)
    2. Window/component/containers: [wikipedia GUIs](https://en.wikipedia.org/wiki/Graphical_user_interface) [wikipedia WIMP](https://en.wikipedia.org/wiki/WIMP_(computing))
      1. The __window__ will be your top-level/main __container__.
  2. you should have questions 1 - 4 on the left-hand side completed and question 1, parts A - C on the right hand side completed. Feel free to answer question 2 on the right-hand side to the best of your recollection (as you don't have your prototype with you).
  
Part 2: Getting set up with the plot project ([`plotproject_day1.txt`](plotproject_day1.txt))
--------------------------
Whenever we are working with GUIs, we need to understand the coordinate system that they use. Our GUIs will use the same coordinate system that we see in, for example, web programming. The upper left-hand corner is (0,0) and the bottom right is (width, height).  

Since we'll be working with a plotting application where we want the x and y axes and the points to appear in their standard locations, we'll need to do a bit of math for these equations.

You'll walk through the `plotproject_day1.txt` file and add code or explanations to all numbered questions.  

Some clarifications:
- The `QGraphicsView` is the item that you add to the UI in the WYSIWYG editor. To actually draw, we'll need to add a `QGraphicsScene` to this view (this is already done for you on lines 25 - 27 of `plotwindow.cpp` in the starter code)
- There are some [examples in the examples folder](../../examples/getting_started_qt.md), that we are happy to add to--let us know what you'd like to know how to do.

Post any questions that you have on piazza — I'm happy to clarify.  

For full credit: complete tasks 0 - 5.  
To be better situated for your design document due on Friday, also complete tasks 6 - 7. Even if you don't complete these tasks, do [take a look at the Point objects](point/). Many students have based the "cells" in HW 4 off of these Point objects in the past!
