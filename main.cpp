#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);


  QPushButton button("Hello, hossam!");
  button.resize(200, 100);
  button.show();
  button.show();

  return app.exec();
}
