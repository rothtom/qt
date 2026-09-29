#include <QObject>
#include <string>

class Firefox : public QObject {
    Q_OBJECT;
public:
    Firefox();
    void browse(const std::string& phrase);
    
};