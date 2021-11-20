#include <QApplication>
#include <QApplication>
#include <QPushButton>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, everybody!");
button.resize(200, 60);
button.show( );
 
return app.exec( );
}
