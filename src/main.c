#include <stdio.h>
#include <unistd.h>
#include "graphics.h"

void my_exit(void* data)
{
  shutdown_gui(data);
}

int main()
{
  GUI* g=NULL;
  WIDGET* testLab=NULL;
  WIDGET* testBut=NULL;
  WIDGET* testRadio=NULL;

  g=init_gui();

  testLab=create_label("Hello World!",10,10);
  testBut=create_button("Exit",430,455,my_exit,g);
  testRadio=create_radio_button("Click Me!",10,50);
  
  create_main_window(g,"Testing Window");
  set_main_size(g,500,500);
  add_to_main(g,testLab);
  add_to_main(g,testBut);
  add_to_main(g,testRadio);

  show_main(g);

  while(gui_running(g)){
    sleep(1);
  }

  destroy_gui(g);
  return 0;
}
