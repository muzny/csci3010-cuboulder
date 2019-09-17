[link to collab repo](https://github.com/muzny/csci3010-fall2019-collab)

First
-----
Fill out the front and back of the git branches worksheet.

Then
----
In groups of 2 (pick one person to be Person 1 and one person to be Person 2), get a function from Felix to implement and complete the following:

Person 1
--------
1. Check out a new branch locally `git checkout -b [branchname]`. Make sure to name the branch so that we know what group it's associated with.
2. Push your new branch to remote `git push -u origin [branchname]`.
3. Help your teammate(s) get the new branch locally on their machines.
4. You will be implementing the code in `library/run_library.cpp` that tests the code that Person 2 is implementing once they have finished #4. Feel free to work with them!
5. Once you're done, open a pull request on github with your new changes to our code base.

Person 2
--------
1. You will be getting the new branch from remote once your partner has created it and pushed it to remote. Help them out with this task!
2. Once Person 1 has pushed your new branch to remote, check this branch out locally. `git fetch`, then `git checkout [branchname]`. Remember you can use `git branch` to show which options are available to you.
3. Implement the assigned function in `library/Library.h` and `library/Library.cpp`
4. When you've finished #2, push your changes to remote (not remote master, the remote version of your branch!)
5. Work with Person #1 to implement the code for their question #4.


Finally
-------
Review the PR assigned to your group on github, making sure to address all points in the [code review checklist](code_review_checklist.md).
    1. Everyone should pull the branch that you've been assigned to, compile it, and test it. `git fetch`, then `git checkout [branchname]`
    2. Take a screen shot of your terminal after you have run `git status` and `make` on the branch that you are testing. Turn this screenshot in on canvas.
    3. Everyone should make at least 1 comment on the pull request. If you think that no changes need to be made, birefly describe why.
