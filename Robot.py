from time import sleep
import XboxController
import serial
import pygame
due = serial.Serial("/dev/ttymxc3", 115200)
due.write('1')
def myCallBack(controlId, value):
	if controlId == 1 and value > 0.3 and value < 0.5:
		due.write('1')
	elif controlId == 1 and value >= 0.5 and value <0.7:
		due.write('2')
	elif controlId == 1 and value <-0.3 and value >-0.5:
		due.write('3')
	elif controlId == 1 and value <=-0.5 and value >-0.7:
		due.write('4')
	elif controlId == 1 and value <=-0.7:
		due.write('5')
	elif controlId == 1 and value >=0.7:
		due.write('6')
	elif controlId == 0 and value > 0.3:
		due.write('7')
	elif controlId == 0 and value <-0.3:
		due.write('8')
	else :
		due.write('0')
xboxCont = XboxController.XboxController(
	controllerCallBack = myCallBack,
	joystickNo = 0,
	deadzone = 0.1,
	scale = 1,
	invertYAxis = True)
xboxCont.start()
try:
	while True:
		myCallBack
		sleep(0.015)
catch KeyboardInterrupt:
	xboxCont.stop()

