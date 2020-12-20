# Usage of database to coordinate software between multiple platforms
Copyright pending code to communicate multiple software platforms utilizing a database as the communication method. US Copyright Pending and an Apache License 2.0.

![ScreenShot](https://i.ibb.co/kcxByTy/Screen-Shot-2020-10-17-at-3-04-10-PM.png)

<b>iOS App</b> utilizes database as communication method and is able to coordinate with other platforms including Python code and Hardware code. App sends data to database not for storage but rather to communicate. Using this thought process around coordination utilizing a database multiple different platforms can synchronize seamlessly. This iOS app is the "communicator" while the other platforms act as "receivers". When a button is tapped on the app a boolean is tripped and sent to the database. Knowing if this boolean is true or false can allow us to know if the button is tapped or not.

![ScreenShot](https://i.ibb.co/P9B8F4W/Screen-Shot-2020-10-17-at-3-09-10-PM.png)

<b>Python code</b> is pulling the data on button tapped bool from the database. Now in the python code, we are able to know if the button is tapped or not. Already we are able to communicate between these two platforms. We can also create two-way communication methods by sending data from the python code back to the database and reading it from the swift code.

![ScreenShot](https://i.ibb.co/4Z94cnm/Screen-Shot-2020-10-17-at-3-13-36-PM.png)

<b>C++</b> is also being included. Hardware can also be used as a "receiver". This is an example of micro-python code that reads the data from the database and can come to a conclusion of whether or not the button in the app is tapped.
