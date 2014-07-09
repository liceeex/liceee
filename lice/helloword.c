#include <QApplication>
#include <>QPushButton>

int main(inargc,char *argv[])
{
  QApplication app (argc,argv);
  QPushButton b("你好,我叫买买提`兴南.");
  b.show();
  QObject::connect(&b,SIGNAL(clicked()),&app,SLOT(quit()));
  return app.exec();
}
