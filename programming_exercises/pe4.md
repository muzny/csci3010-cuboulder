PE 4 (Version Control & PS 1)
==============

Part 1:  
------

Answer the quiz questions regarding version control in the quiz on canvas (PE 4 quiz).

Part 2:
------
Using the materials from lecture 5 (Tuesday/Wednesday, September 10/11), edit your `.bashrc` so that your PS1 (command line prompt) provides the following information on your command line about your git repos (if your working directory is a git repo):
- clean vs. dirty
- what branch you are on

Your prompt must use at least 3 different colors. To complete this exercise, turn in your .bashrc file and a screen shot showing your prompt indicating both different states above when in a git repo. Your prompt should not break when not in a git repo.

For those of you who currently use `zsh` or any other non-bash unix shell--[read about how to change your shell](http://www.peachpit.com/articles/article.aspx?p=659655&seqNum=3) and implement your own PS1 in bash.

Extras! (for fun AND functionality)
- Add an indication for whether or not your branch is ahead of remote. If you are already experienced with git, doing this is recommended!
- Customize [the other information displayed in your prompt](https://ss64.com/bash/syntax-prompt.html)

__Turn in:__:
`mybashrc.txt` (rename a copy of your file so that it isn't hidden)      
`bashpromptpic.[png|jpg|tiff|pdf]`, a picture showing your prompt in the following three states:  
1. not in a git repo
2. in a clean git repo
3. in a dirty repo
4. (anything else you want to show us)

Extra resources:
- Colors for bash:
    1. [codes link](https://misc.flogisoft.com/bash/tip_colors_and_formatting)
    2. [bash how to link](http://tldp.org/HOWTO/Bash-Prompt-HOWTO/x329.html)
    3. [unix stack exchange on this topic](https://unix.stackexchange.com/questions/124407/what-color-codes-can-i-use-in-my-ps1-prompt)
