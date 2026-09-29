#include <QObject>
#include <QElapsedTimer>
#include <string>


class internetExplorer : public QObject {
    Q_OBJECT

    public:
        internetExplorer();
        void browse(const std::string& phrase);
        void request_browse(const std::string& phrase);

    private:
        QElapsedTimer timer;
        
    signals:
    void browse_requested(const std::string& phrase);
};