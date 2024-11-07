import QtQuick
import QtQuick.Controls 2.15
import MyApp 1.0 // Import the C++ class as a QML module

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Hello {
        id: helloObject
    }

    Button {
        text: "Click me"
        anchors.centerIn: parent
        onClicked: helloObject.get_message()
    }
}
