#include <QApplication>
// #include <QGuiApplication>
// #include <QQmlApplicationEngine>

#include "UserInteractor.hpp"
#include "Firefox.hpp"
#include "InternetExplorer.hpp"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    userInteractor ui = userInteractor();

    Firefox firefox = Firefox();

    internetExplorer ie = internetExplorer();


    QObject::connect(&ui, &userInteractor::gotPhrase, &firefox, &Firefox::browse);
    QObject::connect(&ui, &userInteractor::gotPhrase, &ie, &internetExplorer::request_browse);
    QObject::connect(&ie, &internetExplorer::request_browse, &ie, &internetExplorer::browse);

    ui.interact();
    
    return app.exec();
}