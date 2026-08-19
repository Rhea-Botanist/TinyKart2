# TinyKart2

**VERY MUCH STILL INDEV**

**Known Issues/Considerations:**
- Haven't gotten around to setting up udev/dialout rules, please manually check the USB interface for the kart (`ls /dev` and plug/unplug USB connections) and set permissions with `sudo chmod 777 <filepath>`.

-yahboom_driver straight up just isn't really implemented. Has a couple of files to test interfacing with the board but thats it. Reason: I hate Python (never actually tried to learn it fully)