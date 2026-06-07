# Project 02 - First Qt Widgets App

## What I learned

- ```
  #include <QApplication>
  #include <QWidget>

  int main(int argc, char* argv[])
  {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("First Qt Widgets App");
    window.resize(400, 300);
    window.show();

    return app.exec();
  }
  ```
  - `QApplication` is like a main controller, the main class managing everthing
  - we initialize an instance! (there will have only ONE `QApplication` instance!

  - `Qwidget` is a very common class, can be window, button, etc...

  - `window.show()` show the widget! without this, it won't be shown!

  - `app.exec()`
    GUI is not like console-based application, once finish execution then terminate
    GUI application have something called `event loop` which is a loop to track what UI component has been select/click
    and this `app.exec()` is the event loop

- ```
    QPushButton button("Click Me", &window);

    button.move(150, 120);
    button.resize(100, 40);
  ```
  - `&window` define the button as a sub-component of the window
  - `move` will move the button to the x and y axis in the window

- ```
    QObject::connect(&button, &QPushButton::clicked, [&window]() {
        QMessageBox::information(&window, "Hello", "You Clicked the button!");
    });
  ```
  - in Qt, the concept of signal and slot is important
  - `QObject` is the slope which connect the signal and slot!
  - in the code above, what it does is:
    - if the button is clicked, execute the code in {}
      ```
      QObject::connect(who_send_the signal, the_signal, what_to_do {} );
      ```


## Result

- NIL