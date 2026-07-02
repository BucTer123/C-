#include "uidir/UI.h"
#include "MWApplication.h"
#include "cmddir/cmd.h"
#include <iostream>
#include <string>

class MVApp : public MVApplication {
    public:
       void init(int argc, char *argv[]);
       void stop(int status) {
           exit(status);
       }
       void ui_create_mainwindow(int screen_width_from_function, int screen_height_from_function, std::string name_window_from_function) {
           UI.create_mainwindow(screen_width_from_function, screen_height_from_function, name_window_from_function, argc, argv);
       }
       void ui_create_button(int first_position_button_from_function, int second_position_button_from_function, std::string name_button_from_function, bool is_callback_from_function) {
           UI.create_button(first_position_button_from_function, second_position_button_from_function, name_button_from_function, is_callback_from_function);
       } 
       void ui_create_label(int first_position_label_from_function, int second_position_label_from_function, std::string name_label_from_function) {
           UI.create_label(first_position_label_from_function, second_position_label_from_function, name_label_from_function);
       }
       void ui_create_input(int first_position_input_from_function, int second_position_input_from_function, std::string name_input_from_function) {
           UI.create_input(first_position_input_from_function, second_position_input_from_function, name_input_from_function);
       }
       void ui_create_custom_author_window(int screen_width_author_window_from_function, int screen_height_author_window_from_function, std::string name_author_window_from_function) {
           UI.create_custom_author_window(screen_width_author_window_from_function, screen_height_author_window_from_function, name_author_window_from_function);
       }
       void cmd_gettime() {
           CMD.get_time();
       }
       void cmd_get_color_text(std::string text_from_function, std::string color_from_function) {
           CMD.get_color_text(text_from_function, color_from_function);
       }
       void cmd_echoln(std::string text_echo_from_function) {
           CMD.echo(text_echo_from_function);
       }
       void cmd_fst(bool third_boolean_from_function) {
           CMD.fst(third_boolean_from_function);
       }
       void cmd_fig(std::string text_fig_from_function, bool fourth_boolean_from_function) {
           CMD.fig(text_fig_from_function, fourth_boolean_from_function);
       }
       void cmd_animation(std::string text_animation_from_function, bool fifth_boolean_from_function) {
           CMD.animation(text_animation_from_function, fifth_boolean_from_function);
       }
       void cmd_main_text() {
           CMD.main_text();
       }
       
};
