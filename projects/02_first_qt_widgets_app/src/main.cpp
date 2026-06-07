#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("First Qt Widgets App");
    window.resize(400, 300);

    QLabel label("Welcome to Qt!", &window);
    QPushButton button("Click Me", &window);
    QPushButton button2("Click Me (set text button)", &window);

    QVBoxLayout layout(&window);
    layout.addWidget(&label);
    layout.addWidget(&button);
    layout.addWidget(&button2);

    QObject::connect(&button, &QPushButton::clicked, [&window]() {
        QMessageBox::information(&window, "Hello", "You Clicked the button!");
    });

    QObject::connect(&button2, &QPushButton::clicked, [&label] {
        label.setText("Button clicked");
    });

    window.show();

    return app.exec();
}
