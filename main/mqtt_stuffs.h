#ifndef __MQTT_STUFFS_H_
#define __MQTT_STUFFS_H_
void mqtt_app_start(void);
void mqtt_app_publish_message(char * topic, char* message);
uint8_t mqtt_app_is_connected();
#endif