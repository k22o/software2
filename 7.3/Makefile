#all:	echo-server,echo-client
#	./echo-server ORBInitRef NamingService=corbaloc:iiop:127.0.0.1:2809/NameService


echo-server : echo-server.c
	gcc -o echo-server echo-server.c echo-common.c echo-skels.c examples-toolkit.c `pkg-config ORBit-CosNaming-2.0 --cflags --libs`
echo-client : echo-client.c
	gcc -o echo-client echo-client.c echo-common.c echo-stubs.c examples-toolkit.c `pkg-config ORBit-CosNaming-2.0 --cflags --libs`
