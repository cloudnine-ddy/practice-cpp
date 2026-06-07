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