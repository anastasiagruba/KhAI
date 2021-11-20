#include <QApplication>
#include <QApplication>

 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, everybody! What is up?");
button.resize(200, 60);
button.show( );
 
return app.exec( );
}
