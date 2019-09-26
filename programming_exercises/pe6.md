PE 6 (Code reviews + refactoring)
==============

You may complete this PE with a partner or by yourself.

Part 1 (5 points)
------
__warning__: this part may take some time back + forth so make sure to start early.  

As a part of lecture 8, you should have implemented [one of these functions](https://docs.google.com/spreadsheets/d/1k1ZU4jLPY6iXOLUAed49HvafEWegVw6XY55woY0O1co/edit?usp=sharing) in the course collaboration repository and submitted a pull request corresponding to this function. During lecture 10, we began the code review process corresponding to these PRs. Your job for part 1 is to finish these PRs and merge your code into the master branch of the code base.

Be sure to refer to the [code review checklist](../lectures/7_git_branches_prs/code_review_checklist.md) when conducting your code review.

If you did not complete the [lecture 8 exercises](../lectures/8_ci_prs_unittesting/activities.md), go complete steps #3 and #4 now in the "Your Tasks section".

For full credit for this part of the programming exercise, you must both review someone else's PR _and_ have your branch successfully merged into master. If you worked with a partner, both partner's must submit code reviews and you must work together to get your branch merged into master.

After you have successfully merged your branch with master, delete the branch from the repository. ([stack overflow on deleting branches](https://stackoverflow.com/questions/2003505/how-do-i-delete-a-git-branch-locally-and-remotely))

If you have a branch associated with changes to the Library code, you have two options:
1. Complete the PR and merge the code into master.
2. Close your PR and delete your branch from remote.

__to turn in__: (if you work with a partner, both partners should fill in the PE 6 part 1 quiz)
1. A link to your PR (where you implemented your function)
2. A link to the PR that you reviewed

Part 2 (15 points)
------

In this exercise you will take code that could be significantly improved and [refactor it according to the guidelines from lecture 5](../lectures/5_coding_bash).

Refactor the [provided code](pe6_code/) so that it follows the previously discussed guidelines. If you have never worked with maps before, these are standard data structures that you will find in any language. If you have more experience with python, they are called "dictionaries" in that language. They associate a unique key with a value. Here are [two](https://en.cppreference.com/w/cpp/container/map) [references](https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/) for you to get started.
- __To turn in__:
    - `pe6.zip`, containing: `Makefile`, `main.cpp`, `Society.h`, and `Society.cpp`
