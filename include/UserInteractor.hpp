#include <QObject>
#include <string>

class userInteractor : public QObject {
    Q_OBJECT

    public:
        userInteractor();

        void interact();

    signals:
        void gotPhrase(const std::string& phrase);
};