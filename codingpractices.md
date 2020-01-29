A Couple Coding Practices for Better Code
=========================================

1. Boolean zen
- return results of logical tests when able
- shouldn't have empty branches
- shouldn't compare == or != to true or false


2. Conditionals (generally)
- code that is the same in all branches should not be in the conditional (needs to be in the same location as well)
- code that is at the beginning of all branches should be moved to before the conditional
- code that is at the end of all branches should be moved to after the conditional
- tests in else if statements should tests for (! test from a previous statement) unless that condition isn't guaranteed

3. Conditionals (shouldn't be used in place of loops)
- conditionals shouldn't be used in place of writing either a loop over values or a more general statement that accesses a parameter/field

4. Magic numbers
- avoid random numbers (use iterators and size functions to deal with maps/vectors/collections)
- random numbers in your code (when required) should always only appear in one place
    - if associated with a class, should be made into class constants (static const)
    - if not associated with a class, should be either dynamically computed (vector size for instance) or saved in a variable


5. Functions/methods
- should have 1 and only 1 well-defined task
- if a method needs to complete subtasks to complete the overall task, that's fine but those subtasks should be functions, especially when you can easily describe what the subtask is and if it is also used in other contexts
