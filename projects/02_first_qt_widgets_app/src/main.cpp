#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("First Qt Widgets App");
    window.resize(400, 300);

    QPushButton button("Click Me", &window);
    button.move(150, 120);
    button.resize(100, 40);

    QObject::connect(&button, &QPushButton::clicked, [&window]() {
        QMessageBox::information(&window, "Hello", "You Clicked the button!");
    });

    window.show();

    return app.exec();
}
