import QtQuick
import QtQuick.Controls

ApplicationWindow {
    visible: true

    width: 800
    height: 600

    title: "Sudoku"

    Button {
        anchors.centerIn: parent

        text: "Hello Qt!"

        onClicked: {
            console.log("Button clicked!")
        }
    }
}