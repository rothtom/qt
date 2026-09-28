qt_add_executable(main main.cpp)

qt_add_qml_module(main
    URI QtUI
    VERSION 1.0
    QML_FILES
        Main.qml

)

target_link_libraries(main PRIVATE
    Qt6::Quick
)