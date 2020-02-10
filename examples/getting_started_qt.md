# QT Creator - Getting Started

## How to access UI elements

In order to access elements of the user interface, you must instantiate the ui field in the MainWindow constructor, like follows: 

```
ui->setupUi(this);
```

Now, anytime you want to access a ui element, say a button, you would call it using the following code:

```c++
ui->myButton
```

## Basics for connecting different arrangements

Connecting signals to slots involves using a variety of statements:

1. Connect the element, the signal, and the slot with the following code:

```c++
// connect(UI element sending the signal, the signal to be sent, the class of the slot, the slot function)
// Example with a custom button:
connect(ui->myButton, &QAbstractButton::pressed, this, &MainWindow::myButton_Clicked);

// Non-UI elements can send signals as well, like timers:
connect(myTimer, SIGNAL(timeout()), this, SLOT(myTimerSlot()));
// Basically every time the timer ticks, the slot triggers.

// Notice there are two ways to mark a signal or a slot:
// &TypeOfObject::action()
// SIGNAL(action())

```

**NOTE**: if an element, like a button, has a default signal and a default slot, no connection statement is needed, otherwise slots will trigger twice.

## Basics of drawing

First, you'll need to create a graphics view and a graphics scene.

```c++
// Graphics view
QGraphicsView * view = ui->myView;

// Graphics scene
scene = new QGraphicsScene;

view->setScene(scene); // Sets up the graphics view to be able to be drawn on.
// you'll also want to set the size of the scene to be the size of the QGraphicsView
view->setSceneRect(0,0,view->frameSize().width(),view->frameSize().height());
```

You should be able to now draw things like lines and circles on your view.

```c++
// Add a line:
scene->addLine(x_pos_start, y_pos_start, x_pos_end, y_pos_end)
```

In a QGraphicsScene, (0,0) is the top-left corner of the screen.  

If you would like your scene to redraw/repaint, you can call `scene->update()`. Note that updating your view instead of your scene may not have the desired effects. `QGraphicsItem`s also have an `update()` method that you may need to use.
