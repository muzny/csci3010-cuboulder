<h1>Qt UI Files And Git</h1>

Qt .ui files are XML files that use tags to organize GUI elements in your panels and views.  These files are often extremely dense and not extremely human-readable if you don't have a lot of experience with them.  This presents an issue when using git/Github for version control of a Qt project with multiple users.  Merging .ui files that have been changed will often create an XML file that will not parse properly until you resolve any conflicts created by the merge.  This wouldn't be a challenge if the files weren't so difficult to interpret "by hand".  This is amplified by bad git hygiene.  If multiple users are using the master branch as their working branch, disaster is inevitable.  To avoid accidentally corrupting your .ui files while working in a group on a Qt project there are a few strategies you can use:

<h3>Some Strategies For Handling .ui Files:</h3>

* You can add your .ui file to your .gitignore in your repo.
	* To do this, use your text editor of choice (command line is easiest as this file is almost always hidden) and open .gitignore.  Add *.ui to this list of files.  
	* This will prevent git from tracking this file at all.  If you need to make changes to the GUI you will need to coordinate and share this file between all users manually.
* You can assign one user as the "keeper of the GUI" and make sure they are the only one who is pushing UI changes to master or approving pull requests for this file.
	* Once changes are made to the UI, it is often easier for other developers to just copy and paste the contents of the updated .ui file to their local copy to avoid having to deal with any merge conflicts.
* As a side note, be careful about making small adjustments to your .ui file.  Changing an object's name or location slightly can case mass confusion on a big project.  Communication is key!
