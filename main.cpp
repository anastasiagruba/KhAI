#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, everybody!");
button.resize(180, 80);
button.show( );
 
return app.exec( );
}
