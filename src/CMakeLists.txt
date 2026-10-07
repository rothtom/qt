qt_add_executable(main
    main.cpp
)

add_library(firefox
    Firefox.cpp
    ../include/Firefox.hpp
)

add_library(ie
    InternetExplorer.cpp
    ../include/InternetExplorer.hpp
)

add_library(ui
    UserInteractor.cpp
    ../include/UserInteractor.hpp
)

target_link_libraries(firefox PRIVATE
    Qt6::Core
)

target_link_libraries(ie PRIVATE
    Qt6::Core
)

target_link_libraries(ui PRIVATE
    Qt6::Core
)

qt_add_qml_module(main
    URI QtUI
    VERSION 1.0
    QML_FILES
        Main.qml
)

target_link_libraries(main PRIVATE
    Qt6::Quick
    Qt6::Widgets
    ui
    firefox
    ie
)