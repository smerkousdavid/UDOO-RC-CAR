# UDOO-RC-CAR
A RC Car programmed in Arduino, Python, and terminal

WHAT YOU NEED
=================

##### Libraries for ubuntu/linux

USBLIB

      sudo apt-get install libusb-1.0-0-dev
      sudo apt-get install libusb-dev

GNU

      sudo apt-get install build-essential

PYGAME

      sudo apt-get install python-pygame

PYTHON 2.7
      Dependencies
      
            sudo apt-get install build-essential
            sudo apt-get install libreadline-gplv2-dev libncursesw5-dev libssl-dev libsqlite3-dev tk-dev libgdbm-dev libc6-dev libbz2-dev
            
Then download using the following command:
            
            cd ~/Downloads/
            wget http://python.org/ftp/python/2.7.5/Python-2.7.5.tgz
            Extract and go to the dirctory:
            
            tar -xvf Python-2.7.5.tgz
            cd Python-2.7.5
Now, install using the command you just tried:
            
            ./configure
            make
            sudo make install
            
GSTREAMER
  
      sudo add-apt-repository ppa:gstreamer-developers/ppa
      sudo apt-get update
      sudo apt-get install gstreamer1.0*

g++

      sudo apt-get install g++


XBOXDRV

      sudo add-apt-repository ppa:grumbel/ppa

      sudo apt-get update && sudo apt-get install xboxdrv

      gksu gedit /etc/modprobe/blacklist.conf

      blacklist xpad

      sudo rmmod xpad

      sudo xboxdrv --silent
or
      sudo xboxdrv --silent --detach-kernel-driver


Other packages will be needed to install these packages

By the way if you have a camera module look up on google motion, or how to install motion to simulate a ip camera


