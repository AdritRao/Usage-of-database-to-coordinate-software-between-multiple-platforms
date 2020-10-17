## Python Portion fetching data from Database
## (End result is coordination with mobile app and other platforms)
## By Adrit Rao

# Import Firebase Library
import pyrebase

config = {
    "apiKey": "apiKey",
    "authDomain": "projectId.firebaseapp.com",
    "databaseURL": "https://databaseName.firebaseio.com",
    "storageBucket": "projectId.appspot.com"
}

firebase = pyrebase.initialize_app(config)

db = firebase.database()

button_app_tapped = db.child("communication").child("button_app_tapped").get()

while 0<1:
    if button_app_tapped == True:
        print("button_app_tapped is TRUE")
    else:
        print("button_app_tapped is FALSE")