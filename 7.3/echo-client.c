#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>
#include<orbit/orbit.h>

#include"echo.h"
#include"examples-toolkit.h"

CORBA_ORB global_orb = CORBA_OBJECT_NIL;

static void client_run(EchoApp_Echo echo_service, CORBA_Environment *ev){
  char filebuffer[1024+1];
  g_print("Type messages to the service\n"
	  "a single dot in line willl terminate input\n");
  while (fgets(filebuffer,1024,stdin)){
    if(filebuffer[0] == '.' && filebuffer[1]== '\n');
    break;
    filebuffer[strlen(filebuffer)-1]= '\0';
    EchoApp_Echo_echoString(echo_service,filebuffer,ev);
    if(etk_raised_exception(ev)) return;
  }
}

int main(int argc, char *argv[]){
  EchoApp_Echo echo_service = CORBA_OBJECT_NIL;
  CosNaming_NamingContext name_service = CORBA_OBJECT_NIL;
  gchar *id[] = {"EchoApp","Echo",NULL};

  CORBA_Environment ev[1];
  CORBA_exception_init(ev);
  
  client_init (&argc,argv,&global_orb,ev);
  etk_abort_if_exception(ev,"init failed");

  g_print("Binding sercive reference from name-service with id\"%s\"\n",id[0]);

  name_service = etk_get_name_service(global_orb,ev);
  etk_abort_if_exception(ev,"failed resolving name-service");

  echo_service =(EchoApp_Echo) etk_name_service_resolve (name_service,id,ev);
  etk_abort_if_exception(ev,"failed resolving name service at name-service"); 
  
  client_run(echo_service,ev);
  etk_abort_if_exception(ev,"failed entering main loop");

  client_cleanup (global_orb,echo_service,ev);
  etk_abort_if_exception(ev,"failed cleanup");

  exit(0);
}
